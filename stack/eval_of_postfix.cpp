#include<iostream>
#include<stack>
using namespace std;
static int i=0;
void eval(string s);
char nextchar(string s);
int main()
{
    string s;
    cout<<"enter expression"<<endl;
    cin>>s;
    eval(s);
}
void eval(string s)
{
    int cnt=0;
    stack <int> st;
    for(char x=nextchar(s);x!='#';x=nextchar(s))
    {
        if(isdigit(x))
        {
            st.push(x);
            cout<<st.top();
            cnt++;
        }
        else
        {
            int a=st.top();
            st.pop();cnt--;
            int b=st.top();
            st.pop();cnt--;
            if(x=='+')
            {
                st.push(a+b);
                cnt++;
            }
            if(x=='-')
            {
                st.push(a-b);
                cnt++;
            }
            if(x=='*')
            {
                st.push(a*b);
                cnt++;
            }
            if(x=='/')
            {
                st.push(a/b);
                cnt++;
            }
        }
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<st.top()<<endl;
        st.pop();
    }

}
char nextchar(string s)
{
    char c;
  c=(s.at(i));
  i++;

   return c;
}

