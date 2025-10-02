#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;
    Q='=';
    if(S=='+')
    {
        if((A+B)==C)
        cout<<"Yes"<<endl;
        else
            cout<<A+B<<endl;
    }
    else if(S=='-')
    {
        if((A-B)==C)
        cout<<"Yes"<<endl;
        else
            cout<<A-B<<endl;
    }
    else if(S=='*')
    {
        if((A*B)==C)
        cout<<"Yes"<<endl;
        else
            cout<<A*B<<endl;
    }
    return 0;
}
