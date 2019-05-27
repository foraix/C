#include<stdio.h>                
// 提供strlen()函数的原型
#include<string.h>
// 人体密度
#define DENSITY 62.4
int main(void) {
    float weight;
    float volume;
    int size;
    int letters;
    // name是可以容纳40个字符的数组
    char name[40];
    
    printf("Hi! What is your first name?\n");
    scanf("%s", name);
    
    // 使用该方法可以得到该数组的长度
    size = sizeof name;
    printf("size:%d\n", sizeof name);
    letters = strlen(name);
    printf("letters:%d\n", strlen(name));

    getchar();
    return 0;
} 