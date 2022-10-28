/*Задані дійсні величини x, y,z та ціле k . 
Розробити програму, яка обчислює значення функції.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int x,y,z,k,max,rez;
 
 printf("Enter x,y,z,k\n");
 scanf("%d %d %d %d",&x,&y,&z,&k);
 
 if(y>z) max=y;
 else max=z;
 
 if(k==1){
   if(x<max) rez=x;
   else rez=max;
 }
 else{
   if(k==2){
     if(y<max) rez=y;
     else rez=max;
   }
   else{
     if(k==3){
       if(z<max) rez=z;
       else rez=max;
     }
     else rez=x+y+z;
   }
 }   
 
 printf("rezultat:%d",rez);
}
