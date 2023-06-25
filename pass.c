#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

int main(void) {
    char username[MAX_USERNAME_LENGTH + 1];
    char password[MAX_PASSWORD_LENGTH + 1];
    char correct_username[] = "admin";
    char correct_password[] = "password";
    bool is_authenticated = false;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        is_authenticated = true;
    }

    if (is_authenticated) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Incorrect username or password.\n");
    }

    return 0;
}
