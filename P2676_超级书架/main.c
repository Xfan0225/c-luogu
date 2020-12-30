//
//  main.c
//  P2676_超级书架
//
//  Created by 谢 on 2019/9/24.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
int ls[20005];
int main() {
    int n,b,i,j,val,sum=0,time = 0;
    scanf("%d%d",&n,&b);
    for (i=0; i<n; i++) {
        scanf("%d",&ls[i]);
    }
    for (i=0; i<n; i++) {
        for (j=i; j>=0; j-=1) {
            if (ls[j] < ls[j+1]) {
                val = ls[j+1];
                ls[j+1] = ls[j];
                ls[j] = val;
            }
        }
    }
    i = 0;
    while (sum<b) {
        sum += ls[i];
        i++;
        time++;
    }
    printf("%d\n",time);
    return 0;
}
