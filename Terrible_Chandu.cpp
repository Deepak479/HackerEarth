#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
