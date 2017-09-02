#include <cstdio>

int main()
{
	int a;
	scanf("%d",&a);
	if (a>=90)
		printf("Excellent");
	if (a<90&&a>=80)
		printf("Good");
	if (a<80&&a>=60)
		printf("Pass");
	if (a<60)
		printf("Fail");

}
