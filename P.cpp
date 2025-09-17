#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    long long divide = a/1000;
    if(divide%2==0)
    {
        cout << "EVEN" <<endl;
    }
    else
    {
        cout << "ODD" <<endl;
    }
    return 0;
}
