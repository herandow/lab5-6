#include <stdio.h>
#include <string.h>

void greet_user() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to Git Lab.\n", name);
}

int main() {
    greet_user();
    return 0;
}