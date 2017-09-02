#include <cstdio>

void hn(int n,char a,char b,char c)
{
	if (n==1){ 
		printf("%c -> %c\n",a,c);
		return;
	}
	hn(n-1,a,c,b);
	hn(1,a,b,c);
	hn(n-1,b,a,c);
}

int main()
{
	int n;
	scanf("%d",&n);
	hn(n,'A','B','C');

}
	
