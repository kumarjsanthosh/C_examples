//
//  main.c
//  strong numbers
//
//  Created by SANTHOSH KUMAR on 14/10/19.
//  Copyright © 2019 Kumar Santhosh. All rights reserved.
//

#include <stdio.h>

 main(){
    int n,res;
    printf("Enter N value: \n" );
    scanf("%d", &n);
   res =fact(n);
    printf("result %d \n", res);
}
int fact(int n)
{
    int res;
    if(n==0)
        res=1;
        else
            res=n*fact(n-1);
            return res;
}

    

