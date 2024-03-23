#include<iostream>
#include<stack>
#include<string>
using namespace std;
void postfix(string s);
char nextchar(string s);
int isp(char c);
int icp(char c);
static int i=0;
main()
{
    string s;
    cin>>s;
    postfix(s);
}

void postfix(string s)
{
    stack <char> st;
    char y;

    st.push('#');
    for(char x=nextchar(s); x!='#'; x=nextchar(s))
    {
        if((x>=65 && x<=90)||(x>=97 && x<=122))
            cout<<x;
        else if(x=='(')
            for(y=st.top();y!=')';y=st.top())
            {
                st.pop();
                cout<<y;
            }

        else
        {
            for(y=st.top();isp(y)>=icp(x);y=st.top())
            {
                st.pop();
                cout<<y;
            }

           if(y!='#'){ st.push(y);}
            st.push(x);
        }
    }
    while(!st.empty())
    {
        cout<<' '<<st.top();
        if(st.top()!='#')
        {
            st.pop();
        }

    }

}
char nextchar(string s)
{
    char c;
  c=(s.at(i));
  i++;

   return c;
}
int isp(char c)
{
    if(c=='(')
        return 4;
    if(c=='#')
        return 1;
    if(c=='*'||c=='/'||c=='%')
        return 2;
    if(c=='+'||c=='-')
        return 3;
}
int icp(char c)
{
    if(c=='(')
    return 4;

    if(c=='*'||c=='/'||c=='%')
        return 5;
    if(c=='+'||c=='-')
        return 6;
}


