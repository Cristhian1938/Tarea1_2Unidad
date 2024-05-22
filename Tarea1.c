#include <stdio.h>
int main() 
{
//Declaracion de las variables
    int a , e; //Variable de tipo entero
    float b , j , h, promedio; //Variable de tipo float o decimal
    char c[100] ; //Variable de tipo caracter 

//Para ingresar nuestro nombre utilizando la variable char
    printf("Hola, Bienvenido estimado Usuario\nPorfavor ingrese su nombre: " ); //Aki la funcion printf nos sirve para mostrar el mensaje de Bienvenida
    //scanf("%s", c); El scanf solo lee hasta que hay un espacio
    gets(c); //En cambio el gets si guarda toda la cadena de caracteres asi sea que se de un espacio 

    printf("Hola %s" ,c); //Aki se utiliza el printf para mostrar el resultado ingresado

printf("\n");//Esta funcion del printf con \n nos sirve para hacer un salto de linea
printf("\n");

//Para calcular la suma de dos numeros utilizando la variable Int
    printf("Ingrese los 2 numeros para calcular el suma de estos\n");
    printf("Ingrese el primer numero: "); //aki printf nos muestra el mensaje de ingresar el primer numero
    scanf("%d",&a);
    printf("Ingrese el segundo numero: "); //aki printf nos muestra el mensaje de ingresar el segundo numero
    scanf("%d", &e);
    printf("La suma de estos numeros es: %d", a + e );//aki prinft nos muestra el resultado de la suma de los 2 numeros ingresados por teclado

printf("\n");//Esta funcion del printf con \n nos sirve para hacer un salto de linea
printf("\n");
//Para saber el promedio de tres numeros usando la variable
printf("Ingrese los 3 numeros para calcular el promedio de estos\n"); //Aki printf nos muestra en pantalla el mensaje de que se debe ingresar 3 numeros los cuales van a ser pedidos a continuacion

printf("Ingrese el primer numero: ");//nos muestra en pantalla ingresar el primer numero
    scanf("%f", &b); // Lee el primer número ingresado

    printf("Ingrese el segundo numero: ");//nos muestra en pantalla ingresar el segundo numero
    scanf("%f", &j); // Lee el segundo número ingresado

    printf("Ingrese el tercer numero: ");//nos muestra en pantalla ingresar el tercer numero
    scanf("%f", &h); // Lee el tercer número ingresado

    promedio = (b + j + h) / 3; // Calcula el promedio

    printf("El promedio de los numeros es: %.2f\n", promedio); // Imprimir el promedio con dos decimales y se usa .2 para limitar el numero de decimales despues de la coma o punto del float

    // Uso return 0 para indicar que el programa finalizó correctamente
    return 0; 
}
