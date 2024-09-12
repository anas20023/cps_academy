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
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        int N;cin>>N;
        string tmp;
        for (int i = 0; i < N; i++)
        {
            tmp.push_back('o');
        }
        string ans="Lng";
        ans.insert(1,tmp);
        cout<<ans<<endl;
        
    }
    return 0;
}
