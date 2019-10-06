#include"Node.cpp"
#include"LL.cpp"

int main()
{

int ch,ele;
LL<int> obj,obj2;

LL<LL<int>> parentLL;

obj.addAtBegin(11);
obj.addAtBegin(22);

obj2.addAtBegin(33);
obj2.addAtBegin(44);

parentLL.addAtBegin(obj);
parentLL.addAtBegin(obj2);

parentLL.Display();

/*
do
{
cout<<"\n *********MENU************";
cout<<"\n 1. Add at beginning";
cout<<"\n 2. Add at end";
cout<<"\n 3. Delete from beginning";
cout<<"\n 4. Delete from end";
cout<<"\n 5. Insert at position";
cout<<"\n 6. Reverse List";
cout<<"\n 7. Check for empty";
cout<<"\n 8. Get size";
cout<<"\n 9. Display";
cout<<"\n 10. Add LL into LL";
cout<<"\n 11. Exit";
cout<<"\n Enter your choice:";
cin>>ch;
cin.get();

switch(ch)
{
	case 1:{
		cout<<"\nEnter element:";
		cin>>ele;
		if(!obj.addAtBegin(ele))
		{
			cout<<"\nSomething went wrong!"<<endl;
		}
		else
		{
			cout<<"\nSuccess!Added at Beginning"<<endl;
		}
	}break;
	case 2:{
		cout<<"\nEnter Element: ";
		cin>>ele;
		if(!obj.addAtEnd(ele))
		{
			cout<<"\nError!"<<endl;
		}
		else
		{
			cout<<"\nSuccess!Added at End";
		}
	}break;
	case 3:{
		cout<<"\n"<<obj.deleteFromBegin()<<endl;
	}break;
	case 4:{
		cout<<"\n"<<obj.deleteFromEnd()<<endl;
	}break;
	case 5:{
		int element, position;
		cout<<"\nEnter the element: ";
		cin>>element;
		cout<<"\nEnter the position: ";
		cin>>position;
		if(!obj.insertAt(position, element))
		{
			cout<<"\nSomething went wrong!"<<endl;
		}
		else
		{
			cout<<"\nInserted element:"<<element<<" at position "<<position<<" successfully!"<<endl;
		}
	}break;
	case 6:{
		if(!obj.reverse())
		{
			cout<<"\nSomething went wrong!"<<endl;
		}
		else
		{
			cout<<"\nLinked List Reversed Successfully!";
		}
	}break;
	case 7:{
		if(obj.isEmpty())
		{
			cout<<"\nLinked List is Empty!"<<endl;
		}
		else
		{
			cout<<"\nLinked List is not Empty!"<<endl;
		}
	}break;
	case 8:{
		cout<<"\nSize of Linked List is:"<<obj.size()<<endl;
	}break;
	case 9:{
//		obj.Display();
		parentLL.Display();
	}break;
	case 10:{
		parentLL.addAtBegin(obj);
		//parentLL.addAtBegin(obj.getHead());
	}break;

}
}while(ch!=11);

*/
return 0;
}
