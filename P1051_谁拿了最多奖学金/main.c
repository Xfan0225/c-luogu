//
//  main.c
//  P1051_谁拿了最多奖学金
//
//  Created by 谢 on 2019/10/23.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int reward[105],ans[105];
void swap(int i, int j)
{
    int tmp;
    tmp = reward[i];
    reward[i] = reward[j];
    reward[j] = tmp;
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
            if(reward[i]<reward[left])
                swap(++last,i);
            else if (reward[i]==reward[left]){
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
    int n,p_score,b_score,eassy,i,sum=0;
    char lead,west;
    char name[101][101];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        ans[i] = i;
        reward[i]=0;
        scanf("%s %d %d %c %c %d",&name[i],&p_score,&b_score,&lead,&west,&eassy);
        if (p_score>80&&eassy>=1) {
            reward[i] += 8000;
        }
        if (p_score>85&&b_score>80) {
            reward[i] += 4000;
        }
        if (p_score>90) {
            reward[i] += 2000;
        }
        if (p_score>85&&west=='Y') {
            reward[i] += 1000;
        }
        if (b_score>80&&lead=='Y') {
            reward[i] += 850;
        }
        sum += reward[i];
    }
    sort(0, n-1);
    printf("%s\n",name[ans[n-1]]);
    printf("%d\n",reward[n-1]);
    printf("%d\n",sum);
    return 0;
}
