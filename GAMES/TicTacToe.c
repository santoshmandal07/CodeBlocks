#include <stdio.h>

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

int choice;
char turn = 'X';

void drawBoard()
{
    int i;
    printf("\n\n");
    for (i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i < 2)
            printf("\n---+---+---\n");
    }
    printf("\n");
}

int checkWin()
{
    int i;

    for (i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;

    for (i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}

void playerMove()
{
    int row, col;
    printf("\nPlayer %c, enter your choice: ", turn);
    scanf("%d", &choice);

    row = (choice - 1) / 3;
    col = (choice - 1) % 3;

    if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = turn;
        turn = (turn == 'X') ? 'O' : 'X';
    }
    else
    {
        printf("Invalid move! Try again.\n");
        playerMove();
    }
}

int main()
{
    int gameStatus, moves = 0;

    do
    {
        drawBoard();
        playerMove();
        gameStatus = checkWin();
        moves++;
    } while (gameStatus == 0 && moves < 9);

    drawBoard();

    if (gameStatus == 1)
        printf("\nPlayer %c wins!\n", (turn == 'X') ? 'O' : 'X');
    else
        printf("\nGame Draw!\n");

    return 0;
}
