//
//  main.c
//  P1888_三角函数
//
//  Created by 谢 on 2019/8/6.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int ls[3],x,y,i,temp,gcd,ans1,ans2;
    for (i=0; i<3; i++) {
        scanf("%d",&ls[i]);
    }
    for (i=0; i<2; i++) {
        if (ls[i]>ls[i+1]) {
            temp = ls[i+1];
            ls[i+1] = ls[i];
            ls[i] = temp;
        }
    }
    if (ls[0]>ls[2]) {
        temp = ls[2];
        ls[2] = ls[0];
        ls[0] = temp;
    }
    x = ls[0];
    y = ls[2];
    ans1 = x;
    ans2 = y;
    gcd = x;
    while (y%x != 0) {
        temp = y%x;
        y = x;
        x = temp;
    }
    printf("%d/%d\n",ans1/x,ans2/x);
    return 0;
}
