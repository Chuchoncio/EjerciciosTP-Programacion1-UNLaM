// Desarrollar una funcion para calcular el e^x, dados X y TOL

#include <stdio.h>
#include <math.h>

double calcularE(int x, int tol);
int factorialEntero(int n);

int main()
{
    int x;
    double tol;

    printf("Ingrese numero entero y TOL: ");
    scanf("%d %f", &x, &tol);

    printf("La funcion e^x da como resultado: %.2f", calcularE(x, tol));

}

double calcularE(int x, int tol)
{
    double e;
    int n;
    double calculo;

    e = n = 1;

    do
    {
        calculo = (pow(x,n)/factorialEntero(n));
        e += calculo;
        n++;
    }while((tol <= e));

    return e;
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
