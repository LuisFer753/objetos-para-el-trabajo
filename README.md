# objetos-para-el-trabajo

Para este proyecto se plantea una situación dentro de una empresa en la que hay 3 clases diferentes de personas (directivos, trabajadores, clientes), cada
quien con su tipo de características y roles correspondientes. El programa debe ser capaz de crear una persona dentro de alguna de las clases anteriores, con
un rol específico (Dueño, gerente, oficinista, investigador, comprador, socio), en el que estará basado para poder atribuirle atributos que encajen con el 
rol de la persona creada para la empresa. El usuario tendrá que rellenar los puestos de trabajo y gestión de la empresa usando el programa para crear las 
personas encargadas de dichos puestos y ver cuánto dinero debe dedicar la empresa para los salarios de las personas que forman parte de la empresa.


Clase madre: Persona
Atributos: Nombre, edad, rol
Métodos:Constructor, Getters y Setters

Clases hijas: Directivo, Trabajaddor, Cliente
Atributos: (heredados)
Métodos (heredados)

Clase con composición de las clases hijas: Empresa
Atributos: directivos, trabajadores, clientes, contador para cada tipo de persona, nombre
Métodos: get y set nombre, crear cada tipo de persona, mostrar todas las personas para cada tipo, calculo de salarios por tipo de miembro de la empresa

salario por cada directivo: $24,000
salario por cada trabajador: $15,000
