// The ticket booking system of Cinemax theater has to be implemented using C++ program. 
// There are 10 rows and 7 seats in each row. Doubly circular linked list has to be 
// maintained to keep track of free seats at rows. Assume some random booking to start 
// with. Use array to store pointers (Head pointer) to each row. On demand
// a) The list of available seats is to be displayed
// b) The seats are to be booked
// c) The booking can be cancelled.


#include<iostream>
using namespace std;

   class node
  {
   public:
   
   string status;
   int seat;
   string name;
   int id;
   node* next;
   node*prev;
   };
   
  class A
  { 
  
  public:
   node* head;
   int seat_n;
 
   
  void create()
  {
    head=new node;
    head->status="Booked";
    head->seat=0;
    head->name="No name";
    node *second_head;
    second_head=new node;
    second_head->status="Booked";
    second_head->seat=1;
    second_head->name="Abhishek";
    head->next=second_head;
    head->prev=second_head;
    second_head->next=head;
    second_head->prev=head;
    node *p;
    node *n;
    
 for(int i=2;i<=70;i++)
    {
      n=head;
     node *New;
     New=new node;
     New->status="Unbooked";
     New->name="No name";
     New->seat=i;
     while(n->next!=head)
     {
       n=n->next;
     }
     head->prev=New;
     New->next=head;
     New->prev=n;
     n->next=New;
    }
}
void display()
{

  node *t=head;
  cout<<endl;
  if(t==NULL)
  {
    cout<<"List is empty";
  }
  else
  {
    while(t->next!=head)
   {
     if((t->status=="Booked") || ((t->seat>=0) && (t->seat<=9)))
     {

        if(t->seat>=0 && t->seat<=9)
        {
          cout<<t->seat<<"  ";
        }
        else
        {
          cout<<t->seat<<" ";
        }
        if(t->status=="Booked")
        {
           cout<<t->status<<"     ";
        }
        else
        {
          cout<<t->status<<"   ";
        }
     }
     else
     {
      cout<<t->seat<<" ";
      cout<<t->status<<"   ";
     }
   if((((t->seat)+1)%7)==0)
   {
    cout<<endl;

   }
   t=t->next;
   }
  }
  
}

void seat_to_be_booked()
{

 while(true)
 {
  cout<<"\nEnter seat number : ";
  cin>>seat_n;
  if((seat_n<0) || (seat_n>69))
  {
    cout<<"\nINVALID Seat Number. Please Seat Number between 0 and 69. ";
  }
  else 
  {
    node *r=head;
    while((r->seat!=seat_n) && (r->next!=head))
    {
      r=r->next;
    }
    if(r->status=="Booked")
   {
      cout<<"\nThe Seat you are looking for is already booked ";
   }
   else
   {
      cout<<"\nEnter your id : ";
      cin>>r->id;
      cout<<"\nEnter your name :";
      cin>>r->name;
      r->status="Booked";
      cout<<"\nCongratulations your seat is booked !!!";
      break;
  
   }
  }
  }
}

void cancel_booking()
{
  while(true)
  {
    cout<<"\nEnter seat number which you wanna cancel : ";
    cin>>seat_n;
    if ((seat_n<0) || (seat_n>69))
    {
      cout<<"\nINVALID Seat Number!! Please enter valid seat number ";
    }
    else
    {
      node *i=head;
      while(i->seat!=seat_n)
      {
        i=i->next;
      }
      if(i->status=="Unbooked")
      {
        cout<<"\nThis seat is already unbooked. Please enter seat number whose booking is to be cancelled ";
      }
      else
      {
        i->status="Unbooked";
        cout<<"\nBooking is CANCELLED !!! ";
        break;
      }
    }
  }
}

};
int main()
{ 
 string g;
 A a;
 a.create();
 do
 {

   cout<<endl;
   cout<<"*******************************  MAINU  **************************";
   cout<<"\n\tEnter 1 : To see available and Unavailable Seats";
   cout<<"\n\tEnter 2 : To book your seat ";
   cout<<"\n\tEnter 3 : To cancel your booking ";
   int c;
   cout<<"\nEnter your choice : ";
   cin>>c;
   switch(c)
   {
    case 1:
     a.display();
     break;
    case 2:
     //a.display();
    // cout<<"\n\tCHECK STATUS OF SEATS FROM ABOVE\n ";
     a.seat_to_be_booked();
     break;
    case 3:
    // a.display();
    // cout<<"\n\tCHECK STATUS OF SEATS FROM ABOVE\n ";
     a.cancel_booking();
     break;
    default:
     cout<<"Invalid choice";
     break;
 }
 cout<<"\nDo you want to continue ?(y/n) : ";
 cin>>g;
 }while(g=="y");
 
 return 0;
 }
