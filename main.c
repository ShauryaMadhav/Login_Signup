#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menuInput;
char username[20];
char password[20];

int main() {
     printf("\n\n\n\n\n\n\n\n\t\t\t\t\t Welcome to a Login / Signup page\n\n\n");

     printf("\t\t\t\t\t\t    Login (1) \n");
     printf("\t\t\t\t\t\t    Signup (2) \n");
     printf("\t\t\t\t\t\t    Exit (3) \n\n");

     // user input
     printf("\t\t\t\t\t\tEnter your choice: ");
     scanf("%d", &menuInput);

     if (menuInput == 1) {
          system("cls");
          printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t      Login Menu\n\n");
          printf("\t\t\t\t\t   Enter Username: ");
          scanf("%s", &username);

          printf("\n\t\t\t\t\t   Enter Password: ");
          scanf("%s", &password);

		// after login/singup is done
		system("cls");
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t Hello %s\n\n\n", username);
		

     } 
     else if (menuInput == 2) {
          system("cls");
          printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t     Signup Menu");

		printf("\n\n\t\t\t\t\t   Set Username: ");
		scanf("%s", &username);

          printf("\n\t\t\t\t\t   Set Password: ");
          scanf("%s", &password);

		// after login/singup is done
		system("cls");
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t Hello %s\n\n\n", username);
     }
     else if (menuInput == 3) {
          exit(0);
     } 
     else {
          printf("Wrong option!");
     }

     printf("Press any key to continue... "); getch();
     return 0;
}
