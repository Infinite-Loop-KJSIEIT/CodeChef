#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,res=0,sum=0;
    cin>>n;
    vector<ll> a(n, 0);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    set<ll> s;
    s.insert(0);
    for (int i = 0; i < n;i++){
        sum += a[i];
        if(s.find(sum)!=s.end()){
            s.clear();
            s.insert(0);    
            res++;
            sum = a[i];
        }
        s.insert(sum);
    }
    cout << res << endl;
    return 0;
}