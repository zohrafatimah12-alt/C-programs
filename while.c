#include <stdio.h>
int main(){
    //for loop
for (int i = 0; i < 5; i++)
{
    printf("%d\n",i);
}
//while loop
int i=1;
while(i<100){
    printf("%d\n",i);
    i++;
}
//do while loop
i=1;
do{
    printf("%d\n",i);
    i++;
}while(i<100);
return 0;

}