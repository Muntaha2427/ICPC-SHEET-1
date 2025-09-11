#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long X,Y;
    cin>>X>>Y;
    if(1<=X && Y<=10*10*10*10*10)
    {
        cout<<X<<" + "<<Y<<" = "<<X+Y<<endl;
        cout<<X<<" * "<<Y<<" = "<<X*Y<<endl;
        cout<<X<<" - "<<Y<<" = "<<X-Y;
    }
}
