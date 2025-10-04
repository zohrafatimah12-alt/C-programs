#include <stdio.h>
#include <string.h>

int main() {
    // declaration
    char name[] = "Zohra Fatimah";
    char course[] = {'m','a', 't', 'h', 's','\0'};

    // printing string
    for (int i=0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    // printing string with pointer
    for (char *ptr=name; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    printf("\n");

    // printing using format specifier
    printf("%s\n", name);

    // input a string (single word)
    char firstName[40];
    printf("Enter first name : ");
    scanf("%39s", firstName);  // safer
    printf("Your first name is %s\n", firstName);

    // clear input buffer before using fgets
    getchar();

    // input full name (with spaces)
    char fullName[40];
    printf("Enter full name : ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Your full name is %s", fullName);

    // Library Functions
    char myName[] = "Zohra";
    int length = strlen(myName);
    printf("The length of name : %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);

    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "Banana";
    printf("%d\n", strcmp(str1, str2));

    // enter string using %c
    printf("Enter string : ");
    char str[100];
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}
