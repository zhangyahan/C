#include <stdio.h>

/*
 * variable demo
 * */

int main()
{
    char name;
    int age;
    float height;
    double money;

    name = 'Z';
    age = 21;
    height = 1.70;
    money = 1000.000;

    printf("name: %c\nage: %d\nheight: %.2f\nmoney: %f\n", name, age, height, money);
    return 0;
}
