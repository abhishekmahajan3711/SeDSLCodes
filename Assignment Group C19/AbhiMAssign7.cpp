// Department of Computer Engineering has student's club named 'Pinnacle Club'. Students 
// of second, third and final year of department can be granted membership on request. 
// Similarly one may cancel the membership of club. First node is reserved for president of 
// club and last node is reserved for secretary of club. Write C++ program to maintain club 
// member‘s information using singly linked list. Store student PRN and Name. Write 
// functions to:
// a) Add and delete the members as well as president or even secretary.
// b) Compute total number of members of club
// c) Display members
// d) Two linked lists exists for two divisions. Concatenate two lists.


//LInked list assignment
#include<iostream>
using namespace std;
class node
{
    public:
     string name;
     int prn;
     node *next;
};
class A
{
   public:
    node *head=NULL;
     void add_reserved(string n,int p)
     {
        node *New;
        New=new node;
        New->name=n;
        New->prn=p;
        New->next=NULL;
        if(head==NULL)
        {
          head=New;
        }
        else{
        node *temp=head;
        while(temp->next!=NULL)
        {
         temp=temp->next;
        }
        temp->next=New;
        }

     }

     void add_member()
     {
       // int key;
        node *New;
        New=new node;
        cout<<"Enter your name : \n";
        cin>>New->name;
        cout<<"Enter your prn : \n";
        cin>>New->prn;
        if(head==NULL)
        {
         head=New;
        }
        node *temp=head;
        while(temp->next->next!=NULL)
        {
         temp=temp->next;
        }
        New->next=temp->next;
        temp->next=New;

        cout<<"Member added successfully\n";
        
     }

     void display()
     {
      node *d;
      d=head;
      if(d==NULL)
      {
         cout<<"List is empty";
      }
      while(d!=NULL)
      {
         cout<<d->name<<endl;
         cout<<d->prn<<endl;
         d=d->next;
      }
     }

     void del_member()
     {
      string n;
      cout<<"Enter the name of person : ";
      cin>>n;
      node *s;
      node *p;
      s=head;
      while(s->name!=n)
      {
         p=s;
         s=s->next;
      }
      p->next=s->next;
      delete(s);
      cout<<"Deleted member successfully\n";
     }
     void del_reserved(string n)
     {
      node *b;
      node *c;
      b=head;
      if(b->name==n)
      {
         head=b->next;
         delete(b);
         cout<<"President deleted successfully\n";
      }
      else{
         while(b->next!=NULL)
         {
            c=b;
            b=b->next;
         }
         c->next=NULL;
         delete(b);
         cout<<"Secretary deleted successfully\n";
      }
     }

     void total()
     {
      int c=1;
      node *t=head;
      while(t->next!=NULL)
      {
         t=t->next;
         c++;
      }
      cout<<"Total number of members are : "<<c;
     }
};
void concat(A a,A b)
{
   node* start=a.head;
   while(start->next!=NULL)
   {
      start=start->next;
   }
   start->next=b.head;
   
}

int main()
{
    
   A a;
   A b;
   a.add_reserved("President_A",1);
   a.add_reserved("Secretary_A",10);
   b.add_reserved("President_B",1);
   b.add_reserved("Secretary_B",10);
   int ch;

   while (true)
   {
   cout<<"\t\tMain Menu";
   cout<<"\nEnter 1 : To add and delete the members as well as president or even secretary";
   cout<<"\nEnter 2 : Compute total number of members of club";
   cout<<"\nEnter 3 : Display members";
   cout<<"\nEnter 4 : Concatenate two lists";
   cout<<"\n";
   cout<<"\nEnter your choice : ";
   cin>>ch;
   switch(ch)
   {
      case 1:
      {
       cout<<"\tSub-Menu";
       cout<<"\n\tEnter 1 : To add new member ";
       cout<<"\n\tEnter 2 : To delete existing member";
       cout<<"\n\tEnter 3 : To delete president ";
       cout<<"\n\tEnter 4 : To delete secretary ";
       int h;
       cout<<"\nEnter your choice : ";
       cin>>h;
       switch(h)
       {
         case 1:
          a.add_member();
          break;
         case 2 :
          a.del_member();
          break;
         case 3:
          a.del_reserved("President_A");
          break;
         case 4:
          a.del_reserved("Secretary_A");
          break;
       }
       break;
      }
      case 2:
       a.total();
       break;
      case 3:
       a.display();
       break;
      case 4:
       {
       cout<<"\n\tA division list\n";
       a.display();
       cout<<"\n\tB division list\n";
       b.display();
       cout<<"\n\tConcanecated list\n";
       concat(a,b);
       a.display();
       }
       break;
       default :
        cout<<"Invalid choice!!";
   }
   }

 return 0;
}
