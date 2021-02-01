/*  // //  
   // //        
   \\//       
    \>>      
    //\\    
   //  \\
Author: Shadab Eqbal 
Created on: "01-02-2021" 
Name: Java 1-d and 2-d Array
Link: https://practice.geeksforgeeks.org/problems/java-1-d-and-2-d-array2952/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays
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

vi foo(vvi &vec){
    vi ans;
    int sum=0,m=INT_MIN;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[0].size();j++){
            if(i==j){
                sum+=vec[i][j];
                m=max(m,vec[i][j]);
            }
        }
    }
    ans.pb(sum);
    ans.pb(m);

    return ans;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vvi vec={{1,2,3},{4,5,6},{7,8,9}};
    vi ans=foo(vec);
    for(auto i:ans)
        cout<<i<<" ";
    
    return 0;
}