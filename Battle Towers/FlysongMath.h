#ifndef __FLYSONGMATH__
#define __FLYSONGMATH__

template<typename T> class Stack
{
	private:
		T stack[100000];
		int head;
	public:
		Stack();
		void push(T unit);
		void pop();
		T get();
};

#endif
