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
}
	//Show board in display function
void sheowboard(int n , char board[n][n]){
    int i , j;
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c",board[i][j]);
            if(j<n-1)
            printf("|");
        }
        printf("\n");

        if(i<n-1){
            for(j=0;j<n;j++){
            printf("----");
            }
            printf("\n");
        }
    printf("\n");
    }
}
    //palyers move draw function
int makemove(int n, char board[n][n], int row, int col, char player){
    if(board[row][col]== ' '){
        board[row][col]= player;
        return 1;
    }
        return 0;
}

