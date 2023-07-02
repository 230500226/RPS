#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cpu.h"
#include "AsciiArt.h"

// Function to determine the winner based on player and CPU moves
char getWinner(char playerMove, char cpuMove);

int main() {
    char playerMove, cpuMove, previousplayerMove, winner;
    int playerScore = 0, computerScore = 0;

    srand(time(0)); // Seed the random number generator used in the Cpu.c

    printf("=========== Welcome to Rock Paper Scissors vs CPU! ===========\n");
    printf(" Enter r for rock, p for paper, s for scissors, or c to quit\n");

    previousplayerMove = 'r'; // Set the previous player move as rock initially
    while (1) {
        printf("\nYour move: ");
        scanf(" %c", &playerMove);

        if (playerMove == 'c') {
            break; // Exit the loop if the player enters 'c' to quit
        }

        cpuMove = getCpuMove(previousplayerMove); // Get the CPU's move based on the previous player move
        winner = getWinner(playerMove, cpuMove); // Determine the winner

        if (winner == 'u') {
            system("cls");
            printf("== You win! Computer chose ==\n ");
            if (cpuMove == 'r') {
                rock();
            } else if (cpuMove == 'p') {
                paper();
            } else {
                scissors();
            }
            printf(".\n");
            playerScore++; // Increment player score
        } else if (winner == 'c') {
            system("cls");
            printf("== Computer wins! Computer chose ==\n ");
            if (cpuMove == 'r') {
                rock();
            } else if (cpuMove == 'p') {
                paper();
            } else {
                scissors();
            }
            printf(".\n");
            computerScore++; // Increment computer score
        } else {
            system("cls");
            printf("== It's a tie! Computer also chose ==\n ");
            if (cpuMove == 'r') {
                rock();
            } else if (cpuMove == 'p') {
                paper();
            } else {
                scissors();
            }
            printf(".\n");
        }

        previousplayerMove = playerMove; // Update the previous player move
    }

    printf("Final score: \tYou got %d ---------\n ", playerScore);
    vs();
    printf(" \t\t ---- Computer got %d\n\n", computerScore);

    return 0;
}

// Function to determine the winner based on player and CPU moves
char getWinner(char playerMove, char cpuMove) {
    if (playerMove == cpuMove) {
        return 't'; // Return 't' for tie
    } else if ((playerMove == 'r' && cpuMove == 's') ||
               (playerMove == 'p' && cpuMove == 'r') ||
               (playerMove == 's' && cpuMove == 'p')) {
        return 'u'; // Return 'u' for player win
    } else {
        return 'c'; // Return 'c' for computer win
    }
}
