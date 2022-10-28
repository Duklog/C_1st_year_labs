/*Дано гіпотенузу і один із катетів прямокутного трикутника. Знайти другий його катет і площу описаного навколо нього круга.
Нижче представлений рекомендований вигляд екрану під час роботи програми (дані, що введені користувачем, виділені напівжирним шрифтом).*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float kat,gipo,kat2,circlesq;

    printf("input katet 1: \n");
    scanf("%f",&kat);
    printf("input gipotenuzu:\n ");
    scanf("%f",&gipo);

    kat2=sqrt((gipo*gipo)-(kat*kat));
    circlesq=(gipo/2)*(gipo/2)*M_PI;

    printf("katet 2= %f\n", kat2);
    printf("ploscha kruga opisanogo navkolo trikutnuka=%f\n", circlesq);
    return 0;
}
