# Prácticas de Procesadores de Lenguajes

Este repositorio contiene la implementación de las cinco prácticas realizadas en el curso de **Procesadores de Lenguajes** en la Universidad de Granada durante el curso 2024/2025. Estas prácticas se centran en el diseño e implementación de traductores y compiladores utilizando herramientas como **LEX** y **YACC**.

## Contenido del Repositorio

### Práctica 1: Diseño del Lenguaje
- **Objetivo:** Diseñar un lenguaje de programación estructurado inspirado en C con palabras reservadas en castellano y soporte para estructuras de datos como pilas.
- **Resultados:**
  - Especificación formal del lenguaje en BNF.
  - Definición de la semántica del lenguaje en lenguaje natural.
  - Identificación de los tokens necesarios para el análisis léxico.

### Práctica 2: Análisis Léxico
- **Objetivo:** Implementar un analizador léxico utilizando LEX basado en los tokens definidos en la Práctica 1.
- **Resultados:**
  - Tabla de tokens con expresiones regulares.
  - Manejo de errores léxicos y recuperación.
  - Salida con secuencia de tokens, atributos y lexemas reconocidos.

### Práctica 3: Análisis Sintáctico
- **Objetivo:** Implementar un analizador sintáctico con YACC/BISON a partir de la especificación en BNF del lenguaje.
- **Resultados:**
  - Resolución de conflictos shift/reduce y reduce/reduce.
  - Integración con el analizador léxico.
  - Manejo de errores sintácticos y mensajes descriptivos.

### Práctica 4: Análisis Semántico
- **Objetivo:** Implementar un analizador semántico que gestione una tabla de símbolos y realice comprobaciones semánticas como:
  - Comprobación de tipos.
  - Ámbito de identificadores.
  - Validación de argumentos en subprogramas.
- **Resultados:**
  - Estructuras de datos para gestionar la tabla de símbolos.
  - Mensajes detallados de errores semánticos.

### Práctica 5: Generación de Código Intermedio
- **Objetivo:** Generar código intermedio basado en cuartetos con sintaxis de C.
- **Resultados:**
  - Traducción de expresiones complejas a sentencias simples.
  - Implementación de instrucciones de control de flujo y estructuras de datos (pilas).
  - Generación de etiquetas y variables temporales.

## Tecnologías y Herramientas
- **LEX/FLEX:** Para la implementación del analizador léxico.
- **YACC/BISON:** Para la generación del analizador sintáctico y semántico.
- **C:** Lenguaje base para el código intermedio.

## Estructura del Repositorio
```
/
├── Practica1/    # Diseño del lenguaje.
├── Practica2/    # Análisis léxico.
├── Practica3/    # Análisis sintáctico.
├── Practica4/    # Análisis semántico.
├── Practica5/    # Generación de código intermedio.
└── README.md     # Este archivo.
```

## Ejecución
Cada práctica incluye su propio conjunto de instrucciones para la ejecución. Por lo general:
1. Compilar el analizador con los comandos `lex` y `yacc` correspondientes.
2. Probar con los ejemplos de código fuente incluidos.

