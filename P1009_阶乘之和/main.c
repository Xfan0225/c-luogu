//
//  main.c
//  P1009_阶乘之和
//
//  Created by 谢 on 2019/8/12.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,j=0,temp,add=0;
    int ls[1000],sum[1000];
    scanf("%d",&n);
    for (i=0; i<1000; i++) {
        ls[i] = -1;
        sum[i] = -1;
    }
    ls[0] = 1;
    for (i=1; i<=n; i++) {
        while (ls[j] != -1 || add !=0) {
            if (ls[j]==-1) {
                ls[j] = 0;
            }
            temp = ls[j];
            ls[j] = temp*i+add;
            add = 0;
            if (ls[j]>=10) {
                add = (int)ls[j]/(int)10;
                temp = ls[j];
                ls[j] = temp%10;
            }
            j++;
        }
        j = 0;
        while (ls[j] != -1) {
            if (sum[j]==-1) {
                sum[j] = 0;
            }
            sum[j] += ls[j];
            j++;
        }
        j = 0;
    }
    j = 0;
    
    while (sum[j] != -1 || add != 0) {
        if (sum[j]==-1) {
            sum[j] = 0;
        }
        sum[j] += add;
        add = 0;
        if (sum[j]>=10) {
            add = (int)sum[j]/(int)10;
            temp = sum[j];
            sum[j] = temp%10;
        }
        j++;
    }
    
    for (i=100;i>=0;i-=1) {
        if (sum[i]!=-1) {
            printf("%d",sum[i]);
        }
    }
    printf("\n");
    
    return 0;
}
