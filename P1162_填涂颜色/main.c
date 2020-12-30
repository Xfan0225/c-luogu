//
//  main.c
//  P1162_填涂颜色
//
//  Created by 谢 on 2020/2/5.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

int map[31][31],n,place[30][2];
int main() {
    int i,j,flagfrount=0,flagback=0,flagmeetone=0,k,l,up=0,down=0,left=0,right=0;
    scanf("%d",&n);
    for (i=0; i<n;i++) {
        for (j=0; j<n; j++) {
            scanf("%d",&map[i][j]);
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (map[i][j]==0) {
                for (k=0; k<j; k++) {
                    if (map[i][k]==1) {
                        left=1;
                    }
                }
                for (k=j+1; k<n; k++) {
                    if (map[i][k]==1) {
                        right=1;
                    }
                }
                for (k=0; k<i; k++) {
                    if (map[k][j]==1) {
                        up=1;
                    }
                }
                for (k=i+1; k<n; k++) {
                    if (map[k][j]==1) {
                        down=1;
                    }
                }
                if (up*down*left*right==1) {
                    map[i][j]=2;
                }
                up=0;
                down=0;
                left=0;
                right=0;
            }
        }
    }
    flagback=1;
    while (flagback==1) {
        flagback=0;
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                if (map[i][j]==2) {
                    if (map[i][j-1]==0||map[i][j+1]==0||map[i-1][j]==0||map[i+1][j]==0) {
                        map[i][j]=0;
                        flagback==1;
                    }
                }
            }
        }
    }
    printf("\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
