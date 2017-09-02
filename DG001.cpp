#include <cstdio>

int dg(int a)
{
	if (a==1) return 1;
	else return a+dg(a-1);
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",dg(a));	

}


