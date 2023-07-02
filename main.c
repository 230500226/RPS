#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cpu.h"
#include "AsciiArt.h"

// Function to determine the winner based on user and CPU moves
char getWinner(char userMove, char cpuMove);

int main() {
    char userMove, cpuMove, previousUserMove, winner;
    int userScore = 0, computerScore = 0;

    srand(time(0)); // Seed the random number generator used in the Cpu.c

    printf("=========== Welcome to Rock Paper Scissors vs CPU! ===========\n");
    printf(" Enter r for rock, p for paper, s for scissors, or c to quit\n");

    previousUserMove = 'r'; // Set the previous user move as rock initially
    while (1) {
        printf("\nYour move: ");
        scanf(" %c", &userMove);

        if (userMove == 'c') {
            break; // Exit the loop if the user enters 'c' to quit
        }

        cpuMove = getCpuMove(previousUserMove); // Get the CPU's move based on the previous user move
        winner = getWinner(userMove, cpuMove); // Determine the winner

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
            userScore++; // Increment user score
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

        previousUserMove = userMove; // Update the previous user move
    }

    printf("Final score: \tYou got %d ---------\n ", userScore);
    vs();
    printf(" \t\t ---- Computer got %d\n\n", computerScore);

    return 0;
}

// Function to determine the winner based on user and CPU moves
char getWinner(char userMove, char cpuMove) {
    if (userMove == cpuMove) {
        return 't'; // Return 't' for tie
    } else if ((userMove == 'r' && cpuMove == 's') ||
               (userMove == 'p' && cpuMove == 'r') ||
               (userMove == 's' && cpuMove == 'p')) {
        return 'u'; // Return 'u' for user win
    } else {
        return 'c'; // Return 'c' for computer win
    }
}
