//
//  main.c
//  P2955_奇数偶数
//
//  Created by 谢 on 2019/10/9.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,j=0;
    int ls[150];
    char inp[100];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%s",&inp);
        while (inp[j] != '\0') {
            j++;
        }
        if (inp[j-1] % 2 == 0) {
            ls[i] = 2;
        }
        else{
            ls[i] = 1;
        }
        j = 0;
    }
    for (i=0; i<n; i++) {
        if (ls[i]%2==0) {
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}
