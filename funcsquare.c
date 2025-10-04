#include <stdio.h>
int calcSquare(int n);
int main(){
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("square is %d",calcSquare(n));
    return 0;

}
int calcSquare(int n){
    return n*n;

}

