//
//  Noi1005.c
//  
//
//  Created by Jinsong Bian on 8/20/17.
//
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    double r,x,p,y;
    scanf("%lf %lf %lf",&r,&x,&p);
    y = pow(((100+r)/100),p)*x;
    printf("%0.2lf",y);
    return 0;
}
