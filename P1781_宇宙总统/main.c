//
//  main.c
//  P1781_宇宙总统
//
//  Created by 谢 on 2019/10/21.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,len=0,j=0,k,num=0;
    char ls[500],max[500];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%s",&ls);
        j = 0;
        while (ls[j]>='0'&&ls[j]<='9') {
            j++;
        }
        if (j>len) {
            for (k=0; k<=j; k++) {
                max[k] = ls[k];
                len = j;
                num = i+1;
            }
        }
        else if (j==len){
            for (k=0; k<500; k++) {
                if (ls[k]<max[k]) {
                    break;
                }
                else if (ls[k]>max[k]){
                    for (k=0; k<=j; k++) {
                        max[k] = ls[k];
                        num = i+1;
                    }
                    break;
                }
            }
        }
        j=0;
    }
    printf("%d\n",num);
    printf("%s\n",max);
    return 0;
}
