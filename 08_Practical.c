#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];

    // Predefined credentials
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";

    // Input username and password
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    // Check login using logical AND
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login Successful\n");
    } else {
        printf("Invalid Login\n");
    }

    return 0;
}
