#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>li;
    li.assign(5,3);

    li.emplace_back(7);
    li.emplace_front(2);

    li.pop_front();
    
    for(int l: li){
        cout << l <<" ";
    }


    return 0;
}