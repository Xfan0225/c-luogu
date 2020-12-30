//
//  main.c
//  P2550_彩票摇奖
//
//  Created by 谢 on 2019/10/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,ls[1005][7],i,j,wd[7],ans[8],k,count=0;
    scanf("%d",&n);
    for (j=0; j<7; j++) {
        scanf("%d",&wd[j]);
        ans[j+1] = 0;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<7; j++) {
            scanf("%d",&ls[i][j]);
            for (k=0; k<7; k++) {
                if (ls[i][j]==wd[k]) {
                    count += 1;
                }
            }
        }
        ans[count] += 1;
        count = 0;
    }
    for (i=7; i>0; i--) {
        printf("%d ",ans[i]);
    }
    printf("\n");
    return 0;
}
