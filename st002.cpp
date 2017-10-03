#include <cstdio>
#include "stack.h"

int main()
{
	intStack s;
	char a[100];
	scanf("%s",a);
	for (int i=0;a[i]!=0;i++){
		if (a[i]=='+'){
			int b=s.top();
			s.pop();
			int c = s.top();
			s.pop();
			int d = b+c;
			s.push(d);
		}
		else if (a[i]=='-'){
			int b=s.top();
			s.pop();
			int c = s.top();
			s.pop();
			int d = c-b;
			s.push(d);
		}

		else if (a[i]=='*'){
			int b=s.top();
			s.pop();
			int c = s.top();
			s.pop();
			int d = b*c;
			s.push(d);
		}
		else if (a[i]=='/'){
			int b=s.top();
			s.pop();
			int c = s.top();
			s.pop();
			int d = c/b;
			s.push(d);
		}
		else
		s.push(a[i]-'0');
	}
	printf("%d",s.top());
	return 0;





}
