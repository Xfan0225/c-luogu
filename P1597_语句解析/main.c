//
//  main.c
//  P1597_语句解析
//
//  Created by 谢 on 2019/10/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    char str[300];
    int a=0,b=0,c=0,i=0;
    scanf("%s",&str);
    while (str[i] != '\0') {
        if (str[i] == 'a') {
            if (str[i+3]=='b') {
                a = b;
                i += 5;
            }
            else if (str[i+3]=='c'){
                a = c;
                i += 5;
            }
            else if (str[i+3]=='a'){
                i += 5;
            }
            else{
                a = str[i+3] - 48;
                i += 5;
            }
        }
        else if (str[i]== 'b'){
            if (str[i+3]=='a') {
                b = a;
                i += 5;
            }
            else if (str[i+3]=='c'){
                b = c;
                i += 5;
            }
            else if (str[i+3]=='b'){
                i += 5;
            }
            else{
                b = str[i+3] - 48;
                i += 5;
            }
        }
        else if (str[i]=='c'){
            if (str[i+3]=='a') {
                c = a;
                i += 5;
            }
            else if (str[i+3]=='b'){
                c = b;
                i += 5;
            }
            else if (str[i+3]=='c'){
                i += 5;
            }
            else{
                c = str[i+3] - 48;
                i += 5;
            }
        }
        else{
            i++;
        }
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
