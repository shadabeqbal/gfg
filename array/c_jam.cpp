/*  // //  
   // //        
   \\//       
    \>>      
    //\\    
   //  \\
Author: Shadab Eqbal 
Created on: "27-03-2021" 
Name: 
Link: 
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PI 3.141592653589793238

#define pb push_back
#define mp make_pair
#define ll long long int

#define all(x) x.begin(), x.end()

#define clr(x) memset(&x, 0, sizeof(x))

#define srt(x) sort(all(x))
#define search(x, y) binary_search(all(x), y)

#define fr(x, n) for (ll i = x; i < n; i++)
#define frk(x, n, k) for (ll i = x; i < n; i += k)
#define frit(x) for (auto i = x.begin(); i != x.end(); ++i)

typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vll> vvll;

#include<bits/stdc++.h>
using namespace std;


int foo(vector<int> &vec){
    int idx=-1,cnt=0;
    for(int i=0;i<vec.size();i++){
        int val=vec[i];
        for(int j=i;j<vec.size();j++)
        {
            if(vec[j]<=val){
                val=vec[j];
                idx=j;
                cnt++;
            }
        }
        swap(vec[i],vec[idx]);
        
    }
    
    return cnt;
}
int main()
{
    int t,z=1;
    cin>>t;
    while(z!=t){
        int n,x,ans=0;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);
        }
        ans=foo(vec);
        cout<<"Case #"<<z<<": "<<ans;
        z++;
    }
}