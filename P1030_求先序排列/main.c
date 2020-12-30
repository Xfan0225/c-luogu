//
//  main.c
//  P1030_求先序排列
//
//  Created by 谢 on 2020/1/21.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

void search(int,int);
char mid[15],back[15];

int main() {
    char val;
    int i=0,lenth;
    scanf("%s",&mid);
    scanf("%s",&back);
    while (back[i]>='A'&&back[i]<='Z') {
        i++;
    }
    lenth=i;
    for (i=0; i<lenth/2; i++) {
        val=back[i];
        back[i]=back[lenth-i-1];
        back[lenth-i-1]=val;
    }
    search(0, lenth);
    printf("\n");
    return 0;
}

void search(int start,int end){
    int i,j=0,min=10,minvalplace=start;
    char val;
    if (end-start==1) {
        printf("%c",mid[start]);
    }
    else if (end-start>1){
        for (i=start; i<end; i++) {
            val=mid[i];
            while (back[j]!=val) {
                j++;
            }
            if (j<min) {
                min=j;
                minvalplace=i;
            }
            j=0;
        }
        printf("%c",back[min]);
        if (minvalplace-start>=1) {
            search(start, minvalplace);
        }
        if (end-minvalplace>=1) {
            search(minvalplace+1, end);
        }
    }
}
