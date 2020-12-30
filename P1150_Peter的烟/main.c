//
//  main.c
//  P1150_Peter的烟
//
//  Created by 谢 on 2019/9/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    long n,k,ans=0,free;
    scanf("%ld%ld",&n,&k);
    while (n>=k) {
        free = n/k;
        ans += free*k;
        n -= free*k;
        n += free;
    }
    ans += n;
    printf("%ld\n",ans);
    return 0;
}
