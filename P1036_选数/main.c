//
//  main.c
//  P1036_选数
//
//  Created by 谢 on 2019/10/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
int f[5000005];
long ls[25];
int cot = 0;
int main() {
    int n,k,i,j;
    f[1]=0;
    for(int i=2;i<=5000005;i++)
        f[i]=1;
    for(int i=2;i<=5000005;i++){
        if(f[i]==1){
            for(int j=2;j*i<=5000005;j++)
                f[i*j]=0;
        }
    }
    scanf("%d%d",&n,&k);
    for (i=0; i<n; i++) {
        scanf("%ld",&ls[i]);
    }
    range(n,k,0,0);
    printf("%d\n",cot);
    return 0;
}

int range(int n,int k,long sum,int start){
    int i;
    if (k == 0) {
//        printf("%ld\n",sum);
        if (f[sum]==1) {
            cot += 1;
        }
        return 0;
    }
    for (i = start; i < n; i++) {
        range(n, k - 1, sum + ls[i], i + 1);
    }
    return 0;
}
