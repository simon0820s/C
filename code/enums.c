#include <stdio.h>

enum laboralWeek {Lunes,Martes,Miercoles,Jueves,Viernes};
    
int main()
{
    enum laboralWeek today;
    today=Miercoles;
    printf("Hoy es: %d",today+1);
    printf("size: %d",sizeof(today));
    return 0;
}