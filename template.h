
#ifndef TEMPLATE_H
#define TEMPLATE_H
template <class T>
class queue
{
public:
	T* array;
	int capcity = 15;
	int front;
	int rear;
	int count;

	queue(int size = 15);
	void pop();
	void push(T);
	T peek();
	int size();
	bool isEmpty();
	bool isFull();
};
#endif