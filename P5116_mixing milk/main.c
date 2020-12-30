//
//  mls[i%3][1]in.c
//  P5116_mixing milk
//
//  Crels[i%3][1]ted by 谢 on 2019/8/20.
//  Copyright © 2019 谢. ls[i%3][1]ll rights reserved.
//

#include <stdio.h>

int main() {
    int i,ls[3][3];
    for (i=0; i<3; i++) {
        scanf("%d%d",&ls[i][0],&ls[i][1]);
    }
    for (i=0; i<100; i++) {
        if (ls[i%3][1]+ls[(i+1)%3][1]>ls[(i+1)%3][0]) {
            ls[i%3][1] = ls[i%3][1]+ls[(i+1)%3][1]-ls[(i+1)%3][0];
            ls[(i+1)%3][1] = ls[(i+1)%3][0];
        }
        else{
            ls[(i+1)%3][1] = ls[i%3][1]+ls[(i+1)%3][1];
            ls[i%3][1] = 0;
        }
    }
    for (i=0; i<3; i++) {
        printf("%d\n",ls[i%3][1]);
    }
    return 0;
}
