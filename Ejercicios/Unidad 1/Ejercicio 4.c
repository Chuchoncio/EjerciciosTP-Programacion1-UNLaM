// Desarrollar una funcion para calcular la raíz cuadrada de X
// con una tolerancia TOL

#include <stdio.h>

float calcularRaizCuadrada(int a, double tol);

int main()
{
    int a;
    double tol;

    printf("Ingrese numero positivo y valor TOL: ");
    scanf("%d %f", &a, &tol);

    printf("La raiz cuadrada de %d es: %.2f", a, calcularRaizCuadrada(a, tol));
}

float calcularRaizCuadrada(int a, double tol)
{
    int i;
    float ri = 1;
    float r;

    do
    {
        ri = r;
        r = (0.5) * (ri + (a/ri));

    }while(tol <= (r-ri) || tol <= (ri-r));

    return r;
}
