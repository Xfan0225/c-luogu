//
//  main.c
//  P1032_字串变换
//
//  Created by 谢 on 2020/2/8.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void bfs(char*,int);
char inp[25],otp[25];
char ruleinp[7][25],ruleotp[7][25];
int minsearch=11,searchdeep;

int main() {
    int i=0;
    scanf("%s %s",&inp,&otp);
    /*
    while (1) {
        scanf("%s %s",&ruleinp[i],&ruleotp[i]);
        if (ruleinp[i][0]=='\0'||i==6) {
            break;
        }
        i++;
    }
     */
    for (i=0; i<3; i++) {
        scanf("%s %s",&ruleinp[i],&ruleotp[i]);
    }
    searchdeep=i;
    bfs(inp, 0);
    if (minsearch<=10) {
        printf("%d\n",minsearch);
    }
    else{
        printf("NO ANSWER!\n");
    }
}

void bfs(char* change,int searchtime){
    int i,j,k,flagchange=0,l;
    char front[30],back[30];
    if (strcmp(change,otp)||searchtime>10) {
        if (searchtime<minsearch) {
            minsearch=searchtime;
        }
        return;
    }
    for (i=0; i<searchdeep; i++) {
        for (j=0; j<strlen(change)-strlen(ruleinp[i]); j++) {
            for (k=j; k<strlen(ruleinp[i])+j; k++) {
                
                if (change[k]!=ruleinp[i][k-j]) {
                    flagchange=1;
                    break;
                }
            }
            if (flagchange==0) {
                for (k=0; k<j; k++) {
                    front[k]=change[k];
                }
                strcat(front, ruleotp[i]);
                for (k=j+strlen(ruleinp[i]),l=0; k<strlen(change); k++,l++) {
                    back[l]=change[k];
                }
                strcat(front, back);
                bfs(front, searchtime+1);
            }
            flagchange=0;
        }
    }
}
