//
//  Noi1002.c
//  
//
//  Created by Jinsong Bian on 8/19/17.
//
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c,p,s;
    scanf("%f %f %f",&a,&b,&c);
    p=(a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%0.4f",s);
    
    
    return 0;
}
