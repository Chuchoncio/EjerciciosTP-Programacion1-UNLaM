// Desarrollar una funcion para determinar si un entero pertenece a la serie
// Fibonacci o no

#include <stdio.h>

int esFibonacci(int num);

int main()
{
    int num;

    printf("Ingrese un entero: ");
    scanf("%d", &num);

    if(esFibonacci(num))
        printf("\nEl numero %d pertenece a la serie Fibonacci", num);
    else
        printf("\nEl numero %d NO pertenece a la serie Fibonacci", num);
}

int esFibonacci(int num)
{
    int fibo = 0;
    int i = 1;

    printf("Serie Fibonacci: \n");

    while(fibo < 100)
    {
        fibo += i;
        i = fibo-i;

        printf("%d ", fibo);

        if(num == fibo)
            return 1;
    }

    return 0;
}
