#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int size = 3;
    int board[size][size];
    int i, j;
    
    int ret = -1; // -1:没人赢, 1: X赢， 0:0赢

    //录入棋盘数据
    printf("Enter game data in row-to-column order: ");
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            scanf("%d", &board[i][j]);
        }
    }
    
    //按照井字棋的规制进行输出
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    //判断行的数据
    for(i=0; i<size; i++){
        int num0fx = 0, num0fo = 0;
        for(j=0; j<size; j++){
            if(board[i][j]==0){
                num0fo++;
            }
            else if(board[i][j]==1){
                num0fx++;
            }
        }
        if(num0fx==3){
            ret = 1;
        }
        else if(num0fo==3){
            ret = 0;
        }
    }

     //判断列的数据
    for(i=0; i<size; i++){
        int num0fx = 0, num0fo = 0;
        for(j=0; j<size; j++){
            if(board[j][i]==0){
                num0fo++;
            }
            else if(board[j][i]==1){
                num0fx++;
            }
        }
        if(num0fx==3){
            ret = 1;
        }
        else if(num0fo==3){
            ret = 0;
        }
    }
    
    // 判断对角线上的情况
    // "\"的情况
    int num0fx = 0, num0fo = 0;
    for(i=0; i<size; i++){
        if(board[i][i]==1){
            num0fx++;
        } 
        else if(board[i][i]==0){
            num0fo++;
        }
        if(num0fx==3){
            ret = 1;
        }
        else if(num0fo==3){
            ret = 0;
        }
    }
    
    // "/"的情况
    num0fx = 0, num0fo = 0;
    for(i=0; i<size; i++){
        if(board[i][3-i-1]==1){
            num0fx++;
        }
        else if(board[i][3-i-1]==0){
            num0fo++;
        }
        if(num0fx==3){
            ret = 1;
        }
        else if(num0fo==3){
            ret = 0;
        }
    }

    if(ret==0){
        printf("o win!\n");
    }
    else if(ret==1){
        printf("x win!\n");
    }
    else if(ret==-1){
        printf("no winner\n");
    }
    
    return 0;
}
