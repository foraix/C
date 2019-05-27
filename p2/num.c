#include<stdio.h>                
int main(void) {
    int x = 100;
    printf("octal = %o; hex = %x \n", x, x);
    printf("octal = %#o; hex = %#x \n", x, x);
    char c = 7;
    getchar();
    return 0;
}  