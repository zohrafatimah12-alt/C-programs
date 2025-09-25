#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimalToBinary(int n){
	if(n==0){
		printf("0");
		return;
	}
	int binary[32];
	int i=0;
	while(n>0){
		binary[i]=n%2;
		n=n/2;
		i++;
	}
	int j;
	for( j=i-1;j>=0;j--){
		printf("%d",binary[j]);
	}
	
}
void decimalToHex(int n){
	if(n==0){
		printf("0");
		return;
	}
	char hex[32];
	int i=0;
	while (n>0){
		int temp=n%16;
		if (temp<10)
		hex[i]=temp+48;
		else
		hex[i]=temp+55;
		n=n/16;
		i++;
	}
	int j;
	for(j=i-1;j>=0;j--)
	printf("%c",hex[j]);
}
int main(){
	int choice,decimal;
	while(1){
		printf("\n===Decimal Converter ===\n");
		printf("1. Decimal to Binary\n");
		printf("2. Decimal to Hexadecimal\n");
		printf("3.Exit\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		if (choice==3){
			printf("Exiting...\n");
			break;
		}
		printf("Enter a decimal number:");
		scanf("%d",&decimal);
		switch(choice){
			case 1:
				printf("Binary:");
				decimalToBinary(decimal);
				printf("\n");
				break;
			case 2:
				printf("Hexadecimal:");
				decimalToHex(decimal);
				printf("\n");
				break;
			default:
				printf("Invalid choice. Try again.\n");
		}
	}
	return 0;
}
