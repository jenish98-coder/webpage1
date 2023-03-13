#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define WIDTH 80
#define HEIGHT 25

char screen[HEIGHT][WIDTH];

void clearScreen()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            screen[i][j] = ' ';
        }
    }
}

void printScreen()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            putchar(screen[i][j]);
        }
        putchar('\n');
    }
}

void updateMario(int x, int y)
{
    screen[y][x] = 'M';
}

int main()
{
    int x = WIDTH / 2;
    int y = HEIGHT - 1;

    clearScreen();
    updateMario(x, y);
    printScreen();

    return 0;
}
