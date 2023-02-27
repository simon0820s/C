#include <stdio.h>
#include <math.h>

float seno(float x){
    float result=sin(x);
    return result;
}

int main(void){
    float x;
    printf("ingrese el valor de x => ");
    scanf("%f",&x);
    printf("el valor ingresado es: %f",x);

    printf("el seno de x es: %f",seno(x));
    return 0;
}

