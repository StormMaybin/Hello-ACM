﻿/**
*@author:StormMaybin
*@Date:2016-05-06
*@Filename:HDOJ1229.c 
*/
# include <stdio.h>

int main (void)
{
	int a,b,k;
    while(scanf("%d %d %d",&a, &b, &k) != EOF && a && b)
    {
        int m=1;
        while(k--)
            m*=10;
        if(a%m==b%m)
            printf("-1\n");
        else
            printf("%d\n",a+b);
    }
	return 0;
}
