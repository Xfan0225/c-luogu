//
//  main.c
//  P2669_金币
//
//  Created by 谢 on 2019/10/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,j=1,count=0;
    long long ans=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        ans += j;
        count += 1;
        if (count>=j) {
            j += 1;
            count = 0;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
