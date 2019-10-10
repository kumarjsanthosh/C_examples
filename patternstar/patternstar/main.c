//
//  main.c
//  patternstar
//
//  Created by SANTHOSH KUMAR on 10/10/19.
//  Copyright © 2019 Kumar Santhosh. All rights reserved.
//

#include <stdio.h>

int i,j,k,n,c=80;
main()
{
    printf("Enter n value");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=c/2-i ;j++)
        {
            printf(" ");
        }
        for(k=1 ;k<=2*i-1 ;k++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    
}
