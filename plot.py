import numpy as np
import matplotlib.pyplot as plt

for j in range(5):
    data = np.loadtxt(f"psi_{j+1}.dat")
    x = data[:, 0]
    psi = data[:, 1]

    plt.plot(x, psi, label=f"Estado {j+1}")

plt.xlabel("x")
plt.ylabel("$\psi(x)$")
plt.title("Funciones de onda para el oscilador armónico cuántico")
plt.legend()
plt.grid()
plt.show()
