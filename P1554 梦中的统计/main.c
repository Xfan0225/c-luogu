//
//  main.c
//  P1554 梦中的统计
//
//  Created by 谢 on 2019/8/4.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    long a,b,i,j;
    int ans[10];
    int val=0;
    char temp[20];
    scanf("%ld%ld",&a,&b);
    for (j=0; j<20; j++) {
        ans[j] = 0;
    }
    for (i=a;i<=b;i++) {
        sprintf(temp, "%ld", i);
        for (j=0; j<10;  j++) {
            if (temp[j] != '\0') {
                val = (int)temp[j]-48;
                ans[val] += 1;
                temp[j] = '\0';
            }
        }
    }
    for (j=0; j<10; j++) {
        printf("%d ",ans[j]);
    }
    printf("\n");
    return 0;
}
