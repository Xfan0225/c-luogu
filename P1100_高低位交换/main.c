//
//  main.c
//  P1100_高低位交换
//
//  Created by 谢 on 2019/10/14.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    long long inp,ans=0;
    int ls[32],i,n;
    scanf("%lld",&inp);
    for (i=0; i<32; i++) {
        ls[i]=0;
    }
    i = 0;
    while (inp!=0) {
        ls[i] = inp%2;
        inp /= 2;
        i++;
    }
    for (i=0; i<16; i++) {
        n = ls[i];
        ls[i] = ls[16+i];
        ls[16+i] = n;
    }
    for (i=0; i<32; i++) {
        ans += ls[i]*pow(2, i);
    }
    printf("%lld\n",ans);
    return 0;
}
