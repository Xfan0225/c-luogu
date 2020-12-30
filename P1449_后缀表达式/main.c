//
//  main.c
//  P1449_后缀表达式
//
//  Created by 谢 on 2020/1/18.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    char inp;
    int stack[1024],num=0,top=0,val;
    while (1) {
        inp = getchar();
        if (inp=='@') {
            break;
        }
        if (inp-48>=0&&inp-48<=9) {
            num=num*10+(inp-48);
        }
        if (inp=='.') {
            stack[top] = num;
            num=0;
            top++;
        }
        if (inp=='+') {
            val=stack[top-1]+stack[top-2];
            stack[top-2]=val;
            stack[top-1]=0;
            top--;
        }
        if (inp=='-') {
            val=stack[top-2]-stack[top-1];
            stack[top-2]=val;
            stack[top-1]=0;
            top--;
        }
        if (inp=='*') {
            val=stack[top-2]*stack[top-1];
            stack[top-2]=val;
            stack[top-1]=0;
            top--;
        }
        if (inp=='/') {
            val=stack[top-2]/stack[top-1];
            stack[top-2]=val;
            stack[top-1]=0;
            top--;
        }
    }
    printf("%d\n",stack[0]);
    return 0;
}
