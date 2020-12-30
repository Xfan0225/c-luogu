//
//  main.c
//  P1634_禽兽的传染病
//
//  Created by 谢 on 2019/8/6.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,n,i;
    long ans=1;
    scanf("%d%d",&x,&n);
    for (i=0; i<n; i++) {
        ans = ans*(x+1);
    }
    printf("%ld\n",ans);
    return 0;
}
