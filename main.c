#include <stdio.h>
#include <stdlib.h>

int menu()
{
  int op;
  printf("Menu de opções:\n1. Novo salário\n2. Férias\n3. Décimo terceiro\n4. Sair\n Digite a opção desejada: ");
  scanf("%d",&op);
  return op;
}

void novoSalario (float sal)
{
  float novo;
  if (sal <= 210) novo = sal * 1.15;// 100% = 1 + 15% = 0.15
  else if(sal <= 600) novo = sal *1.1;
  else novo = sal *1.05;
  printf("Novo salario: %.2f\n", novo);
}

float ferias (float valor)
{
  return (valor + valor/3);
}

float decimoTerceiro(float valor,int meses)
{
  return(valor*meses/12.0);
}

int main(void)  
{
int opcao = menu(), numMeses;
float salario;
  while(opcao != 4)
    {
      if (opcao>=1 && opcao<4)
      {
      printf("Salario: ");
      scanf("%f",&salario);
      }
      switch(opcao)
        {
          case 1: novoSalario(salario); break;
          case 2: printf("Férias: %.2f\n", ferias(salario)); break;
          case 3: printf("Quantos meses? ");
                  scanf("%d",&numMeses);
          printf("Décimo terceiro: %.2f\n", decimoTerceiro(salario, numMeses)); break;
          default: printf("Opção invalida\n");
        }  
      printf("\n");
      opcao=menu();
    }
  printf("Fim do Programa\n");
}