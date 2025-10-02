#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B,C,D,s1,s2,s3,s4,s;
    cin>>A>>B>>C>>D;
    s1=A%100;
    s2=B%100;
    s3=C%100;
    s4=D%100;
    s=(s1*s2*s3*s4)%100;
    if(s<10)
    {
        cout<<0<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}
