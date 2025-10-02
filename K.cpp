#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B,C;
    cin>>A>>B>>C;
    if(A<=B && A<=C )
        cout<<A<<" ";
    else if(B<=A && B<=C)
        cout<<B<<" ";
    else if(C<=A && C<=B)
        cout<<C<<" ";
    if(A>=B && A>=C )
        cout<<A<<endl;
    else if(B>=A && B>=C)
        cout<<B<<endl;
    else if(C>=A && C>=B)
        cout<<C<<endl;
    return 0;
}
