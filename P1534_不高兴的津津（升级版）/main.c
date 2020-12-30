//
//  main.c
//  P1534_不高兴的津津（升级版）
//
//  Created by 谢 on 2019/9/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,a,b,ang,ans=0,ls[3000];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d%d",&a,&b);
        ang = a+b-8;
        ans += ang;
        ls[i] = ans;
    }
    ans = 0;
    for (i=0; i<n; i++) {
        ans += ls[i];
    }
    printf("%d\n",ans);
    return 0;
}
