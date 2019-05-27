#include<stdio.h>                
void butler(void);

int main(void) {
    printf("I Wil summon the butler function. \n");
    butler();
    printf("Yes. Bring me some tea\n");

    printf("%d is % %d", 15);

    getchar();
    return 0;
} 

void butler(void) {
    printf("You rang, sir?\n");
}