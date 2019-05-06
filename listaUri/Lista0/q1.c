#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void main() {
    //setvbuf(stdout, NULL, _IONBF, 0);

    double a, b, c;
    char resp[2];

    scanf("%lf %lf %lf", &a, &b, &c);
    fflush(stdin);
    fgets(resp, sizeof(resp), stdin);

    while(0 < a && 0 < b && 0 < c){
        if(a >= b + c){
            printf(" NAO FORMA TRINGULO\n ");    
                return main();       
        } else if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
                printf(" TRIANGULO RETANGULO\n ");
                return main();
        }else if((pow(a, 2) > pow(b, 2) +  pow(c, 2)) && (a == b || b == c || a == c)) {
                printf(" TRIANGULO OBTUSANGULO\nTRIANGULO ISOSCELES\n ");
                return main();      
        }else if((pow(a, 2) < pow(b, 2) + pow(c, 2)) && (a == b == c)) {
            printf(" TRIANGULO ACUTANGULO\nTRIANGULO EQUILATERO\n ");
                return main();
        }
        
    }
  return main();
}