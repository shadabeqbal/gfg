#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {2,3,3,3,3,3};
    int key = 3,flag = 0;
    int sz = v.size();
    for(int i=0;i<sz;){
        int mid = (i+sz)/2;
        if(key == v[mid] && (mid == 0 || v[mid-1] != key)){
            cout<<mid;
            flag = 1;
            break;
        }
        else if(key >= v[mid]){
            i=mid+1;
        }else{
            sz = mid - 1;
        }
    }
    if(flag == 0)
        cout<<"Not found";
}