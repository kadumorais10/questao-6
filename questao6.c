#include <stdio.h>

int main(void) {
  printf("digite o horario\n");
  printf("horas\n");
  printf("minutos\n");
  printf("segundos\n");
  int horas;
  int minutos;
  int segundos;
  scanf("%d", &horas);
  scanf("%d", &minutos);
  scanf("%d", &segundos);
  int hs = horas * 3600;
  int ms = minutos * 60;
  int total = hs + ms + segundos;
  printf("a hora em segundos é %d", total);
  
  
 
  
  return 0;
}