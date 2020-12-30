//
//  main.c
//  P1996 约瑟夫问题
//
//  Created by 谢 on 2020/1/16.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct lb{
    int num;
    struct lb* place;
};

typedef struct lb node;
typedef struct lb* nodeptr;

int main(int argc, const char * argv[]) {
    nodeptr p,q,list=NULL;
    int m,n,i,count=0;
    scanf("%d%d",&m,&n);
    if (m==0) {
        return 0;
    }
    for (i=1; i<=m; i++) {
        p=(nodeptr)malloc(sizeof(node));
        p->num=i;
        p->place=NULL;
        if (list==NULL) {
            list=p;
            q=p;
        }
        else{
            q->place=p;
        }
        q=p;
    }
    p->place=list;
    while (count<m) {
        for (i=0; i<n-2; i++) {
            list=list->place;
            //printf("%d\n",list->num);
        }
        p=list;
        printf("%d ",list->place->num);
        list->place=p->place->place;
        list=list->place;
        count++;
    }
    return 0;
}
