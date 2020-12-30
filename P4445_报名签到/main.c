//
//  main.c
//  P4445_报名签到
//
//  Created by 谢 on 2019/9/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,ls[100000],i,val;
    long long ans=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&ls[i]);
        if (i==0) {
            val = ls[0];
        }
        else{
            if (val>ls[i]) {
                ans += val;
                val = ls[i];
            } else {
                ans += ls[i];
                val = ls[i];
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}
