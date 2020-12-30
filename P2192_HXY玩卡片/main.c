//
//  main.c
//  P2192_HXY玩卡片
//
//  Created by 谢 on 2019/9/24.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,count0 = 0,count5 = 0;
    int ls[1000];
    long sum=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&ls[i]);
        if (ls[i] == 0) {
            count0 += 1;
        }
        else if (ls[i] == 5){
            count5 += 1;;
        }
    }
    if (count0 == 0 && count5 < 9) {
        printf("-1\n");
    }
    else if (count5 < 9 && count0>0 ){
        printf("0\n");
    }
    else if (count5 >= 9&& count0 == 0){
        for (i=0; i<(count5/9)*9; i++) {
            printf("5");
        }
        printf("\n");
    }
    else{
        for (i=0; i<(count5/9)*9; i++) {
            printf("5");
        }
        for (i=0; i<count0; i++) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
