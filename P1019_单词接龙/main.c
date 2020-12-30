//
//  main.c
//  P1019_单词接龙
//
//  Created by 谢 on 2020/2/1.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

char words[25][25],start[25];
int n,lenth[25];
long ansall=0;

void make(int*,int,long);
int main() {
    int countls[25],i,j=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%s",&words[i]);
        while (words[i][j]!='\0') {
            j++;
        }
        lenth[i]=j;
        j=0;
        countls[i]=0;
    }
    scanf("%s",&start);
    for (i=0; i<n; i++) {
        if (words[i][0]==start[0]) {
            countls[i]=1;
            make(countls,i,lenth[i]);
            countls[i]=0;
        }
    }
    for (i=0; i<n; i++) {
        if (lenth[i]>ansall) {
            ansall=lenth[i];
        }
    }
    printf("%ld\n",ansall);
    return 0;
}

void make(int* countls,int endword,long ans){
    int i,j=0,k=0;
    for (i=0; i<n; i++) {
        while (k<lenth[endword]) {
            while (j+k<lenth[endword]&&j<lenth[i]) {
                if (words[endword][k+j]==words[i][j]) {
                    j++;
                }
                else{
                    j=0;
                    break;
                }
            }
            if (j>0&&countls[i]<2&&lenth[i]-j>0) {
                ans+=lenth[i]-j;
                if (ans>ansall) {
                    ansall=ans;
                }
                countls[i]++;
                make(countls, i, ans);
                countls[i]--;
                ans-=lenth[i]-j;
            }
            k++;
            j=0;
        }
        k=0;
    }
}
