#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_choice();

int main() {
    int option;
    printf("\tWELCOME TO ROCK PAPER SCISSOR\n");
    printf("Enter 1 to start the game, 0 to exit:> ");
    scanf("%d", &option);

    if (option == 1) {
        int wepen = -1;
        char *wepens_list[] = {"rock", "paper", "scissor"};

        srand(time(NULL));   // seed random

        printf("\nLet's start the game...\n");
        printf("Choose:\n");
        printf("0 → Rock\n1 → Paper\n2 → Scissor\n3 → Exit\n");

        while (wepen != 3) {
            printf("\nChoose your weapon:> ");
            scanf("%d", &wepen);

            if (wepen == 3) {
                printf("Exiting game...\n");
                break;
            }

            if (wepen < 0 || wepen > 2) {
                printf("Invalid choice! Try again.\n");
                continue;
            }

            printf("You chose %s\n", wepens_list[wepen]);

            int computer = random_choice();
            printf("Computer chose %s\n", wepens_list[computer]);

            if (wepen == computer)
                printf("Match is a draw!\n");
            else if ((wepen == 0 && computer == 1) ||
                     (wepen == 1 && computer == 2) ||
                     (wepen == 2 && computer == 0))
                printf("Computer wins!\n");
            else
                printf("You win!\n");
        }
    } else {
        printf("Exiting program...\n");
    }

    return 0;
}

int random_choice() {
    return rand() % 3;
}
