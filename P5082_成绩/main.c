//
//  main.c
//  P5082_成绩
//
//  Created by 谢 on 2019/8/12.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i=0;
    scanf("%d",&n);
    int score[n], ls[n];
    double sum=0,real=0,diss=0;
    float ans;
    while (i<n) {
        scanf("%d",&score[i]);
        i += 1;
    }
    for (i=0; i<n; i++) {
        scanf("%d",&ls[i]);
    }
    for (i=0; i<n; i++) {
        real += ls[i];
        sum += score[i];
        diss += score[i]-ls[i];
    }
    
    ans = (sum*3-real*2)/diss;
    printf("%.6f\n",ans);
    return 0;
}
