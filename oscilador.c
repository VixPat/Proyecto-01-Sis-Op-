#include <stdio.h>
#include <math.h>

#define hbar 1.0    // Constante de Plank reducida
#define m 1.0       // Masa de la partícula
#define dx 0.01     // Tamaño del paso en x

double V(double x) {
    // Definir el potencial V(x) aquí
    return 0.5 * m * pow(x, 2);  // Potencial del oscilador armónico
}

double numerov(double psi_prev, double psi_curr, double k_prev, double k_curr, double k_next) {
    return (2 * (1 - (5.0/12) * k_curr * dx * dx) * psi_curr - (1 + (1.0/12) * k_prev * dx * dx) * psi_prev) / (1 + (1.0/12) * k_next * dx * dx);
}

void solve_schrodinger(double *psi, double *x, double E, int n) {
    double k[n];
    psi[0] = 0; // Valor inicial de psi
    psi[1] = dx; // Valor inicial de psi'
    
    // Calcular los valores de k
    for (int i = 0; i < n; i++) {
        x[i] = i * dx;
        k[i] = 2 * m * (V(x[i]) - E) / (hbar * hbar);
    }

    // Aplicar el método de Numerov para encontrar psi(x)
    for (int i = 2; i < n; i++) {
        psi[i] = numerov(psi[i-2], psi[i-1], k[i-2], k[i-1], k[i]);
    }
}

int main() {
    int n = 1000; // Número de puntos en x
    double psi[n];
    double x[n];
    double E;
    
    // Calcular y graficar las funciones de onda para diferentes valores de E
    for (int j = 0; j < 5; j++) {
        E = (j + 0.5); // Energía de los primeros 5 estados excitados
        solve_schrodinger(psi, x, E, n);

        // Escribir los valores de x y psi en un archivo para graficar
        char filename[20];
        sprintf(filename, "psi_%d.dat", j+1);
        FILE *fp = fopen(filename, "w");
        for (int i = 0; i < n; i++) {
            fprintf(fp, "%lf %lf\n", x[i], psi[i]);
        }
        fclose(fp);
    }

    return 0;
}

