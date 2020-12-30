//
//  main.c
//  P1010_幂次方
//
//  Created by 谢 on 2019/8/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0,ls[20],j;
    scanf("%d",&n);
    while (n != 0) {
        ls[i] = n%2;
        n = (n-i)/2;
        i += 1;
    }
    for (j=i; j>0; j-=1) {
        
    }
    return 0;
}

int change(int i){
    while (i != 0) {
        
    }
}
