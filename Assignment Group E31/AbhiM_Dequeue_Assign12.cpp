// A double-ended queue (deque) is a linear list in which additions and deletions may be 
// made at either end. Obtain a data representation mapping a deque into a one dimensional array. Write C++ program to simulate deque with functions to add and 
// delete elements from either end of the deque.

#include<iostream>
using namespace std;
class linear_queue
{
   int q[100],size=100,front=-1,rear=-1;
 public:
 int s;
 int isFull()
 {
    if(rear==size-1)
    {
      return 1;
    }
   else
     return 0;
 }
 int isEmpty()
 {
    if((front==-1) || (front>rear))
    {
       return 1;
 }
    else 
     return 0;
 }

 void insert_rear()
 {
    int a;
   s=isFull();
   if (s==1)
     cout<<"\nQueue is full !!!";
   else{
     cout<<"\nEnter element : ";
     cin>>a;
     if(front==-1 && rear==-1)
     {
        front=0;
        rear=0;
     }
     else
      rear++;
    q[rear]=a;
   }
   cout<<"\nJob added successfully ";
 }
 
 void insert_front()
 {
   int a;
   s=isFull();
   if (s==1)
     cout<<"\nQueue is full !!!";
   else{
     cout<<"\nEnter element : ";
     cin>>a;
     if(front==-1 && rear==-1)
     {
        front=0;
        rear=0;
     }
     else
     {
      front--;
     }
    q[front]=a;
   }
   cout<<"\nJob added successfully ";
 }

 void delete_rear()
 {
    s=isEmpty();
    if(s==1)
     cout<<"\nQueue is empty !!!";
    else
    {
        int b;
        b=q[rear];
        rear--;
        cout<<"\nDeleted element is :"<<b;
    }

 }
 void delete_front()
 { 
    s=isEmpty();
    if(s==1)
     cout<<"\nQueue is empty !!!";
    else
    {
        int b;
        b=q[front];
        front++;
        cout<<"\nDeleted element is :"<<b;
    }
 }
 /*void display()
 {
   for(int i=front;i<=rear;i++)
   {
      cout<<q[i]<<endl;
   }
 }*/

 };
 int main()
 {
     linear_queue h;
    int c;
    char g;
    do
    {
        cout<<"\n\t\tMENU";
        cout<<"\n\tEnter 1 : For inserting from front ";
        cout<<"\n\tEnter 2 : For inserting from rear ";
        cout<<"\n\tEnter 3 : For deleting from front ";
        cout<<"\n\tEnter 4 : For deleting from rear ";
        cout<<"\nEneter your choice : ";
        cin>>c;
        switch(c)
        {
            case 1:
             h.insert_front();
             break;

             case 2:
             h.insert_rear();
             break;
              
            case 3:
             h.delete_front();
             break;

            case 4:
             h.delete_rear();
             break;
            default:
            cout<<"\nInvalid choice";
            break;
        }
          //h.display();
         cout<<"\nDo you want to continue ?(y/n)";
        cin>>g;
    } while (g=='y');

    return 0;
    
 }
