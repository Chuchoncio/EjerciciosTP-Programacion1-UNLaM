#include <stdio.h>
#include <math.h>

int obtenerSeno(double x, double tol);
int factorialEntero(int n);

int main()
{
    double x;
    double tol;

    printf("Ingrese X y TOL: ");
    scanf("%f %f", &x, &tol);

    printf("El seno de %.2f es: %.2f",x,obtenerSeno(x, tol));

    return 0;
}

int obtenerSeno(double x, double tol)
{
    double termino;
    double termino2;
    double seno = 1;
    int exp = 3;

    seno = x;

    while(seno >= tol)
    {
        termino = (pow(x,exp)/factorialEntero(exp));
        termino2 = (pow(x,2+exp)/factorialEntero(2+exp));
        seno -= (termino + termino2);
        exp+=2;
    }

    return seno;
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
