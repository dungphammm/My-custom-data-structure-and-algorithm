#include<iostream>
#include<set>

//insert
//size
//find //count

using namespace std;


int main(){
    // set<int> s;
    // s.insert(200);
    // s.insert(20);
    // s.insert(30);
    // s.insert(50);
    // cout<<s.size();

    set<int> s;

    for(int i=0; i<10;i++){
        s.insert(i);
    }
        cout<<s.size();

    if(s.count(5)!=0){
        cout<<"Found";
    }
    else
        cout<<"Not found";


 
    return 0;
}