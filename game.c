#include <stdio.h> 

void showboard(int n, char board[n][n]);
int makemove(int n, char board[n][n], int row, int col, char player);
int checkwin(int n, char board[n][n], char player);
int checkdraw(int n, char board[n][n]);

int main()  {
    int ch;
    int n;
    printf("user  vs user game - 1\n");
    printf("Player vs computer - 2 \n");
    printf("Multi player       - 3 \n");
    printf(" \n");
    printf("Enter your  choice : ");
    scanf("%d", &ch);

    if(ch < 1 || ch > 3){
        printf("re - Enter your  choice : ");
        scanf("%d", &ch);
    }
