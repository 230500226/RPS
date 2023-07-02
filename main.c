#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Bot.h"
#include "AsciiArt.h"

char getWinner(char userMove, char cpuMove);

int main() {
    char userMove, cpuMove, previousUserMove, winner;
    int userScore = 0, computerScore = 0;

    srand(time(0));

    printf("=========== Welcome to Rock Paper Scissors vs CPU! ===========\n");
    printf(" Enter r for rock, p for paper, s for scissors, or c to quit\n");

    previousUserMove = 'r';
    while (1) {
        printf("\nYour move: ");
        scanf(" %c", &userMove);

        if (userMove == 'c') {
            break;
        }

        cpuMove = getCpuMove(previousUserMove);
        winner = getWinner(userMove, cpuMove);

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
            userScore++;
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
            computerScore++;
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

        previousUserMove = userMove;
    }

    printf("Final score: \tYou got %d ---------\n ", userScore);
    vs();
    printf(" \t\t ---- Computer got %d\n\n", computerScore);
    return 0;
}

char getWinner(char userMove, char cpuMove) {
    if (userMove == cpuMove) {
        return 't';
    } else if ((userMove == 'r' && cpuMove == 's') ||
               (userMove == 'p' && cpuMove == 'r') ||
               (userMove == 's' && cpuMove == 'p')) {
        return 'u';
    } else {
        return 'c';
    }
}
