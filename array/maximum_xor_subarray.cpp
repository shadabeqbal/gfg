/*  // //  
   // //        
   \\//       
    \>>      
    //\\    
   //  \\
Author: Shadab Eqbal 
Created on: "14-02-2021" 
Name: Maximum XOR subarray
Link: https://practice.geeksforgeeks.org/problems/a512e4b2e812b6df2159b19cc7090ffc1ab056dd/1/?page=1&query=page1
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

int maxSubarrayXOR(int N, int arr[])
{
    int curr=0;
    for(int i=0;i<N;i++)
        curr^=arr[i];
    
    int mc=curr;
    for (int i = 0; i < N; i++)
    {
        curr^=arr[i];
        mc=max(mc,curr);
    }

    return mc;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=2;
    int arr[n]={4,6};
    int x=maxSubarrayXOR(n,arr);
    cout<<x;
    return 0;
}