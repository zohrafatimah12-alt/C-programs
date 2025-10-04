#include <stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age<12){
        printf("you are a child");

    }
    else if(age<18){
        printf("you are a teenager");
    }
    else{
        printf("you are an adult");
    }
    return 0;
}