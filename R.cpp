#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long days;
    cin>>days;
    cout<<days/365<<" years"<<endl;
    cout<<(days%365)/30<<" months"<<endl;
    cout<<(days%365)%30<<" days"<<endl;
    return 0;
}
