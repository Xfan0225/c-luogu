//
//  main.c
//  P1093_奖学金
//
//  Created by 谢 on 2019/10/28.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int ls[500][5],ans[500];

void swap(int i, int j)
{
    int tmp,k;
    for (k=0; k<4; k++) {
        tmp = ls[i][k];
        ls[i][k] = ls[j][k];
        ls[j][k] = tmp;
    }
    tmp = ans[i];
    ans[i] = ans[j];
    ans[j] = tmp;
}

void sort(int left, int right){
    int i, last;
    if(left<right)
    {
        last=left;
        for(i=left+1;i<=right;i++)
        {
            if(ls[i][3]<ls[left][3])
                swap(++last,i);
            else if (ls[i][3]==ls[left][3]){
                if (ls[i][0]<ls[left][0]) {
                    swap(i, left);
                }
                if (ls[i][0]==ls[left][0]) {
                    if (ans[i]>ans[left]) {
                        swap(i, left);
                    }
                }
            }
        }
        swap(left,last);
        sort(left,last-1);
        sort(last+1,right);
    }
}

int main() {
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d%d%d",&ls[i][0],&ls[i][1],&ls[i][2]);
        ls[i][3] = ls[i][0]+ls[i][1]+ls[i][2];
        ans[i] = i+1;
    }
    sort(0, n-1);
    for (i=n-1; i>=n-5; i--) {
        printf("%d %d\n",ans[i],ls[i][3]);
    }
    return 0;
}
