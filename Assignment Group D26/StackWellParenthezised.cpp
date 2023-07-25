// In any language program mostly syntax error occurs due to unbalancing delimiter such as 
// (),{},[]. Write C++ program using stack to check whether given expression is well 
// parenthesized or not.


#include<iostream>
using namespace std;
class A
{
    public:
     char stack[100];
     int top=-1;

     void push(char a)
     {
        top++;
        stack[top]=a;
     }

     char pop()
     {   
        char b=stack[top];
        top--;
        return b;
     }

     void accept()
     {
        string s;
        cout<<"Enter expression : ";
        getline(cin,s);
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if((s[i]=='(') || (s[i]==')')|| (s[i]=='[')|| (s[i]==']')|| (s[i]=='{')|| (s[i]=='}'))
            {
               push(s[i]);
            }
        }
     }

     void check()
     {  
          char g;
          int x=0,y=0,z=0;
       do{
        g=pop();
        switch(g)
        {
          case '(':
            x+=1;
           
            break;

          case ')':
            x-=1;
            break;

           case '[':
            y+=1;
            break;

            case ']':
            y-=1;
            break;

           case '{':
            z+=1;
            break;

           case '}':
            z-=1;
            break;
           
       
        }
      
       }while(top!=-1);
        
       if(x==0 && y==0 && z==0)
       {
        cout<<"Expression is well parenthesized";
       }
       else{
        cout<<"Expression is not well parenthesized";
       }
     }
   


};

int main()
{
    A a;
    a.accept();
    a.check();
    return 0;
}