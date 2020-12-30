//
//  main.c
//  P1160_队列安排
//
//  Created by 谢 on 2020/1/18.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct node{
    long name;
    struct node* front;
    struct node* back;
}*list[100005];

typedef struct node Node;
typedef struct node* Nodeptr;

Node queue;
Nodeptr start=NULL,end=NULL;

int main() {
    long n,m,i,place,num,inp;
    Nodeptr p,search;
    scanf("%ld",&n);
    for (i=1;i<=n;i++) {
        p = (Nodeptr)malloc(sizeof(Node));
        list[i]=p;
        if (i==1) {
            start=p;
            p->name=i;
            end=p;
            p->front=NULL;
            p->back=NULL;
        }
        else{
            scanf("%ld%ld",&num,&place);
            search=list[num];
            if (place==0) {
                p->name=i;
                if (search->front!=NULL) {
                    search->front->back=p;
                    p->front=search->front;
                    p->back=search;
                    search->front=p;
                }
                else{
                    search->front=p;
                    p->back=search;
                    start=p;
                    p->front=NULL;
                }
            }
            else if (place==1){
                p->name=i;
                if (search->back!=NULL) {
                    p->front=search;
                    p->back=search->back;
                    search->back->front=p;
                    search->back=p;
                }
                else{
                    search->back=p;
                    p->front=search;
                    end=p;
                    p->back=NULL;
                }
            }
        }
    }
    scanf("%ld",&m);
    for (i=0; i<m; i++) {
        scanf("%ld",&inp);
        p=list[inp];
        if (p->name!=-1) {
            if (p->front!=NULL&&p->back!=NULL) {
                p->front->back=p->back;
                p->back->front=p->front;
            }
            else if(p->front==NULL){
                start=p->back;
                p->back->front=NULL;
            }
            else if(p->back==NULL){
                end=p->front;
                p->front->back=NULL;
            }
        }
        p->name=-1;
    }
    p=start;
    while (p!=NULL) {
        printf("%ld ",p->name);
        p=p->back;
    }
    return 0;
}

