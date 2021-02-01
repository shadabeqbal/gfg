#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {2,3,4,5,7};
    int key = 2,flag = 0;
    int sz = v.size();
    int i = 0;
    while(i<sz){
        int mid = (sz+i)/2 +1;
        if(key == v[mid]){
            cout<<mid;
            flag = 1;
            break;
        }
        else if(key > v[mid]){
            i=mid+1;
        }else{
            sz = mid - 1;
        }
    }
    if(flag == 0)
        cout<<"Not found";
}