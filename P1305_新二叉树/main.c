//
//  main.c
//  P1305_新二叉树
//
//  Created by 谢 on 2020/1/22.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct node{
    char name;
    struct node *lchild, *rchild;
}*head,*p,*q;

typedef struct node BTNode;
typedef struct node * BTNodeptr;

void search(BTNodeptr p){
    printf("%c",p->name);
    if (p->lchild!=NULL) {
        search(p->lchild);
    }
    if (p->rchild!=NULL) {
        search(p->rchild);
    }
}

BTNodeptr address[30];

int main() {
    char tree[30][5],left,right;
    int n,i,depth,j;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%s",&tree[i]);
    }
    for (i=0; i<n; i++) {
        p = (BTNodeptr)malloc(sizeof(BTNode));
        address[i]=p;
        p->name = tree[i][0];
        if (i==0) {
            head = p;
        }
        else{
            for (j=0; j<i; j++) {
                left=tree[j][1];
                right=tree[j][2];
                if (tree[i][0]==left) {
                    address[j]->lchild=p;
                }
                else if (tree[i][0]==right){
                    address[j]->rchild=p;
                }
            }
        }
        if (tree[i][1]=='*') {
            p->lchild=NULL;
        }
        if (tree[i][2]=='*') {
            p->rchild=NULL;
        }
        q=p;
    }
    search(head);
    printf("\n");
    return 0;
}
