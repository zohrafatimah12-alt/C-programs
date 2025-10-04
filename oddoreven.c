#include <stdio.h>
int main(){
    int no;
    printf("enter the no:");
    scanf("%d",&no);
    if(no%2==0){
        printf("it is an even no");

    }
    else{
        printf("it is an odd no ");
    }
    return 0;
}