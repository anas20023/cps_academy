////////////////              ANAS IBN BELAL            /////////////////
//                          Template   Code                           ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          INTAKE 52                                 ||
//                      DEPARTMENT OF CSE                             ||
//                                                                    ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    Fast_io();
    vector<int>v;
    for (int i = 1; i < 2e5; i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            v.push_back(i);
        }
    }
    
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;cin>>n;
        cout<<v[n-1]<<endl;
    }
    return 0;
}
