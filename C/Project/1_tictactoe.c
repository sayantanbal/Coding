#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();      // Use to set the board with empty characters
void printBoard();      // Use to print the current board
int checkFreeSpaces();  // returns the number of free spaces in the board
void playerMove();      // Use to set the player move
void computerMove();    // Use to randomly generate the computer move
char checkWinner();     // Use to check the winner
void printWinner(char); // It will give the result after checking the winner

void main()
{
    char winner = ' ';
    // Setting the empty board
    resetBoard();

    while (winner == ' ' && checkFreeSpaces() != 0)
    {
        // Printing the current board before the game:
        printBoard();

        // Getting player's move:
        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }

        // Getting computer's move:
        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
    }
    printBoard();        // Printing the current board after the game:
    printWinner(winner); // Printing the result
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    // Setting the design of our board:
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkFreeSpaces()
{
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove()
{
    int x;
    int y;

    do
    {
        printf("Enter row number in between 1 to 3:");
        scanf("%d", &x);
        x--;
        printf("Enter column number in between 1 to 3:");
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ')
        {
            printf("Invalid Move!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}

void computerMove()
{
    // Randomly Generated:
    srand(time(0));
    int x, y;

    if (checkFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
}

char checkWinner()
{
    // check rows:
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    // check columns:
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    // check diagonals:
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }
    return ' ';
}

void printWinner(char w)
{
    if (w == PLAYER)
    {
        printf("You win!\n");
    }
    else if (w == COMPUTER)
    {
        printf("Computer wins!\n");
    }
    else
    {
        printf("Draw Match!\n");
    }
}