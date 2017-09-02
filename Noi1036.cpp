#include <cstdio>

int main()
{
	int s,y;
	scanf("%d",&s);
	do
	{
		y=s%2;
		s=s/2;
		printf("shang:%d yu:%d\n",s,y);
	}while(s);
		
}
