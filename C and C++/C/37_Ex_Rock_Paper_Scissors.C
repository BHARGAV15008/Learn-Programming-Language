// In this exercise we use time library;
// for random outputs;
// Take input from the users; Paper, Rock, Scissors;
// Other player is computer; choose same thing;
// Return according Who wins;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandom (int n) {
    // It returns random numbers;
    srand(time(NULL));
    return rand() % n;
}

int greater (char c1, char c2){
    // It returns c1 < c2, otherwise returns 0, if c1 == c2 then returns -1;
    if (c1 == c2)
        return -1;

    if ((c1 == 'r' && c2 == 's') || (c1 == 'p' && c2 == 'r') || (c1 == 's' && c2 == 'p'))
        return 1;
    else
        return 0;
}

int main (){
    // int n;  // Number of games;
    int playerScore = 0, compScore = 0, in;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};

    printf("\nWelcome to game: *** Rock, Paper, Scissors ***");

    for (int i = 0; i < 3; i++) {

        printf("\n\nLet's play round %d", i+1);
        // Take player 1's input;
        printf("\nPlayer 1 turns: ");
        printf("\nChoose 1: Rock \nChoose 2: Paper \nChoose 3: Scissors\n");
        scanf("%d", &in);
        playerChar = dict[in - 1];

        // Generate computer's input;
        printf("\n\nComputer 1 turns: ");
        printf("\nChoose 1: Rock \nChoose 2: Paper \nChoose 3: Scissors");
        in = generateRandom(3) + 1;
        compChar = dict[in - 1];
        printf("\nCPU choose: %c", compChar);

        if (greater(compChar, playerChar) == 1){
            compScore++;
            printf("\nComputer got point.....");
        }
        else if (greater(compChar, playerChar) == 0){
            playerScore++;
            printf("\nYou got point.....");
        }
        else{
            continue;
            printf("\nIts drwa.....");
        }
    }
    printf("\n\n*****   Score Card   *****");
    printf("\nYour Score  : %d", playerScore);
    printf("\nCPU Score   : %d", compScore);
    if (playerScore > compScore)
        printf("\nYou Win the Game...");
    else if (playerScore < compScore)
        printf("\nYou Loss the Game...");
    else
        printf("\nGame is Draw...");
    
    return 0;
}