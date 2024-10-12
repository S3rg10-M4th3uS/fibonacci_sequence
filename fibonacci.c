#include <stdio.h>

int pertence_fibonacci(int num)
{
    int a = 0, b = 1;

    while (a <= num)
    {
        if (a == num)
        {
            return 1; // Pertence à sequência
        }
        int temp = a;
        a = b;
        b = temp + b;
    }

    return 0; // Não pertence à sequência
}

void verificar_numero(int numero) {
    if (pertence_fibonacci(numero))
    {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    }
    else
    {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }
}
int main()
{
    verificar_numero(5);
    verificar_numero(8);
    verificar_numero(10);
    verificar_numero(21);
    verificar_numero(50);
    verificar_numero(311);
    return 0;
}