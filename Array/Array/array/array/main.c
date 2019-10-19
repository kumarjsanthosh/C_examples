//
//  main.c
//  array
//
//  Created by SANTHOSH KUMAR on 15/10/19.
//  Copyright © 2019 Kumar Santhosh. All rights reserved.
//

#include <stdio.h>
int stringhlenth (char[]);

void main()
{
char arr[30],len,n,str;
printf("enter string");
    scanf("%d",&n);
    gets(str);
    len=stringlength(str);
    printf("length %d\n",len);
}
int stringlength(char x[])
{
    int i=0,count=0;
    while(x[i])!='\0')
    {
        count ++;
        i++;
    }
        return count;
    
}
//inserting of element into an array
