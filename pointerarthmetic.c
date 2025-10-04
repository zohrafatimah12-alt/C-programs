#include <stdio.h>
int main(){
    int age = 22;
    int _age = 25;

    int *ptr = &age;   // pointer to int
    int *_ptr = &_age;

    printf("%p\n", (void*)ptr);
    ptr++;
    printf("%p\n", (void*)ptr);
    ptr--;
    // Instead of assigning difference to a pointer, print it as integer
    printf("%td\n", ptr - _ptr);  
    ptr = &_age;
    printf("%d\n", ptr == _ptr);

    return 0;
}
