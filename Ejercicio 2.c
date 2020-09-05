// Calcular el combinatorio m sobre n

#include <stdio.h>

int combinatorio(int n, int m);
int factorialEntero(int n);

int main()
{
    int n, m;

    printf("Ingrese dos numero entero (n y m): ");
    scanf("%d %d", &n,&m);

    printf("El combinatorio de %d sobre %d es: %d", m, n, combinatorio(n, m));
}

int combinatorio(int n, int m)
{
    int combi;
    int resta = m-n;

    combi = factorialEntero(m) / (factorialEntero(n)*factorialEntero(resta));

    return combi;
}

int factorialEntero(int n)
{
    int fact = n;

    if(fact == 0)
        return 1;

    while(n > 1)
    {
        fact *= (n-1);
        n--;
    }

    return fact;
}
