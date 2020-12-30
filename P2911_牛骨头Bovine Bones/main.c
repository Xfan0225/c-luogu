//
//  main.c
//  P2911_牛骨头Bovine Bones
//
//  Created by 谢 on 2019/9/23.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int s1,s2,s3,ans=0,i,j,k;
    int ls1[30],ls2[30],ls3[50],ansls[80],val,big=0;
    scanf("%d%d%d",&s1,&s2,&s3);
    for (i=3; i<80; i++) {
        ansls[i] = 0;
    }
    for (i=0; i<s1; i++) {
        ls1[i] = i+1;
    }
    for (j=0; j<s2; j++) {
        ls2[j] = j+1;
    }
    for (k=0; k<s3; k++) {
        ls3[k] = k+1;
    }
    for (i=0; i<s1; i++) {
        for (j=0; j<s2; j++) {
            for (k=0; k<s3; k++) {
                val = ls1[i] + ls2[j] + ls3[k];
                ansls[val] += 1;
            }
        }
    }
    for (i=3; i<80; i++) {
        if (ansls[i]>big) {
            ans = i;
            big = ansls[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}
