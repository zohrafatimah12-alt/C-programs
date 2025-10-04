#include <stdio.h>
int main(){
    int day;
    printf("\nEnter the day:");
    scanf("%d",&day);
    switch(day){
        case 1:printf("monday\n");
        break;
        case 2:printf("tuesday\n");
        break;
        case 3:printf("wednesday\n");
        break;
        case 4:printf("thursday\n");
        break;
        case 5:printf("Friday\n");
        break;
        case 6:printf("Saturday\n");
        break;
        case 7:printf("Sunday\n");
        break;
        }
        return 0;

}