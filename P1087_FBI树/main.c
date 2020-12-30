//
//  main.c
//  P1087_FBI树
//
//  Created by 谢 on 2020/1/20.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node{
    char name;
    struct node *lchild,*rchild;
};

typedef struct node BTNode;
typedef struct node* BTNodeptr;

BTNodeptr p,q,head,address[11][1030];

void visit(BTNodeptr i){
    printf("%c",i->name);
}

void search(BTNodeptr i){
    if (i!=NULL) {
        if (i->lchild!=NULL) {
            search(i->lchild);
        }
        if (i->rchild!=NULL) {
            search(i->rchild);
        }
        visit(i);
    }
}

int main() {
    int i,ls[1030],n,count,level=1;
    char inp,val[1030];
    scanf("%d",&n);
    scanf("%s",&val);
    if (n==0) {
        printf("B");
        return 0;
    }
    count=pow(2, n+1);
    for (i=0; i<pow(2, n); i++) {
        inp=val[i]-48;
        ls[i]=inp;
        p=(BTNodeptr)malloc(sizeof(BTNode));
        if (ls[i]==0) {
            p->name='B';
        }
        else if (ls[i]==1){
            p->name='I';
        }
        address[0][i]=p;
    }
    while (1) {
        for (i=0; i<count/2; i+=2) {
            p=(BTNodeptr)malloc(sizeof(BTNode));
            if (address[level-1][i]->name=='F'||address[level-1][i+1]->name=='F') {
                p->name='F';
            }
            else if (address[level-1][i]->name=='B'&&address[level-1][i+1]->name=='B') {
                p->name='B';
            }
            else if (address[level-1][i]->name=='I'&&address[level-1][i+1]->name=='B') {
                p->name='F';
            }
            else if (address[level-1][i]->name=='B'&&address[level-1][i+1]->name=='I') {
                p->name='F';
            }
            else if (address[level-1][i]->name=='I'&&address[level-1][i+1]->name=='I') {
                p->name='I';
            }
            p->lchild=address[level-1][i];
            p->rchild=address[level-1][i+1];
            address[level][i/2]=p;
        }
        if (level==n) {
            head=p;
            break;
        }
        level++;
        count=count/2;
    }
    search(head);
    return 0;
}
