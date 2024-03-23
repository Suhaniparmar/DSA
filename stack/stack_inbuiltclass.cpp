#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.pop();
     if(st.empty())
    {
        cout<<"empty stack"<<endl;
    }

    for(int i=0;i<5;i++)
    {
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}

