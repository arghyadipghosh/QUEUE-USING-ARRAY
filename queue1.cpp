#include<iostream>
using namespace std;
int arr[10], n=10, front = -1, rear = -1;
void insert()
{
	int val;
	if(rear==n-1)
	{
		cout<<"Queue Overflow"<<endl;
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		cout<<"insert the element in the queue:"<<endl;
		cin>>val;
		rear++;
		arr[rear]=val;
	}
}
void Delete()
{
	if(front ==-1 || front>rear)
	{
		cout<<"Queue Overflow";
		return;
	}
	else
	{
		cout<<"element deleted from queue is:"<<arr[front]<<endl;
		front++;
	}

}
void display()
{
	if(front == -1)
	{
		cout<<"Queue is empty";
	}
	else
	{
		cout<<"the queue elements are:";
		for(int i=front; i<=rear; i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}
int main()
{
	int ch;
	cout<<"1. Insert element to the queue \n 2. Delete element from queue \n 3. Display all the elements of the queue \n 4. Exit"<<endl;
	do
	{
		cout<<"\n enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					insert();
					break;
				}
				case 2:
					{
						Delete();
						break;
					}
					case 3:
						{
							display();
							break;
						}
						case 4:
							{
								cout<<"Exit"<<endl;
								break;
							}
							default:
								{
									cout<<"out of choices:";
								}
		}
	}
	while(ch!=4);
	return 0;
}

