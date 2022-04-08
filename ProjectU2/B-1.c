#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age; /* Lowercase variable names */
    char username[20];
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your username: ");
    scanf("%s", username);

    printf("u are %d years old.\n", age);
    printf("ur name is %s", username); 

    if(age > 18){
        printf("WARNING! You're too young to see this content");
    } else {
        printf("welcome yo!");
    }

    return 0;
}