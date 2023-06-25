#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

int main(void) {
    char username[MAX_USERNAME_LENGTH + 1];
    char password[MAX_PASSWORD_LENGTH + 1];
    char correct_username[] = "ashu";
    char correct_password[] = "agni121";
    bool is_authenticated = false;

printf("press 1 for login and 2 for signup\n");
int logsign;
scanf("%d",&logsign);
switch(logsign)
{

case(1):
    printf("Enter username:\n ");
    scanf("%s", username);

    printf("Enter password:\n ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        is_authenticated = true;
    }


else if (strcmp(username,"dhruv") == 0 && strcmp(password,"aurangabad") == 0) {
        is_authenticated = true;
    }

else if (strcmp(username, "ninad") == 0 && strcmp(password, "kulkarni") == 0) {
        is_authenticated = true;
    }
   else if (strcmp(username, "vrindha") == 0 && strcmp(password,"cpiitbombay") == 0) {
        is_authenticated = true;
    }


    if (is_authenticated) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Incorrect username or password.\n");
        
    }
break;

case(2):

printf("Enter username:\n ");
    scanf("%s", username);

    printf("Enter password:\n ");
    scanf("%s", password);
    break;
    default:
    printf("wrong input\n");
    }
        return 0;
}
/*idhar maine login ke liye aur signup ke liye features diye h ab tu return username aur password lele to call*/