/*Написати програму перевірки знань історії архітектури.
Програма повинна вивести запитання та три варіанта відповіді.
Користувач повинен вибрати правильну відповідь і ввести її номер.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float kat,gipo,kat2,circlesq;
  int a;
  printf("Архітектор Ісаакіївського собору:\n");
  printf("1. Доменіко Трезінi\n");
  printf("2. Огюст Монферpан\n");
  printf("3. Карл Россі\n");
  printf("Bведіть номер правильної відповіді і натисніть\n<Enter>\n");
  scanf("%d",&a);

  if ((a<=0)||(a>3))
  {
   printf("Такого варіанту відповіді немає.\n"); 
   return 0;
  }
  if (a!=2)
  {
    printf("Ви помилились.\n");
    printf("Архітектор Ісаакіівського собору – Огюст Монферран.\n");
   }
   else
  {
     printf("Ви праві.\n");
  }
  return 0;
}
