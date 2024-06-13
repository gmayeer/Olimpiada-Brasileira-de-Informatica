#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 5


int main(){
    int cards[size];
    int last;
    bool cresc = true, decresc = true, nord = false;
    for(int i = 0; i < size; i++){
        do{
            scanf("%d", &cards[i]);
        }while(cards[i] < 1 || cards[i] > 13);
    }

    for(int j = 0; j < size; j++){
        if(j == 0)
            last = cards[j];
        else{
            if(cards[j] < last)
                cresc = false;
            if(cards[j] > last)
                decresc = false;
        }
        last = cards[j];
    }
    if(cresc == false && decresc == false)
        nord = true;

    if(cresc == true)
        printf("C");
    if(decresc == true)
        printf("D");
    if(nord == true)
        printf("N");

    return 0;
}
