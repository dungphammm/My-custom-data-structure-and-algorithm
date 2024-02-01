#include<iostream>
#include<vector>

//pushback()
//back()
//



int main(){

    // std::vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // std::cout<<v.size()<<std::endl;
    // v.push_back(40);

    // std::cout<<v.size()<<std::endl;
    // std::cout<<v[v.size()-1]<<std::endl;
    // std::cout<<v.back()<<std::endl;
    // // for(int i=0;i<v.size();i++){
    // //     std::cout<<v[i]<<std::endl;
    // // }

    // // for(int i :v){
    // //     std::cout<<i<<std::endl;
    // // }

    // // for(std::vector<int>::iterator it =v.begin() ;it != v.end(); it++){
    // //     std::cout<<*it<<std::endl;
    // // }

    // for(auto it : v){
    //     std::cout<<it<<std::endl;
    // }

    // int n;
    // std::cin>>n;
    // std::vector<int> v(n);
    // for(int i=0; i<n; i++){
    //     int x;
    //     std::cin>> x;
    //     v.push_back(x);
    //  }

    // for(int i : v){
    //     std::cout<<v[i]<<std::endl;
    // }

    int n;std::cin>>n;
    std::vector<int> v(n,100);
    for(int i=0;i<n;i++){
        std::cout<<v[i]<<std::endl;
    }
    std::cout<< v.capacity()<<std::endl;
    
    v.push_back(20);
    std::cout<< v.capacity()<<std::endl;



    return 0;
}