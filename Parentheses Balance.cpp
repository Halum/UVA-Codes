#include<stdio.h>
#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    char str[150], ch='l';
    int i, j, t, len, chk;
    stack<char> stk;
    scanf("%d%c",&t,&ch);
    for(i=1; i<=t; i++)
    {
        gets(str);
        len = strlen(str);
        if(!len) cout<<"Yes\n";
        else
        {
            chk=0;
            for(j=0; j<len; j++)
            {
                if(str[j]=='(' || str[j]=='[')  stk.push(str[j]);
                else if(str[j]==')')
                {
                    if(stk.empty()){chk =1; break;}
                    ch = stk.top();
                    stk.pop();
                    if(ch!='(')
                    {
                        chk=1; break;
                    }
                }
                else if(str[j]==']')
                {
                    if(stk.empty()){chk =1; break;}
                    ch = stk.top();
                    stk.pop();
                    if(ch!='[')
                    {
                        chk=1; break;
                    }
                }
            }
            if(chk || !stk.empty()) cout<<"No\n";
            else cout<<"Yes\n";
            while(!stk.empty()) stk.pop();
        }
    }
    return 0;
}
