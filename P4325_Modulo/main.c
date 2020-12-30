//
//  main.c
//  P4325_Modulo
//
//  Created by 谢 on 2019/8/4.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int ls[10],i,ans[10],temp,j=0,k=0;
    for (i=0; i<10; i++) {
        scanf("%d",&ls[i]);
        ans[i] = -1;
    }
    for (i=0; i<10; i++) {
        temp = ls[i] % 42;
        while (1) {
            if (temp == ans[j]){
                break;
            }
            if (j == k) {
                ans[j] = temp;
                k++;
                break;
            }
            j++;
        }
        j = 0;
    }
    printf("%d\n",k);
    return 0;
}
