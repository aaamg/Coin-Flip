#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>

int main(void){
    int i, r, t, coin;
    srand(time(0));//Set our random numbers
    printf("Coin Flip guesser\n");
    printf("Will it be heads (press 0) or tails (press 1)?\n");
    scanf("%d", &coin);

    r = rand() % 2;
    t = r;
    //printf("%d %d\n", r, t);

    if(t == 0){
        printf("Heads\n");
        if(coin == 0){
            printf("You were right!\n");
        } else {
            printf("You lost.");
        }
    } else {
        printf("Tails\n");
        if(coin == 1){
            printf("You were right!\n");
        } else {
            printf("You lost.");
        }
    }

    return 0;
}

