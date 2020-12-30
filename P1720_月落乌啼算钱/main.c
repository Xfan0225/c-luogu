//
//  main.c
//  P1720_月落乌啼算钱
//
//  Created by 谢 on 2019/9/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double fn;
    scanf("%d",&n);
    fn = (pow((1+sqrt(5))/2, n)-pow((1-sqrt(5))/2, n))/sqrt(5);
    printf("%.2lf\n",fn);
    return 0;
}

