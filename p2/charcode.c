#include<stdio.h>                
int main(void) {
    char ch;

    printf("Please input a character\n");
    scanf("%c", &ch);
    printf("The code for %c is %d\n", ch, ch);
    getchar();
    return 0;
} 