//
//  main.c
//  P2084_进制转换
//
//  Created by 谢 on 2019/10/10.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,i=0,n,flag=0,release=0,stop=-1;
    char inp[1005];
    scanf("%d%s",&a,&inp);
    while (inp[i] != '\0') {
        if (inp[i] == '0' && release == 0) {
            flag = i;
            release = 1;
        }
        if (inp[i] != '0') {
            release = 0;
        }
        i++;
    }
    if (release == 1) {
        stop = flag;
    }
    n = i - 1;
    i = 0;
    while (inp[i] != '\0') {
        if (inp[i] != '0' && i != n && i != stop-1) {
            printf("%d*%d^%d+",inp[i]-48,a,n-i);
            }
        else if (i == stop-1){
            printf("%d*%d^%d",inp[i]-48,a,n-i);
            break;
        }
        else if (i == n && inp[i] != '0'){
            printf("%d*%d^%d",inp[i]-48,a,n-i);
            break;
        }
        i++;
    }
    printf("\n");
    return 0;
}
