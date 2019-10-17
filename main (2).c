/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tabla,resul=1,cont=1,lim;
    printf("Ingrese la tabla: ");
    scanf("%d",&tabla);
    printf("ingrese el limite: ");
    scanf("%d",&lim);
    while(cont<=lim)
    {
        resul=tabla*cont;
        printf("%dX%d=%d\n",tabla,cont,resul);
        cont++;
    }
    printf("la suma de %d numeros es %d",cantNum, suma);
}


