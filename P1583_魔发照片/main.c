//
//  main.c
//  P1583_魔发照片
//
//  Created by 谢 on 2019/10/23.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
int ls[20001],ans[20001],e[11],copy[20001];
void swap(int i, int j)
{
    int tmp;
    tmp = ls[i];
    ls[i] = ls[j];
    ls[j] = tmp;
    tmp = ans[i];
    ans[i] = ans[j];
    ans[j] = tmp;
}

void sort(int left, int right){
    int i, last,tmp;
    if(left<right)
    {
        last=left;
        for(i=left+1;i<=right;i++)
        {
            if(ls[i]<ls[left])
                swap(++last,i);
            else if (ls[i]==ls[left]){
                if (ans[i]>ans[left]) {
                    swap(i, left);
                }
            }
        }
        
        swap(left,last);
        sort(left,last-1);
        sort(last+1,right);
    }
}

int main() {
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    for (i=1; i<11; i++) {
        scanf("%d",&e[i]);
    }
    for (i=1; i<n+1; i++) {
        scanf("%d",&ls[i]);
        ans[i] = i;
    }
    sort(1, n);
    for (i=1; i<=(n+1)/2; i++) {
        swap(i, n+1-i);
    }
    for (i=1; i<n+1;i++) {
        ls[i] += e[(i-1)%10+1];
    }
    sort(1, n);
    for (i=1; i<=(n+1)/2; i++) {
        swap(i, n+1-i);
    }
    for (i=1; i<=k; i++) {
        printf("%d ",ans[i]);
    }
    printf("\n");
    return 0;
}
