//
//  main.c
//  P1011_车站
//
//  Created by 谢 on 2019/9/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,n,m,x,ls[25],i,val,ans,u,als[25];
    scanf("%d%d%d%d",&a,&n,&m,&x);
    for (i=0; i<n; i++) {
        if (i==0 || i==1) {
            ls[i] = 1;
        } else {
            ls[i] = ls[i-1] + ls[i-2];
        }
    }
    for (i=0; i<n; i++) {
        if (i<3) {
            als[i] = 0;
        } else {
            als[i] = ls[i-1]-ls[i-2]+als[i-1];
        }
    }
    u = (m-(a-1)*ls[n-2])/als[n-2];
    ans = als[x-1]*u+ls[x-1]*(a-1)+1;
    printf("%d\n",ans);
    return 0;
}
