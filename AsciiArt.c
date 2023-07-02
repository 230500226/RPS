#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Bot.h"
#include "AsciiArt.h"

void rock(){
    printf("    _______\n");
    printf("---'   ____)   \n");
    printf("      (_____)  \n");
    printf("      (_____)  \n");
    printf("      (____)   \n");
    printf("---.__(___)    \n");
    printf("\n");
}
void scissors(){
    printf("    _______\n");
    printf("---'   ____)____\n");
    printf("          ______)\n");
    printf("       __________)\n");
    printf("      (____)      \n");
    printf("---.__(___)       \n");
}
void paper(){
    printf("     _______    \n");
    printf("---'    ____)____\n");
    printf("           ______)\n");
    printf("          _______)\n");
    printf("         _______)\n");
    printf("---.__________)  \n");
    printf("\n");
}
void vs(){
    printf("\t\t|       |    |||||||\n");
    printf("\t\t|       |   |       \n");
    printf("\t\t|       |   |       \n");
    printf("\t\t |     |     |||||| \n");
    printf("\t\t  |   |            |\n");
    printf("\t\t   | |      |      |\n");
    printf("\t\t    |        ||||||\n");
}