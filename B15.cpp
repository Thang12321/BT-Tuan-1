#include <iostream>
#include <cmath>
using namespace std;
main()
{
    string s1="a",s2="b";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s=s2;
        s2=s2+s1;
        s1=s;
    }
    cout<<s1;
}
