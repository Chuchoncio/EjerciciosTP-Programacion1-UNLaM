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

unsigned int factorialEntero(unsigned int n)
{
    unsigned int fact = 1;

   // si n es 0, no entra al for porque i que comienza con 0, da falso en la condicion i > 1 y fact se queda con 1.
   // Si n es 1, ocurre lo mismo porque i > 1 es falso (i = 1) y fact se queda con el 1 y lo devuelve.
   for(int i = n; i > 1; i--)
       fact *= i;

    return fact;
}
