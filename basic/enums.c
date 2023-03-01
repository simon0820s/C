#include <stdio.h>

enum deck
{
    diamonds=5,
    hearts=10,
    spades=15,
    club=0
}card;
    
int main()
{
    card=spades;
    printf("Size of card: %ld",sizeof(spades));
    return 0;
}