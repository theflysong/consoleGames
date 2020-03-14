#include "FlysongMath.h"

template<typename T>Stack<T>::Stack() : head(0)
{
	
}

template<typename T>void Stack<T>::push(T unit)
{
	stack[head++]=unit;
}

template<typename T>void Stack<T>::pop()
{
	head--;
}

template<typename T>T Stack<T>::get()
{
	return stack[head];
}
