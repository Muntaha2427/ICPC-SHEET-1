#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B;
    char S;
    cin>>A>>S>>B;
    if(A>B && S=='>')
        cout<<"Right"<<endl;
    else if(A<B && S=='<')
        cout<<"Right"<<endl;
    else if(A==B && S=='=')
        cout<<"Right"<<endl;
    else
        cout<<"Wrong"<<endl;
    return 0;
}
