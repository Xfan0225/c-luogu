//
//  main.c
//  P1075_质因数分解
//
//  Created by 谢 on 2019/10/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    long n,ans=0,i;
    scanf("%ld",&n);
    for (i=2; i<n; i++) {
        if (n%i==0) {
            ans = n/i;
            break;
        }
    }
    printf("%ld\n",ans);
    return 0;
}
