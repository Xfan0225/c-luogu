//
//  main.c
//  P1151_子数整数
//
//  Created by 谢 on 2019/9/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,k,sub1,sub2,sub3,w,q,flag=0;
    scanf("%d",&k);
    for (i=10000; i<=30000; i++) {
        sub1 = i/100;
        w = i/10000;
        sub2 = (i-(w*10000))/10;
        q = (i-w*10000)/1000;
        sub3 = i-w*10000-q*1000;
        if (sub1%k == 0 && sub2%k == 0 && sub3%k == 0) {
            printf("%d\n",i);
            flag = 1;
        }
    }
    if (flag==0) {
        printf("No\n");
    }
    return 0;
}
