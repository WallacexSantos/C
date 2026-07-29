#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

void resultado_soma(int resultado)
{
    printf("%d\n", resultado);
}

int main()
{
    int resultado = soma(10, 20);

    resultado_soma(resultado);

    return 0;
}
