#include<stdio.h>
#include<locale.h>

int main (){

   char nome [50];
   float salário,percentual, novo_salário;
   
   setlocale(LC_ALL,"");
   
    //Solicitar a entrada do salário
   printf("Digite o nome de pessoas: ");
   scanf("%s", nome);
   
   //Solicitar a entrada do salário
   printf("Digite o nome de pessoas: R$");
   scanf("%F" , &salário);
   
   //Solicitar a entrada do salário
   printf("Digite  nome de percentual: ");
   scanf("%f" , &percentual);
   
   novo_salário = salário *(1+percentual/100);
   
   //Exibir nome da pessoa e o seu salário
   printf("Novo salário de %s R$%.2f\m" ,nome, novo_salário);
   
   
   return 0;
}
