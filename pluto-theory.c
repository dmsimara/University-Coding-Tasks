#include<stdio.h>
#include<conio.h>

int main () {

    int age, IPA;
    char name [80];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your age: ");
    scanf("%d", &age);

    IPA = (age / 2) + 7;

    printf("Hello, %s.", name);
    printf(" Your ideal partners age is %d.", IPA);

    return 0;
}