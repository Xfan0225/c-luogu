//
//  main.c
//  P3150_pb的游戏
//
//  Created by 谢 on 2019/9/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i;
    long long ls[100];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%lld",&ls[i]);
    }
    for (i=0; i<n; i++) {
        if (ls[i]%2==1) {
            printf("zs wins\n");
        }
        else
            printf("pb wins\n");
    }
    return 0;
}
