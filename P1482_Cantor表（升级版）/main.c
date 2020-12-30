//
//  main.c
//  P1482_Cantor表（升级版）
//
//  Created by 谢 on 2019/10/3.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int a0,b0,a1,b1,p,ans1,ans2;
    scanf("%d/%d",&a0,&b0);
    scanf("%d/%d",&a1,&b1);
    ans1 = a0*a1;
    ans2 = b0*b1;
    p = gcd(ans1,ans2);
    ans1 = ans1/p;
    ans2 = ans2/p;
    printf("%d ",ans2);
    printf("%d\n",ans1);
    return 0;
}

int gcd(int a,int b){
    int x;
    if (b>a) {
        x = a;
        a = b;
        b = x;
    }
    x=a%b;
    while (x != 0) {
        a = b;
        b = x;
        x = a%b;
    }
    return b;
}
