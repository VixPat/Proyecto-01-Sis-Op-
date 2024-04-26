# Solución del Oscilador Armónico Cuántico por Medio de Métodos Numéricos

En este proyecto, hemos desarrollado una rutina en lenguaje C que implementa el método de Numerov para resolver el oscilador armónico cuántico. Además, hemos utilizado Python para graficar las funciones de onda para varios valores de energía.

## Implementación del Método de Numerov en C

El método de Numerov se utilizó para resolver la ecuación de Schrödinger unidimensional e independiente del tiempo para el oscilador armónico cuántico. La ecuación de Schrödinger viene dada por:

\[
-\frac{\hbar^{2}}{2m}\frac{d^{2}\psi}{dx^{2}} + V(x)\psi(x) = E\psi(x)
\]

donde:
- \( \psi(x) \) es la función de onda, generalmente compleja.
- \( \hbar \) es la constante de Plank reducida.
- \( m \) es la masa de la partícula.
- \( V(x) \) es el potencial.
- \( E \) es la energía.

El método de Numerov es un algoritmo numérico utilizado para resolver ecuaciones diferenciales de segundo orden. Se basa en una aproximación de la segunda derivada y se utiliza para encontrar soluciones a problemas cuánticos.

## Implementación en C

El código implementado en C consta de las siguientes partes:

- Definición del potencial \( V(x) \).
- Implementación del método de Numerov para resolver la ecuación de Schrödinger.
- Cálculo y graficación de las funciones de onda para varios valores de energía.

## Gráficos de las Funciones de Onda

Se utilizaron Python y la biblioteca matplotlib para graficar las funciones de onda calculadas por el método de Numerov. Se generaron gráficos para los primeros cinco estados excitados del oscilador armónico cuántico.

## Conclusiones

Hemos desarrollado con éxito una rutina en C que implementa el método de Numerov para resolver el oscilador armónico cuántico. Además, hemos utilizado Python para graficar las funciones de onda resultantes. Este proyecto nos ha permitido profundizar en la comprensión de la física cuántica y los métodos numéricos.

