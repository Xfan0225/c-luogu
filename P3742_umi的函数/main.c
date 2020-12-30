//
//  main.c
//  P3742_umi的函数
//
//  Created by 谢 on 2019/9/20.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,flag = 0;
    char x[150],y[150];
    scanf("%d",&n);
    scanf("%s",&x);
    scanf("%s",&y);
    for (i=0; i<n; i++) {
        if (x[i] < y[i]){
            printf("-1\n");
            flag = 1;
            break;
        }
    }
    if (flag==0) {
        printf("%s\n",y);
    }
    return 0;
}
