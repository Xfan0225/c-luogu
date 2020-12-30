//
//  main.c
//  P1177_快速排序
//
//  Created by 谢 on 2019/10/14.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
long long ls[1000001];


void swap(int i, int j)
{
    long long tmp;
    tmp = ls[i];
    ls[i] = ls[j];
    ls[j]=tmp;
}

void sort(int left, int right){
    int i, last;
    if(left<right)
    {
        last=left;
        for(i=left+1;i<=right;i++)
        {
            if(ls[i]<ls[left])
                swap(++last,i);
        }
        
        swap(left,last);
        sort(left,last-1);
        sort(last+1,right);
    }
}

void maopaosort(int x,int y){
    int i,j;
    for (i=x; i<y; i++) {
        for (j=x; j<i; j++) {
            if (ls[i]>ls[j]) {
                swap(i, j);
            }
        }
    }
}

int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        scanf("%lld",&ls[i]);
    }
    sort(0, n-1);
    for (i=0; i<n; i++) {
        printf("%lld ",ls[i]);
    }
    printf("\n");
    return 0;
}

int quicksort(long long left,long long right){
    long long mid,i=left,j=right,val;
    if (right-left<=10) {
        maopaosort(i,j);
    }
    mid = ls[left];     //赋初值
    while (i != j) {
        while (ls[j]>=mid && i != j) {
            j--;
        }
        //printf("j:%d\n",j);
        if (i==j) { //i=j，打破循环
            break;
        }
        val = ls[j]; //交换顺序
        ls[j] = ls[i];
        ls[i] = val;
        while (ls[i]<=mid && i != j) {
            i++;
        }
        //printf("i:%d\n",i);
        if (i==j) {
            break;
        }
        val = ls[i];    //再次交换
        ls[i] = ls[j];
        ls[j] = val;
    }
    ls[i]=mid;      //完成一组交换之后，重置中间值
    quicksort(left,i-1);
    quicksort(i+1,right);
    return 0;
}


