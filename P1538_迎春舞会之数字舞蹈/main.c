//
//  main.c
//  P1538_迎春舞会之数字舞蹈
//
//  Created by 谢 on 2019/10/28.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
char ans[256];
void heng1(int n){
    int i=0,j;
    while (ans[i] != '\0') {
        if (ans[i] == '2'||ans[i] == '3'||ans[i] == '5'||ans[i] == '6'||ans[i] == '7'||ans[i] == '8'||ans[i] == '9'||ans[i] == '0') {
            for (j=0; j<2+n; j++) {
                if (j==0||j==1+n) {
                    printf(" ");
                }
                else{
                    printf("-");
                }
            }
        }
        else{
            for (j=0; j<2+n; j++) {
                printf(" ");
            }
        }
        printf(" ");
        i++;
    }
    printf("\n");
}

void heng2(int n){
    int i=0,j;
    while (ans[i] != '\0') {
        if (ans[i] == '2'||ans[i] == '3'||ans[i] == '4'||ans[i] == '5'||ans[i] == '6'||ans[i] == '8'||ans[i] == '9') {
            for (j=0; j<2+n; j++) {
                if (j==0||j==1+n) {
                    printf(" ");
                }
                else{
                    printf("-");
                }
            }
        }
        else{
            for (j=0; j<2+n; j++) {
                printf(" ");
            }
        }
        i++;
        printf(" ");
    }
    printf("\n");
}

void heng3(int n){
    int i=0,j;
    while (ans[i] != '\0') {
        if (ans[i] == '2'||ans[i] == '3'||ans[i] == '5'||ans[i] == '6'||ans[i] == '0'||ans[i] == '8'||ans[i] == '9') {
            for (j=0; j<2+n; j++) {
                if (j==0||j==1+n) {
                    printf(" ");
                }
                else{
                    printf("-");
                }
            }
        }
        else{
            for (j=0; j<2+n; j++) {
                printf(" ");
            }
        }
        i++;
        printf(" ");
    }
    printf("\n");
}

void shu1(int n){
    int i=0,j,k;
    for (k=0; k<n; k++) {
        while (ans[i] != '\0') {
            if (ans[i] == '1'||ans[i] == '2'||ans[i] == '3'||ans[i] == '7') {
                for (j=0; j<2+n; j++) {
                    if (j==n+1) {
                        printf("|");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            else if (ans[i] == '4'||ans[i] == '8'||ans[i] == '9'||ans[i] == '0') {
                for (j=0; j<2+n; j++) {
                    if (j==n+1||j==0) {
                        printf("|");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            else if (ans[i] == '5'||ans[i] == '6') {
                for (j=0; j<2+n; j++) {
                    if (j==0) {
                        printf("|");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            i++;
            printf(" ");
        }
        printf("\n");
        i = 0;
    }
}

void shu2(int n){
    int i=0,j,k;
    for (k=0; k<n; k++) {
        while (ans[i] != '\0') {
            if (ans[i] == '1'||ans[i] == '3'||ans[i] == '4'||ans[i] == '5'||ans[i] == '7'||ans[i] == '9') {
                for (j=0; j<2+n; j++) {
                    if (j==n+1) {
                        printf("|");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            else if (ans[i] == '6'||ans[i] == '8'||ans[i] == '0') {
                for (j=0; j<2+n; j++) {
                    if (j==n+1||j==0) {
                        printf("|");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            else if (ans[i] == '2') {
                for (j=0; j<2+n; j++) {
                    if (j==0) {
                        printf("|");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            i++;
            printf(" ");
        }
        printf("\n");
        i = 0;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    scanf("%s",&ans);
    heng1(n);
    shu1(n);
    heng2(n);
    shu2(n);
    heng3(n);
    return 0;
}
