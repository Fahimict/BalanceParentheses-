#include<bits/stdc++.h>
//#include<cstdio>
//#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a sequence of parentheses: ";
    cin>>str;
    stack<char>s;
    int l=str.size();
    int i;

    for(i=0;i<l;i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
            s.push(str[i]);
        else if(!s.empty()&&str[i]==')'&&s.top()=='(')
            s.pop();
        else if(!s.empty()&&str[i]=='}'&&s.top()=='{')
            s.pop();
        else if(!s.empty()&&str[i]==']'&&s.top()=='[')
            s.pop();
        else
            s.push(str[i]);

    }
    if(s.empty())
            printf("\nBalance parenthesis.\n");
        else
            printf("\nNot balanced!!\n");
    return 0;
}
