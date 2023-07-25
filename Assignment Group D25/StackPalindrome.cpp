// A palindrome is a string of character that‘s the same forward and backward. Typically, 
// punctuation, capitalization, and spaces are ignored. For example, “Poor Dan is in a 
// droop” is a palindrome, as can be seen by examining the characters “poor danisina 
// droop” and observing that they are the same forward and backward. One way to check 
// for a palindrome is to reverse the characters in the string and then compare with them 
// the original-in a palindrome, the sequence will be identical. Write C++ program with 
// functions
//a) To print original string followed by reversed string using stack
// b) To check whether given string is palindrome or not


#include<iostream>
using namespace std;
class A
{        
   public:
    char stack[100];
    int top1=-1;
    char reverse[100];
    int top2=-1;

  void push1(char a)
  {
    top1++;
    stack[top1]=a;
  }

  void push2(char a)
  {
    top2++;
    reverse[top2]=a;
  }

  char pop1()
  {
    char c1=stack[top1];
    top1--;
    return c1;
  }

  char pop2()
  {
    char c2=reverse[top2];
    top2--;
    return c2;
  }

  void accept()
  {
    string s;
    cout<<"\nEnter the string : ";
    getline(cin,s);
    int n=s.length();

    for(int i=0;i<n;i++)
    {
        if((s[i]==' ') || (s[i]==',')|| (s[i]=='!') || (s[i]=='.')|| (s[i]=='?'))
          continue;
        else{
            if(s[i]>=65 && s[i]<=90)
              s[i]=s[i]+32;

            push1(s[i]);
        }
    }

  }


void reverse_stack()
{
   for(int i=top1;i>=0;i--)
   {
    push2(stack[i]);
   }
}

void display_original()
{   
    for(int i=0;i<=top1;i++)
    {
        cout<<stack[i];
        cout<<" ";
    }
}

void display_reverse()
{
    cout<<endl;
    for(int i=0;i<=top2;i++)
    {
        cout<<reverse[i];
        cout<<" ";
    }
}

void check()
{
    char a, b;
    if(top1!=-1)
    {
       a=pop1();
       b=pop2();
       if(a==b)
         check();
       else{
        cout<<"\nNOT PALINDROME";
       }

    }
    else{
        cout<<"\nIT IS A PALINDROME";
    }
}

};

int main()
{
    A a;
    a.accept();
    a.display_original();
    a.reverse_stack();
    a.display_reverse();
    a.check();
    return 0;
}