//
//  main.c
//  P1443_马的遍历
//
//  Created by 谢 on 2020/2/15.
//  Copyright © 2020 谢. All rights reserved.
//
        
#include <stdio.h>

long long map[405][405],n,m,flagchange=0;

long long queue[1000][100000][2],count=0;
long long depth=0;

void bfs(long long x,long long y){
    if (map[x-2][y+1]==0&&x-2>=0&&y+1<m) {
        map[x-2][y+1]=count+1;
        queue[count][depth][0]=x-2;
        queue[count][depth][1]=y+1;
        depth++;flagchange=1;
//        printf("go 1\n");
    }
    if (map[x-1][y+2]==0&&x-1>=0&&y+2<m){
        map[x-1][y+2]=count+1;
        queue[count][depth][0]=x-1;
        queue[count][depth][1]=y+2;
        depth++;flagchange=1;
//        printf("go 2\n");
    }
    if (map[x+1][y+2]==0&&x+1<n&&y+2<m){
        map[x+1][y+2]=count+1;
        queue[count][depth][0]=x+1;
        queue[count][depth][1]=y+2;
        depth++;flagchange=1;
//        printf("go 3\n");
    }
    if (map[x+2][y+1]==0&&x+2<n&&y+1<m){
        map[x+2][y+1]=count+1;
        queue[count][depth][0]=x+2;
        queue[count][depth][1]=y+1;
        depth++;flagchange=1;
//        printf("go 4\n");
    }
    if (map[x+2][y-1]==0&&x+2<n&&y-1>=0){
        map[x+2][y-1]=count+1;
        queue[count][depth][0]=x+2;
        queue[count][depth][1]=y-1;
        depth++;flagchange=1;
//        printf("go 5\n");
    }
    if (map[x+1][y-2]==0&&x+1<n&&y-2>=0){
        map[x+1][y-2]=count+1;
        queue[count][depth][0]=x+1;
        queue[count][depth][1]=y-2;
        depth++;flagchange=1;
//        printf("go 6\n");
    }
    if (map[x-1][y-2]==0&&x-1>=0&&y-2>=0){
        map[x-1][y-2]=count+1;
        queue[count][depth][0]=x-1;
        queue[count][depth][1]=y-2;
        depth++;flagchange=1;
//        printf("go 7\n");
    }
    if (map[x-2][y-1]==0&&x-2>=0&&y-1>=0){
        map[x-2][y-1]=count+1;
        queue[count][depth][0]=x-2;
        queue[count][depth][1]=y-1;
        depth++;flagchange=1;
//        printf("go 8\n");
    }
}

void search(){
    long long i,n=depth;
    depth=0;flagchange=0;
    for (i=0; i<n; i++) {
        if (count>=1) {
            bfs(queue[count-1][i][0], queue[count-1][i][1]);
//            printf("time:%lld,find %d,%d\n",count,queue[count-1][i][0],queue[count-1][i][1]);
        }
        else{
            bfs(queue[count][i][0], queue[count][i][1]);
//            printf("time:%lld,find %d,%d\n",count,queue[count][i][0],queue[count][i][1]);
        }
    }
    
}

int main() {
    long long start[2],i,j;
    scanf("%lld %lld %lld %lld",&n,&m,&start[0],&start[1]);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            map[i][j]=0;
        }
    }
    map[start[0]-1][start[1]-1]=-5;
    queue[0][0][0]=start[0]-1;
    queue[0][0][1]=start[1]-1;
    depth=1;
    while (1) {
        search();
        count++;
        if (flagchange==0) {
            break;
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (map[i][j]==0) {
                map[i][j]=-1;
            }
        }
    }
    map[start[0]-1][start[1]-1]=0;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("%lld",map[i][j]);
            if (map[i][j]==-1) {
                printf("   ");
            }
            else if (map[i][j]<10) {
                printf("    ");
            }
            else if (map[i][j]<100){
                printf("   ");
            }
            else if (map[i][j]<1000){
                printf("  ");
            }
            else if (map[i][j]<10000){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


