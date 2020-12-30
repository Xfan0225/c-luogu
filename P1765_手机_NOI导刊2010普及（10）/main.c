//
//  main.c
//  P1765_手机_NOI导刊2010普及（10）
//
//  Created by 谢 on 2019/9/24.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    char str[300];
    int i=0,ans=0;
    gets(str);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            ans += 1;
        }
        else if (str[i] == 'a' || str[i] == 'd' || str[i] == 'g' || str[i] == 'j' || str[i] == 'm' || str[i] == 'p' || str[i] == 't' || str[i] == 'w'){
            ans += 1;
        }
        else if (str[i] == 'b' || str[i] == 'e' || str[i] == 'h' || str[i] == 'k' || str[i] == 'n' || str[i] == 'q' || str[i] == 'u' || str[i] == 'x'){
            ans += 2;
        }
        else if (str[i] == 'c' || str[i] == 'f' || str[i] == 'i' || str[i] == 'l' || str[i] == 'o' || str[i] == 'r' || str[i] == 'v' || str[i] == 'y'){
            ans += 3;
        }
        else if (str[i] == 's' || str[i] == 'z'){
            ans += 4;
        }
        i++;
    }
    printf("%d\n",ans);
    return 0;
}
