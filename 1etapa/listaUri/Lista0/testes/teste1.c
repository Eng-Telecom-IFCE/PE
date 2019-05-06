#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

    double a, b, c;
    char resp[4];

    scanf("%lf %lf %lf ", &a, &b, &c);
    printf("Estes são os múmeros certos?\n sim ou não?\n");
    fflush(stdout);
    fgets(resp, sizeof(resp), stdin);
   

    if(strcmp(resp, "sim") == 0) {
        printf("%lf %lf %lf \n", a, b, c);
    } else if(strcmp(resp, "nao") == 0) {
        printf("retornar\n");
        return main();
    } else {
        printf("caractere invalido\n");
    }

    while(0 < a && 0 < b && 0 < c){

        char resp1[4]; 
        if(a >= b + c){
            fgets(resp1, sizeof(resp1), stdin);
            printf("Nao é um retangulo\n Gostaria de retornar?\nSim ou nao?\n");           
            

            if(strcmp(resp1, "sim") == 0) {
                printf("retornar");
                return main();
            } else if(strcmp(resp1, "nao") == 0) {
                continue;
            } 
        } else if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
                printf("Triangulo retangulo\n");
                return main();
        } else if(pow(a, 2) > pow(b, 2) +  pow(c, 2)) {
                printf("triangulo obtusangulo\n");
                return main();
        
        }else if(pow(a, 2) < pow(b, 2) + pow(c, 2) && a == b == c) {
            printf("Triangulo acutangulo\nTriangulo isosceles\n");
                return main();
        } else if(pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("Triangulo acutangulo\n");
                return main();
        } else if(a == b && b == c)  {
            printf("Triangulo isosceles\n");
                return main();
        } 
        
    }
    return 0;
}