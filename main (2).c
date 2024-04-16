#include <stdio.h>

int somaDigitos(int num) 
  {
    if (num >0 && num < 10) 
    {
        return num;
    }
    else if (num >= 10)
    {
        return num % 10 + somaDigitos(num / 10);
    }
    return 0;
}

int main(void) 
{
    int numero;
    scanf("%d", &numero);
    printf("%d", somaDigitos(numero));

    return 0;
}