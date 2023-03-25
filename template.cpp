#include"template.h"
#include<iostream>
using namespace std;
template <class T>

queue <T> ::queue(int size)
{
	array = new T[size];
	capcity = size;
	front = 0;
	rear = -1;
	count = 0;
}
template <class T>
void queue::pop()
{
	if (isEmpty())
	{
		cout << "The Queue is Empty" << endl;
	}
	else
	{
		front = (front + 1) % capcity;
		count--;
	}
}
template <class T> ::push(T item)
{
	void queue <T> ::push(T item)
	{
		if (isFull())
		{
			cout << "The stack is full" << endl;
		}
		else
		{
			rear = (rear + 1) % capcity;
			arr[rear] = item;
			count++;
		}
	}
	template <class T>
	{
		T queue <T> ::peek()
			if (isEmpty())
			{
				cout << " ERROR!!!!! QUEUE IS UNDERFLOW" << endl;
			}
			else
			{
				return arr[front];
			}
	}
	template <class T>
	{
		int queue<T> ::size()
		{
			return count;
		}
	}
	template <class T>
	bool queue <T> ::isEmpty()
	{
		return (size() == 0);
	}
	template <class T>
	{
		bool queue<T> ::isFull()
		{
			return (size() == capcity);
		}
	}
