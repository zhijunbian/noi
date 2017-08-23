#include <cstdio>
using namespace std;


int main ()
{
	float a;
	scanf("%f",&a);
	if (a<=10)
	{
		a=a*0.8+0.2;
		printf("%0.2f",a);
		return 0;
	}
	if (a>10 && a<=20)
	{
		a=(a-10)*0.75+0.2+8;
		printf("%0.2f",a);
		return 0;
	}
	if (a>20 && a<=30)
	{
		a=(a-20)*0.7+0.2+8+7.5;
		printf("%0.2f",a);
		return 0;
	}
	printf("Fail");
	return 0;
			
}
