// Use a 2-D character array to store and display a tic-tac-toe board.
#include <stdio.h>

int main() {
    char board[3][3] = {{'X', 'O', 'X'}, {'X', 'O', 'O'}, {'O', 'O', 'X'}};
    printf("The tic-tac-toe board\n");
    printf("%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("----------\n");
    printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("----------\n");
    printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    return 0;
}