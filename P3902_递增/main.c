//
//  main.c
//  P3902_递增
//
//  Created by 谢 on 2019/8/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,ans=0;
    scanf("%d",&n);
    int ls[n];
    for (i=0; i<n; i++) {
        ls[n] = getchar();
    }
    for (i=1; i<n-1; i++) {
        if ((ls[i]+1)>ls[i+1]) {
            ans++;
            ls[i] = ls[i-1] + 1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
