//
//  Noi1004.c
//  
//
//  Created by Jinsong Bian on 8/20/17.
//
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    long n,m,a,t;
    scanf("%ld %ld %ld",&n,&m,&a);
    n = floor(n/a/1.0);
    m = floor(m/a/1.0);
    t = m*n;
    printf("%ld",t);
    return 0;
}
