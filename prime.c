#include <stdio.h>
#include <stdlib.h>

void delay(unsigned int value) {
    for (unsigned int i = 0; i < value * 1000; i++);
}

void clearScreen() {
    system("cls"); // Use "clear" if you're on Linux/Mac
}

void printRocket(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf("\n");
    }
    printf("           ^\n");
    printf("          / \\\n");
    printf("         |-| |\n");
    printf("         | | |\n");
    printf("         |D| |\n");
    printf("         |I| |\n");
    printf("         |W| |\n");
    printf("         |A| |\n");
    printf("         |L| |\n");
    printf("         |I| |\n");
    printf("        /| | |\\\n");
    printf("       / | | | \\\n");
    printf("      |  | | |  |\n");
    printf("       `-\"\"\"\"\"-`\n");
}
int main() {
    for (int i = 20; i >= 0; i--) {
        clearScreen();
        printRocket(i);
        delay(100);
    }

    printf("\n\n✨ Wishing You a Very Happy Diwali! ✨\n");
    return 0;
}
