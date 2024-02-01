#include<iostream>
#include<vector>
//make_pair
//v.firs
using namespace std;

int main(){
    // // pair<int,int>v= make_pair(100,200);


    // pair<int,int> v={100,200};
    // cout<< v.first;

    // pair<pair<int,int>,int> v={{20,10},30};

    tuple<int,int,int> v ={10,20,30};
    cout<< get<2>(v);
    
}