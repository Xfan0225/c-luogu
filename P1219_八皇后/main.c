//
//  main.c
//  P1219_八皇后
//
//  Created by 谢 on 2019/10/30.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
int n,count=0;

void made(int,int*);

int main() {
    int i,ls[15];
    for (i=0; i<n; i++) {
        ls[i]=-1;
    }
    scanf("%d",&n);
    made(0, ls);
    printf("%d\n",count);
    return 0;
}

void made(int depth,int* used){
    int i,j,flag=0,k;
    if (depth==n) {
        if (count<3) {
            for (i=0; i<n; i++) {
                printf("%d ",used[i]);
            }
            printf("\n");
            count++;
        }
        else{
            count++;
        }
    }
    else{
        for (i=0; i<n; i++) {
            for (j=0; j<depth; j++) {
                if (used[j]==i+1) {
                    flag=1;
                }
            }
            if (flag==0) {
                for (k=i-depth; k<=i+depth; k++) {
                    if (k<i&&k>=0) {
                        if (used[depth-(i-k)]-1==k) {
                            flag=1;
                        }
                    }
                    else if (k>i&&k<=n-1){
                        if (used[depth-(k-i)]-1==k) {
                            flag=1;
                        }
                    }
                }
            }
            if (flag==0) {
                used[depth]=i+1;
                made(depth+1, used);
            }
            flag=0;
        }
    }
}
