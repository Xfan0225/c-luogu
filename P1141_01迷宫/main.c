//
//  main.c
//  P1141_01迷宫
//
//  Created by 谢 on 2020/2/10.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

long map[1005][1005],ans[1005][1005],place[1000*1000][2],count[1000][1000];
long step=0;
long n;

void bfs(long,long);

int main() {
    long m,i,j,x,y,k;
    char inp[1005][1005];
    int findans[100001][2];
    scanf("%ld%ld",&n,&m);
    for (i=0; i<n; i++) {
        scanf("%s",&inp[i]);
        for (j=0; j<n; j++) {
            if (inp[i][j]=='1') {
                map[i][j]=1;
            }
            else if (inp[i][j]=='0'){
                map[i][j]=0;
            }
        }
    }
    for (i=0; i<m; i++) {
        scanf("%d%d",&findans[i][0],&findans[i][1]);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (count[i][j]!=-1) {
                bfs(i, j);
                for (k=0; k<step; k++) {
                    ans[place[k][0]][place[k][1]]=step;
                }

            }
            step=0;
        }
    }
    for (i=0; i<m; i++) {
        printf("%ld\n",ans[findans[i][0]-1][findans[i][1]-1]);
    }
    return 0;
}

void bfs(long x,long y){
    int searchcount=0,searchflag=0,searchplace[4],i;
    for (i=0; i<4; i++) {
        searchplace[i]=0;
    }
    if (count[x][y]==-1) {
        return;
    }
    else{
        step++;
        place[step-1][0]=x;
        place[step-1][1]=y;
//        printf("find(%ld,%ld).step is %ld\n",x,y,step);
        if (map[x][y]+map[x][y+1]==1&&y<n-1) {
            searchplace[0]=1;
            searchflag=1;
        }
        if (map[x][y]+map[x][y-1]==1&&y>0) {
            searchplace[1]=1;
            searchflag=1;
        }
        if (map[x][y]+map[x-1][y]==1&&x>0) {
            searchplace[2]=1;
            searchflag=1;
        }
        if (map[x][y]+map[x+1][y]==1&&x<n-1) {
            searchplace[3]=1;
            searchflag=1;
        }
        count[x][y]=-1;
        if (searchflag==1){
            if (searchplace[0]==1) {
                if (y+1<n) {
                    bfs(x, y+1);
                }
            }
            if (searchplace[1]==1) {
                if (y>0) {
                    bfs(x, y-1);
                }
            }
            if (searchplace[2]==1) {
                if (x>0) {
                    bfs(x-1, y);
                }
            }
            if (searchplace[3]==1) {
                if (x+1<n) {
                    bfs(x+1, y);
                }
            }
        }
    }
}
