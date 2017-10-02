#include <cstdio>
#include "stack.h"
#include <cstring>

int main()
{
	char a[100];
	scanf("%s",a);
	charStack s1, s2;
	int len = strlen(a);
	for (int i = len-1;i>=0;i--){
	    if (a[i]>='0' && a[i]<='9'){
			s2.push(a[i]);
			continue;
		}
		if (a[i]=='('){
		  while(1){
			if (s1.top()==')'){
				s1.pop();
				break;
			}
			s2.push(s1.top());
			s1.pop();
		  }
		  continue;
		}
		s1.push(a[i]);
	}
	while( !s1.empty()){
	   s2.push(s1.top());
	   s1.pop();
	}
	while (!s2.empty()){
	  printf("%c",s2.top());
	  s2.pop();
	}


}
