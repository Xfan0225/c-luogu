//
//  main.c
//  P1739_表达式括号匹配
//
//  Created by 谢 on 2020/1/16.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int left=0,right=0;
    char inp;
    while (1) {
        inp=getchar();
        if (inp=='(') {
            left++;
        }
        if (inp==')') {
            right++;
        }
        if (inp=='@') {
            break;
        }
        if (right>left) {
            printf("NO\n");
            return 0;
        }
    }
    if (left==right) {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
