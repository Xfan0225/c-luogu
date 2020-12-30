//
//  main.c
//  P1101_单词方阵
//
//  Created by 谢 on 2020/2/4.
//  Copyright © 2020 谢. All rights reserved.
//yizhong

#include <stdio.h>

char square[105][105],ans[105][105];
int n;


void in(int,int,int,int);

void search(){
    int i,j,k;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (square[i][j]=='y') {
                for (k=1; k<9; k++) {
                    in(i, j, k, 1);
                }
            }
        }
    }
}

int main() {
    int i,j;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%s",&square[i]);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            ans[i][j]='*';
        }
    }
    search();
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void in(int x,int y,int direct,int time){
    int i;
    char word[7]={'y','i','z','h','o','n','g'};
    switch (direct) {
        case 1: //右
            if (square[x][y+1]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x][y-i]=word[5-i];
                    }
                }
                else{
                    in(x, y+1, direct, time);
                }
            }
            break;
        case 2://右下
            if (square[x+1][y+1]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x-i][y-i]=word[5-i];
                    }
                }
                else{
                    in(x+1, y+1, direct, time);
                }
            }
            break;
        case 3://下
            if (square[x+1][y]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x-i][y]=word[5-i];
                    }
                }
                else{
                    in(x+1, y, 3, time);
                }
            }
            break;
        case 4://左下
            if (square[x+1][y-1]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x-i][y+i]=word[5-i];
                    }
                }
                else{
                    in(x+1, y-1, 4, time);
                }
            }
            break;
        case 5://左
            if (square[x][y-1]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x][y+i]=word[5-i];
                    }
                }
                else{
                    in(x, y-1, 5, time);
                }
            }
            break;
        case 6://左上
            if (square[x-1][y-1]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x+i][y+i]=word[5-i];
                    }
                }
                else{
                    in(x-1, y-1, 6, time);
                }
            }
            break;
        case 7://上
            if (square[x-1][y]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x+i][y]=word[5-i];
                    }
                }
                else{
                    in(x-1, y, 7, time);
                }
            }
            break;
        case 8://右上
            if (square[x-1][y+1]==word[time]) {
                time+=1;
                if (time==7) {
                    for (i=-1; i<6; i++) {
                        ans[x+i][y-i]=word[5-i];
                    }
                }
                else{
                    in(x-1, y+1, 8, time);
                }
            }
            break;
        default:
            break;
    }
}


