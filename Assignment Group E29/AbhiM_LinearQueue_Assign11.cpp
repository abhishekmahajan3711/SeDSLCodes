// Queues are frequently used in computer programming, and a typical example is the 
// creation of a job queue by an operating system. If the operating system does not use 
// priorities, then the jobs are processed in the order they enter the system. Write C++ 
// program for simulating job queue. Write functions to add job and delete job from queue.

//linear queue
#include<iostream>
using namespace std;


int jobs[50],s=50,front=-1, rear=-1;

 int isFull()
 {
    if(rear==s-1)
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
 void insert()
 {
    int a;
    int d=isFull();
   if (d==1)
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
    jobs[rear]=a;
   }
   cout<<"\nJob added successfully ";
 }
 
 void delete_job()
 {
    int f=isEmpty();
    if(f==1)
     cout<<"\nQueue is empty !!!";
    else
    {
        int b;
        b=jobs[front];
        front++;
        cout<<"\nDeleted element is :"<<b;
    }
 }
 

 /*void display()
 {
   for(int i=front;i<=rear;i++)
   {
      cout<<jobs[i]<<endl;
   }
 }*/
 
 int main()
 {
    int c;
    char g;
    do
    {
        cout<<"\n\t\tMENU";
        cout<<"\n\tEnter 1 : For adding job ";
        cout<<"\n\tEnter 2 : For deleting job";
        cout<<"\nEneter your choice : ";
        cin>>c;
        switch(c)
        {
            case 1:
             insert();
             break;

             case 2:
             delete_job();
             break;

             default:
            cout<<"\nInvalid choice";
            break;
        }
      //  display();
        cout<<"\n\tDo you want to continue ?(y/n)";
        cin>>g;
    } while (g=='y');

    return 0;
    
 }
