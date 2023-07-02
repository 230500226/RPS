#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cpu.h"

// Function to get the CPU's move based on the previous user move
char getCpuMove(char previousUserMove) {
    // Generate a random number between 0 and 99
    int randomNumber = rand() % 100;

    // Determine the CPU's move based on the previous user move and the random number generated above

    // If the previous user move was rock ('r')
    if (previousUserMove == 'r') {
        // If the random number is less than 60 (60% chance), return 'p' (paper)
        if (randomNumber < 60) {
            return 'p';
        }
        // If the random number is between 60 and 79 (20% chance), return 'r' (rock)
        else if (randomNumber < 80) {
            return 'r';
        }
        // If the random number is 80 or greater (20% chance), return 's' (scissors)
        else {
            return 's';
        }
    }
    // If the previous user move was paper ('p')
    else if (previousUserMove == 'p') {
        // If the random number is less than 60 (60% chance), return 's' (scissors)
        if (randomNumber < 60) {
            return 's';
        }
        // If the random number is between 60 and 79 (20% chance), return 'p' (paper)
        else if (randomNumber < 80) {
            return 'p';
        }
        // If the random number is 80 or greater (20% chance), return 'r' (rock)
        else {
            return 'r';
        }
    }
    // If the previous user move was scissors ('s')
    else {
        // If the random number is less than 60 (60% chance), return 'r' (rock)
        if (randomNumber < 60) {
            return 'r';
        }
        // If the random number is between 60 and 79 (20% chance), return 's' (scissors)
        else if (randomNumber < 80) {
            return 's';
        }
        // If the random number is 80 or greater (20% chance), return 'p' (paper)
        else {
            return 'p';
        }
    }
}
