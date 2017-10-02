#include <cstdio>

int main()
{
	int a;
	scanf("%d",&a);
	char week[7][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	printf("%s",week[a-1]);

}
