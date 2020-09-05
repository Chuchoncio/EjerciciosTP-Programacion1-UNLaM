// Calcular el factorial de un entero

#include <stdio.h>
int factorialEntero(int n);

int main()
{
    int num;

    printf("Ingrese numero entero: ");
    scanf("%d", &num);

    printf("El factoria de %d es: %d", num, factorialEntero(num));
    
    system("pause");
}

int factorialEntero(int n)
{
    if(n == 0)
        return 1;

    int fact = n;

    while(n > 1)
    {
        fact *= (n-1);
        n--;
    }

    return fact;
}
