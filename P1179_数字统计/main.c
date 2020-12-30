//
//  main.c
//  P1179_数字统计
//
//  Created by 谢 on 2019/9/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int ans=0,i,l,r,val,num=1;
    scanf("%d%d",&l,&r);
    for (i=l; i<=r; i++) {
        num = i;
        while (num>=10) {
            val = num%10;
            if (val==2) {
                ans += 1;
            }
            num = num/10;
        }
        if (num==2) {
            ans += 1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
