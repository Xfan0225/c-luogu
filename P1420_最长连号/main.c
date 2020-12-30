//
//  main.c
//  P1420_最长连号
//
//  Created by 谢 on 2019/8/6.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,ls[10000],i,flag=0,ans=0,final=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&ls[i]);
    }
    for (i=0; i<n; i++) {
        if (flag==0) {
            flag = 1;
            ans += 1;
        }
        else{
            if (ls[i] == (ls[i-1]+1)) {
                ans += 1;
            }
            else{
                if (ans>final) {
                    final = ans;
                }
                ans = 0;
                flag = 0;
            }
            
        }
    }
    if (final == 1) {
        final = 0;
    }
    printf("%d\n",final+1);
    return 0;
}
