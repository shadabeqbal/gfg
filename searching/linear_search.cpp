#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {6,3,1,5,7};
    int key = 7;
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == key){
            cout<<i;
            break;
        }
    }
}