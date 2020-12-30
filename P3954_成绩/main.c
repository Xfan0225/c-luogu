//
//  main.c
//  P3954_成绩
//
//  Created by 谢 on 2019/9/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,ans;
    scanf("%d%d%d",&a,&b,&c);
    ans = a/10*2+b/10*3+c/2;
    printf("%d\n",ans);
    return 0;
}
