#include <stdio.h>
int main(){
    int age;
    printf("\nEnter the age:");
    scanf("%d",&age);
    age>18?printf("\n adult"):printf("\n not adult");
    int number=9;
    int luckyNumber=7;
    number==luckyNumber?printf("you are lucky"):printf("you are not lucky\n");
    return 0;
}