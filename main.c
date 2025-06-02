#include <stdio.h>
#include <string.h>
<<<<<<< HEAD

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
=======

void greet_user() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to Git Lab.\n", name);
}

int main() {
    greet_user();
>>>>>>> branch1
    return 0;
}