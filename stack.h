#include <cstdio>

struct intStack{
	int stack[1001];
	int head;

	intStack(){
	    head=0;
	}

	void push(int i){
		stack[head]=i;
		head++;
	}

	void pop(){
		head--;
	}

	int top(){
		return stack[head-1];
	}

	bool empty(){
		return head<=0;
	}
};

struct charStack{
	char stack[1001];
	int head;

	charStack(){
	    head=0;
	}

	void push(char i){
		stack[head]=i;
		head++;
	}

	void pop(){
		head--;
	}

	char top(){
		return stack[head-1];
	}

	bool empty(){
		return head<=0;
	}
};


