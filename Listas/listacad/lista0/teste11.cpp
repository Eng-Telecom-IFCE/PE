#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c, aux;
    //se o b > a e c > a 
    if(b > a) {
        swap(&a,&b);
    }
    if(c > a) {
        swap(&a,&c);
    }
    scanf("%lf %lf %lf", &a,&b,&c);
    
   if(a >= b+c){
      printf("NAO FORMA TRIANGULO\n");
   } 
   if(pow(a,2) == pow(b,2) + pow(c,2)){
       printf("TRIANGULO RETANGULO\n");
   }

   if(pow(a,2) > pow(b,2) + pow(c,2)){
         printf("TRIANGULO OBTUSANGULO\n");
   }
  
   if(pow(a,2) < pow(b,2) + pow(c,2)){
         printf("TRIANGULO ACUTANGULO\n");
  }

  if(a == b || a == c || b == c){
        printf("TRIANGULO ISOSCELES\n");
  } 
  if (a == b && a == c && b == c){
          printf("TRIANGULO EQUILATERO\n");
  }
 
}