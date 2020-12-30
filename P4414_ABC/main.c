//
//  main.c
//  P4414_ABC
//
//  Created by 谢 on 2019/10/14.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,val,i;
    char str[4];
    scanf("%d%d%d",&a,&b,&c);
    scanf("%s",&str);
    for (i=0; i<1; i++) {
        if (a>c) {
            val = c;
            c = a;
            a = val;
        }
        if (a>b) {
            val = b;
            b = a;
            a = val;
        }
        if (b>c) {
            val = c;
            c = b;
            b = val;
        }
    }
    for (i=0; i<3; i++) {
        if (str[i]=='A') {
            printf("%d",a);
        }
        else if (str[i]=='B'){
            printf("%d",b);
        }
        else if (str[i]=='C'){
            printf("%d",c);
        }
        if (i!=2) {
            printf(" ");
        }
    }
    printf("\n");
}
