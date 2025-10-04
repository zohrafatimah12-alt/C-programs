#include <stdio.h>
#include <string.h>

// Function prototypes
int countVowels(char str[]);
void slice(char str[], int n, int m);
void salting(char password[]);
int countLength(char arr[]);
void printString(char arr[]);

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

    // Example usage of custom functions
    printf("Vowels in name: %d\n", countVowels(name));

    slice(name, 0, 4);   // prints "Zohra"
    salting("test");     // prints "test123"

    printf("Length of name = %d\n", countLength(name));

    printString("Custom Print!");

    return 0;
}

// Count vowels
int countVowels(char str[]) {
    int count = 0;
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}

// Slice function
void slice(char str[], int n, int m) {  // n & m are valid values
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

// Add salt to password
void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}

// Custom length function
int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++) {
        count++;
    }
    return count; // fixed
}

// Custom print
void printString(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
