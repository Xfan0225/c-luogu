//
//  main.c
//  P1876_开灯
//
//  Created by 谢 on 2019/10/10.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    long long n,i=1;
    scanf("%lld",&n);
    while (i*i<=n) {
        printf("%lld ",i*i);
        i++;
    }
    printf("\n");
    return 0;
}
