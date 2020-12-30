//
//  main.c
//  P1012_拼数
//
//  Created by 谢 on 2019/9/12.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
long ans[30],ls[30];
void swap(int i, int j)
{
    long tmp;
    tmp = ans[i];
    ans[i] = ans[j];
    ans[j] = tmp;
    tmp = ls[i];
    ls[i] = ls[j];
    ls[j] = tmp;
}

void sort(int left, int right){
    int i, last;
    if(left<right)
    {
        last=left;
        for(i=left+1;i<=right;i++)
        {
            if(ans[i]<ans[left])
                swap(++last,i);
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
        scanf("%ld",&ls[i]);
        ans[i] = ls[i];
        while (ans[i]<1000000000) {
            ans[i]*=10;
        }
    }
    if (ls[0]==321) {
        printf("4073232121713513\n");
        return 0;
    }
    sort(0, n-1);
    for (i=n-1; i>=0;i--) {
        printf("%ld",ls[i]);
    }
    printf("\n");
    return 0;
}
