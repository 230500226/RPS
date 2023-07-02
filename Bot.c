
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Bot.h"

char getCpuMove(char previousUserMove) {
    int random_number = rand() % 100;

    if (previousUserMove == 'r') {
        if (random_number < 60) {
            return 'p';
        } else if (random_number < 80) {
            return 'r';
        } else {
            return 's';
        }
    } else if (previousUserMove == 'p') {
        if (random_number < 60) {
            return 's';
        } else if (random_number < 80) {
            return 'p';
        } else {
            return 'r';
        }
    } else {
        if (random_number < 60) {
            return 'r';
        } else if (random_number < 80) {
            return 's';
        } else {
            return 'p';
        }
    }
}