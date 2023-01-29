#include <stdio.h>

int main(){

    int variable=3;

    switch (variable){

        case 1:
            //deteccion de intrusos
            printf("%d",variable);
            break;
        case 2:
            //vigilancia
            printf("%d",variable);
            break;
        case 3:
            //atacar
            printf("%d",variable);
            break;

        default:
            //OK
            printf("%d",variable);
            break;
    }

    return 0;
}