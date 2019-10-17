/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, cont=1,suma=0;
    printf("Cuantos  numeros va a ingresar: ");
    scanf("%d",&num);
    while(cont<=num)
    {
        suma=suma+cont;
        printf("%d\n",cont);
        cont++;
    }//while(cont=num);
    printf("la suma de %d numeros es %d\n",num, suma);
}


