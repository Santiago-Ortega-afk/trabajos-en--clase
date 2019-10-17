/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int suma=0,cont=1,num,cantNum;
    printf("Cuantos  numeros va a ingresar: ");
    scanf("%d",&cantNum);
    while(cont<=cantNum)
    {
        printf("ingrese un numero: ");
        scanf("%d",&num);
        sum=suma+num;
        cont++;
    }
    printf("la suma de %d numeros es %d",cantNum, suma);
}


