//
//  main.c
//  P1098_字符串的展开
//
//  Created by 谢 on 2019/10/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int p1,p2,p3,i=0,j=0,k,l;
    char str[105],ans[10000],start,end;
    scanf("%d%d%d",&p1,&p2,&p3);
    scanf("%s",&str);
    for (l=0; l<10000; l++) {
        ans[l] = '\0';
    }
    if (p1==1 && p3==1) {
        while (str[i] != '\0') {
            if (str[i]=='-'&&i!=0&&str[i-1]!='-'&&str[i+1]!='-') {
                start = str[i-1];
                end = str[i+1];
                if (start>=end || start<58&& end>=65) {
                    ans[j] = str[i];
                    j++;
                }
                else{
                    for (l=start+1; l<end; l++) {
                        for (k=0; k<p2; k++) {
                            ans[j] = l;
                            j++;
                        }
                    }
                }
                i++;
            }
            else{
                ans[j] = str[i];
                i++;
                j++;
            }
        }
    }
    else if (p1==1 && p3==2){
        while (str[i] != '\0') {
            if (str[i]=='-'&&i!=0&&str[i-1]!='-'&&str[i+1]!='-') {
                start = str[i-1];
                end = str[i+1];
                if (start>=end || start<58&& end>=65) {
                    ans[j] = str[i];
                    j++;
                }
                else{
                    for (l=end-1; l>start; l--) {
                        for (k=0; k<p2; k++) {
                            ans[j] = l;
                            j++;
                        }
                    }
                }
                i++;
            }
            else{
                ans[j] = str[i];
                i++;
                j++;
            }
        }
    }
    else if (p1==2 && p3==1){
        while (str[i] != '\0') {
            if (str[i]=='-'&&i!=0&&str[i-1]!='-'&&str[i+1]!='-') {
                start = str[i-1];
                end = str[i+1];
                if(start>=end || start<58&& end>=65){
                    ans[j] = str[i];
                    j++;
                }
                else{
                    for (l=start+1; l<end; l++) {
                        for (k=0; k<p2; k++) {
                            if (l>57) {
                                ans[j] = l-32;
                                j++;
                            }
                            else{
                                ans[j] = l;
                                j++;
                            }
                        }
                    }
                }
                i++;
            }
            else{
                ans[j] = str[i];
                i++;
                j++;
            }
        }
    }
    else if (p1==2 && p3==2){
        while (str[i] != '\0') {
            if (str[i]=='-'&&i!=0&&str[i-1]!='-'&&str[i+1]!='-') {
                start = str[i-1];
                end = str[i+1];
                if (start>=end || start<58&& end>=65) {
                    ans[j] = str[i];
                    j++;
                }
                else{
                    for (l=end-1; l>start; l--) {
                        for (k=0; k<p2; k++) {
                            if (l>57) {
                                ans[j] = l-32;
                                j++;
                            }
                            else{
                                ans[j] = l;
                                j++;
                            }
                        }
                    }
                }
                i++;
            }
            else{
                ans[j] = str[i];
                i++;
                j++;
            }
        }
    }
    else if (p1==3){
        while (str[i] != '\0') {
            if (str[i]=='-'&&i!=0&&str[i-1]!='-'&&str[i+1]!='-') {
                start = str[i-1];
                end = str[i+1];
                if (start>=end || start<58&& end>=65) {
                    ans[j] = str[i];
                    j++;
                }
                else{
                    for (l=start+1; l<end; l++) {
                        for (k=0; k<p2; k++) {
                            ans[j] = '*';
                            j++;
                        }
                    }
                }
                i++;
            }
            else{
                ans[j] = str[i];
                i++;
                j++;
            }
        }
    }
    printf("%s\n",ans);
    return 0;
}
