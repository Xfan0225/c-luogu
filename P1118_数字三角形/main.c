//
//  main.c
//  P1118_数字三角形
//
//  Created by 谢 on 2020/2/20.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

int map[13][13],sum,ans[13],n;

void dfs(int depth){
    int i,count=0;
    for (i=0; i<n; i++) {
        count+=ans[i]*map[n-1][i];
    }
    if (count==ans) {
        return;
    }
    else{
        ans
    }
}

int main() {
    int i,j,left;
    map[0][0]=1;map[1][0]=1;map[1][1]=1;
    for (i=2; i<12; i++) {
        for (j=0; j<=i; j++) {
            if (j-1<0) {
                left=0;
            }
            else{
                left=map[i-1][j-1];
            }
            if (j==i) {
                map[i][j]=map[i-1][j-1];
            }
            else{
                map[i][j]=left+map[i-1][j];
            }
        }
    }
    for (i=0; i<n; i++) {
        ans[i]=i+1;
    }
    scanf("%d%d",&n,&sum);
    dfs(n);
    return 0;
}
