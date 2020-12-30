//
//  main.c
//  P1226_快速幂||取余运算
//
//  Created by 谢 on 2019/11/13.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    long long b,p,k,mod,ans=1,p1,mod2;
    scanf("%lld%lld%lld",&b,&p,&k);
    p1 = p;
    mod = b;
    while (p!=0) {
        if (p%2==1) {
            ans *= b%k;
            p--;
        }
        if (ans>=b) {
            ans = ans % k;
        }
        b = b*b%k;
        p = p/2;
    }
    printf("%lld^%lld mod %lld=%lld\n",mod,p1,k,ans%k);
    return 0;
}
