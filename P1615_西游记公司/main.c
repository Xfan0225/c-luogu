//
//  main.c
//  P1615_西游记公司
//
//  Created by 谢 on 2019/9/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    long h1,m1,s1,h2,m2,s2,n;
    long ans=0;
    scanf("%ld:%ld:%ld",&h1,&m1,&s1);
    scanf("%ld:%ld:%ld",&h2,&m2,&s2);
    scanf("%ld",&n);
    ans = n*((h2-h1)*3600+(m2-m1)*60+(s2-s1));
    printf("%ld\n",ans);
    return 0;
}
