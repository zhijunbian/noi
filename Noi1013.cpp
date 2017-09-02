#include <cstdio>
#include <cmath>

void swap(int * a, int * b)
{
	int t= *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b) swap(&a,&b);
	if (b>c) swap(&b,&c);
	if (a>b) swap(&a,&b);
	


	if (a+b<=c||b+c<=a||a+c<=b)
	{
		printf("NO");
		return 0;
	}
	else
		if (a==b&&b==c)
			printf("Equilateral");
		else
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
				printf("Right");
			else
				printf("General");
	return 0;
			
}
