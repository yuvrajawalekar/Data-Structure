#ifndef LL_H
#define LL_H

#include<iostream>
#include"Node.h"
using namespace std;

template <class T>
class LL
{
private:
	Node<T> *head, *tail;
	int count;
public:
	LL<T>();
	//~LL<T>();
	//int size() const;
	bool isEmpty();
	bool addAtBegin(T ele);
	//bool addAtEnd(T ele);
	void Display();
	//T deleteFromBegin();
	//T deleteFromEnd();
	//bool insertAt(int pos,T ele);
	//bool reverse();
	Node<T>* getHead();
	
	template<class a>
	friend ostream& operator<<(ostream& os, LL<a> ll);
};

template<class T>
ostream& operator<<(ostream& os, LL<T> ll)
{
	Node<T> *t = ll.head;
	while(t != nullptr)
	{
		cout<<t->getData()<<"-->";
		t = t->getNext();
	}
	return os;
	// return os <<"operator overloaded";
}

#endif
