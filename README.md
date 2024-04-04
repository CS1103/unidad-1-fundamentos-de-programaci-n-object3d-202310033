# Ejercicio #1: 3D - Object
Diseñar un sistema que permita gestionar diferentes tipos de objetos tridimensionales (como esferas, cubos y pirámides) y realizar operaciones comunes sobre ellos, tales como calcular el volumen, el área de superficie, y comparar estos objetos según sus propiedades geométricas.

## Objetivos
Desarrollar un sistema en C++ para gestionar objetos tridimensionales, facilitando la realización de cálculos geométricos y comparaciones entre diferentes tipos de objetos, utilizando polimorfismo y una sobrecarga de operadores avanzada.

## Requerimientos
### Parte #1

### Clase Base Object3D:

- Método público virtual puro que devuelva el volumen (`volume()`) del objeto.
- Método público virtual puro que devuelva el área (`surface()`) de la superficie del objeto.
- Sobrecargar el operador `<<` para mostrar información relevante del objeto (
    `type`, `volume`, `surface`).

### Clases Derivadas:

### Sphere:
Atributo específico: `radio (double)`.  
Implementar los métodos para calcular volumen (`volume`) y área (`surface`) específicos para una esfera.
### Cube:
Atributo específico: `side (double)`.  
Implementar los métodos para calcular volumen (`volume`) y área (`surface`) específicos para un cubo.
### Pyramid:
Atributos específicos: `base  (double)`, `height (double)`.  
Implementar los métodos para calcular volumen (`volume`) y área (`surface`) específicos para una pirámide.

## Sobrecarga de Operadores:
- Sobrecarga del operador `==` para comparar si dos objetos 3D tienen el mismo volumen.
- Sobrecarga del operador `!=` para complementar la comparación de igualdad.
- Sobrecarga de los operadores `>` y `<` para comparar objetos basándose en su volumen, permitiendo identificar cuál tiene mayor o menor volumen.

## Implementación:
Crear objetos de cada tipo (Sphere, Cube, Pyramid) y demostrar el uso de polimorfismo y sobrecarga de operadores para realizar cálculos y comparaciones.
Utilizar un vector de punteros a la clase base Objeto3D para almacenar los diferentes objetos y manipularlos de manera uniforme.
Implementar una función para recorrer el vector, mostrar la información de cada objeto y las comparaciones entre ellos usando las sobrecargas de operadores.

## Pruebas:
