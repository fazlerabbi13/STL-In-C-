#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>li;
    li.assign(5,3);

    li.emplace_back(7);
    
    for(int l: li){
        cout << l <<" ";
    }


    return 0;
}