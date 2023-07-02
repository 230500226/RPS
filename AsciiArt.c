#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cpu.h"
#include "AsciiArt.h"

// Function to print ASCII art for rock
void rock(){
    printf("    _______\n");
    printf("---'   ____)   \n");
    printf("      (_____)  \n");
    printf("      (_____)  \n");
    printf("      (____)   \n");
    printf("---.__(___)    \n");
    printf("\n");
}

// Function to print ASCII art for scissors
void scissors(){
    printf("    _______\n");
    printf("---'   ____)____\n");
    printf("          ______)\n");
    printf("       __________)\n");
    printf("      (____)      \n");
    printf("---.__(___)       \n");
}

// Function to print ASCII art for paper
void paper(){
    printf("     _______    \n");
    printf("---'    ____)____\n");
    printf("           ______)\n");
    printf("          _______)\n");
    printf("         _______)\n");
    printf("---.__________)  \n");
    printf("\n");
}

// Function to print ASCII art for "vs"
void vs(){
    printf("\t\t|       |    |||||||\n");
    printf("\t\t|       |   |       \n");
    printf("\t\t|       |   |       \n");
    printf("\t\t |     |     |||||| \n");
    printf("\t\t  |   |            |\n");
    printf("\t\t   | |      |      |\n");
    printf("\t\t    |        ||||||\n");
}
