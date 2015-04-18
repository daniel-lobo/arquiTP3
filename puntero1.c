/*
Dibuje un diagrama de memoria explicando donde se ubican las variables, para ello tiene que modificar el codigo fuente
y en base a los valores de punteros que entrega el programa realizar el dibujo.
-Ejecute el comando "free" en Linux y observe la memoria de su PC.
-Calcule la posición de memoria donde se encuentras las variables. Existe RAM en esas posiciones ??

*/

#include<stdio.h>

void main(void)
{

int a_int=1111;
int b_int=2222;
short s_short=33;
char c_char='Q';
long l_long=5555666;
char *array_cons1="Aprendiendo";
char array2[6]={0,1,2,3,4,5};
float f_float=0.1234567;


printf("Puntero de a_int %p\n",&a_int);


}

