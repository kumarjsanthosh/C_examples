//
//  main.c
//  Array
//
//  Created by SANTHOSH KUMAR on 14/10/19.
//  Copyright © 2019 Kumar Santhosh. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[10],i,large;
    printf("Enter the 10 number of elements");
    for(i=0;i<10;i++)
        
    scanf("%d",&a[i]);
    large=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
                    }
    }
}
