#include <stdio.h>

int main(){
    
  int idade = 0;
  scanf("%d", &idade);

  int ano = idade/365;
  int mes = (idade%365)/30;
  int dia = (idade%365)%30;
  
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

  return 0;
}