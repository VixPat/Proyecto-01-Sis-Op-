cmake_minimum_required(VERSION 3.0)

project(Oscilador)

# Compilar el ejecutable a partir de oscilador.c
add_executable(ejecutable oscilador.c)

# Enlazar con la biblioteca matemática (libm)
target_link_libraries(ejecutable m)

# Copiar el script plot.py al directorio de salida de compilación
configure_file(plot.py plot.py COPYONLY)
