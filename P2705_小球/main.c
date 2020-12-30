//
//  main.c
//  P2705_小球
//
//  Created by 谢 on 2019/10/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int r,b,c,d,e,ans0,ans1;
    scanf("%d%d%d%d%d",&r,&b,&c,&d,&e);
    ans0 = r*c+b*d;
    if (r>b) {
        ans1 = 2*b*e+(r-b)*c;
    }
    else{
        ans1 = 2*r*e+(b-r)*d;
    }
    if (ans0>ans1) {
        printf("%d\n",ans0);
    }
    else{
        printf("%d\n",ans1);
    }
    return 0;
}
