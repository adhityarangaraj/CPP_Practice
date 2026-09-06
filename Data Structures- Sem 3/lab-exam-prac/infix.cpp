#include <iostream>
using namespace std;

class Stack
{
    char arr[100];
    int top;

    public:
    Stack()
    {
        top=-1;
    }

    void push(char c)
    {
        if(top==99)
        {
            cout<<"Stack full\n";
            return;
        }

        top++;
        arr[top]=c;
    }

    char pop()
    {
        if(isEmpty())
        {
            return '\0';
        }

        char c=arr[top];
        top--;
        return c;
    }

    char peep()
    {
        if(!isEmpty())
            return arr[top];
        else
            return '\0';
    }

    bool isEmpty()
    {
        return top==-1;
    }
};

int precedence(char c)
{
    if(c=='+'|| c=='-')
        return 1;

    else if(c=='*'|| c=='/')
        return 2;
    
    else if(c=='^')
        return 3;

    return 0;
}

string convert(string infix)
{
    string post="";
    Stack s;

    for(int i=0;i<infix.length();i++)
    {
        char c=infix[i];

        if(isalnum(c))
        {
            post+=c;
        }

        else if(c=='(')
        {
            s.push(c);
        }

        else if(c==')')
        {
            while(!s.isEmpty() && s.peep()!='(' )
            {
                post+=s.pop();
            }
            s.pop();
        }

        else
        {
            while(!s.isEmpty() && (precedence(c)<=precedence(s.peep())))
            {
                post+=s.pop();
            }

            s.push(c);
        }
    }

    while(!s.isEmpty())
    {
        post+=s.pop();
    }

    return post;
}

int main()
{
    string infix;
    cout<<"ENTER INFIX:";
    getline(cin,infix);
    
    cout<<"Postfix is :"<<convert(infix)<<endl;
    return 0;
}