//Write a program to check whether a person is eligible to vote (age>=18)
#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (age < 0) {
        printf("Age cannot be negative.\n");
    } else if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote yet. %d year(s) remaining.\n", 18 - age);
    }

    return 0;
}
