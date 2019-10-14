//
//  main.c
//  factorial
//
//  Created by SANTHOSH KUMAR on 10/10/19.
//  Copyright © 2019 Kumar Santhosh. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,n,fact;
    printf( "enter n value\n");
    scanf("%d",&n);
fact=1;
           for(i=1;i<=n;i++)
    
           {
        fact=fact*i;
           }
}
