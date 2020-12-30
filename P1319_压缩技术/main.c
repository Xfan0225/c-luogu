//
//  main.c
//  P1319_压缩技术
//
//  Created by 谢 on 2019/10/10.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,ls[100000],i=0,sum=0,count=0,time=0,flag=0,j;
    for (i=0; i<100000; i++) {
        ls[i] = 0;
    }
    i = 0;
    scanf("%d",&n);
    while (sum<n*n) {
        scanf("%d",&ls[i]);
        sum += ls[i];
        i++;
    }
    count = i;
    for (i=0; i<count; i++) {
        if (flag==0) {
            for (j=0; j<ls[i]; j++) {
                printf("0");
                time ++;
                if (time==n) {
                    printf("\n");
                    time = 0;
                }
            }
            flag = 1;
            }
        else if (flag == 1){
            for (j=0; j<ls[i]; j++) {
                printf("1");
                time ++;
                if (time==n) {
                    printf("\n");
                    time = 0;
                }
            }
            flag = 0;
        }
    }
    return 0;
}
