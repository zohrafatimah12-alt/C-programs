#include <stdio.h>
void square(int n);
void _square(int* n);
int main(){
    int n=4;
    //call by value
    square(n);
    printf("n is %d\n",n);
    
    //call by reference
    _square(&n);
    printf("n is %d\n",n);
    
    return 0;

}
void square(int n){
    n=n*n;
    printf("square is %d\n",n);
}                 
void _square(int* n){
     *n=*n * *n;
    printf("square is %d\n",*n);
}                 



