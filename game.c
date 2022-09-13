#include <stdio.h>
#include <stdlib.h>

int play_game();

int main()
{
    int play = 0;
    int n;
    printf("============================================\n");
    printf("\tRock | Paper | Scissors Game\n");
    printf("r = rock | p = paper | s = scissors\n");
    printf("============================================\n");
    do
    {
        printf("\n1 - Play\n2 - Exit\n> ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("\n*************** Enjoy ***************\n");
            play_game();
            break;
        case 2:
            printf("\n*************** Exited! ***************");
            play = 1;
            break;
        
        default:
            printf("\nYou Didn't type any of the above\n");
            break;
        }

    } while (n != 2 && play != 1);
    
    return 0;
}

int play_game() {
    int upper = 3, lower = 1;
    char choice;
    int rndm_nmbr = (rand() % (upper - lower + 1)) + lower;
    char computer_choice;
    char player_choice;
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    switch (choice)
    {
    case 'r':
        player_choice = choice;
        printf("%c", player_choice);
        break;
    case 'p':
        player_choice = choice;
        printf("%c", player_choice);
        break;
    case 's':
        player_choice = choice;
        printf("%c", player_choice);
        break;
    default:
        printf("you didn't type any of the above characters!");
        break;
    }
    // computer choice
    if(rndm_nmbr == 1)
    {
        computer_choice = 'r';
    }else if(rndm_nmbr == 2)
    {
        computer_choice = 'p';
    }else if(rndm_nmbr == 3)
    {
        computer_choice = 's';
    }
    // comparison
    if (player_choice == computer_choice)
    {
        printf("\nPlayer Choice: %c\nComputer Choice: %c\n", player_choice, computer_choice);
        printf("\nDraw Game");
    }else if (player_choice == 'r' && computer_choice == 's' || player_choice == 'p' && computer_choice == 'r' || player_choice == 's' && computer_choice == 'p')
    {
        printf("\nPlayer Choice: %c\nComputer Choice: %c\n", player_choice, computer_choice);
        printf("\nPlayer Wins!\n");
    }else {
        printf("\nPlayer Choice: %c\nComputer Choice: %c\n", player_choice, computer_choice);
        printf("\nComputer Wins!\n");
    }
}