#include<iostream>
using namespace std;
class queue
{
    int *arr,maxsize,front,rear;
public:
    queue(int n)
    {
        maxsize=n;
        arr=new int[maxsize];
        front=-1;
        rear=-1;
    }
    void enqueue(int value)
    {
        if(rear==maxsize-1)
        {
            cout<<"ERROR:: Overflow"<<endl;
            return;
        }
        if(front==-1)
        {
            front++;rear++;
        }
        else rear++;
        arr[rear]=value;
        cout<<"Number "<<value<<" enqueued successfully "<<endl;
    }
    void dequeue()
    {
        if(front==-1||front>rear)
        {
            cout<<"UNDERFLOW::Queue is empty"<<endl;
            return;
        }
        front++;
        cout<<"Dequeued successfully"<<endl;

    }
    void peek()
    {
        if(front==-1||front>rear)
        {
            cout<<"UNDERFLOW::Queue is empty"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }
    void isEmpty()
    {
        if(front==-1||front>rear)
            cout<<"TRUE:: Queue is Empty "<<endl;
        else
            cout<<"False:: Queue is not Empty "<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter Max size of queue : ";
    cin>>n;

    queue q(n);
    while(true)
    {
        cout<<"CHOOSE THE OPERATION:- "<<endl;
        cout<<"\t 1: Enqueue \n\t 2: Dequeue \n\t 3: Peek \n\t 4: isEmpty \n\t 0: Exit \n\t";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter number : "; cin>>n; q.enqueue(n); break;
            case 2: q.dequeue(); break;
            case 3: q.peek(); break;
            case 4: q.isEmpty();break;
            case 0: return 0;break;
            default : cout<<"Invalid Input"<<endl;
        }
        cout<<endl;
    }
}
