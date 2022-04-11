/*
@Author: Sebastian Sanchez Bentolila
https://github.com/Sebastian-Sanchez-Bentolila

Program that calculates the volume of a sphere
V =  4/3 * PI * Radio^3
*/

//Modules
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>



main ()
{
    float radio, volumen;
    const float PI = 3.14159265359;


    printf( "Este programa sirve para calcular el volumen de una esfera\n");

    printf( "Ingrese el radio: ", radio),
    scanf( "%f", &radio );

    volumen = (4.0/3.0) * PI * pow(radio, 3);

    printf( "\n\nEl volumen es: %f\n\n", volumen);

    system("pause");
    return 0;
}






