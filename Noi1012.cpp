#include <cstdio>
#include <cmath>

int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=fmod(a,123);
	c=fmod(a,91);
	if(b>=97&&b<=122)
	{
		printf("%c",b);
		return 0;
	}
	if(c>=63&&c<=90)
	{
		printf("%c",c);
		return 0;
	}
	printf("*");
}
