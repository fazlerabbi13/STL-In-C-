#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>li;
    list<int>li2 {5,2,3,4};

    li.assign(5,3);

    li.emplace_back(7);
    li.emplace_front(2);

    li.pop_front();

    li.splice(li.begin(),li2);
    
    for(int l: li){
        cout << l <<" ";
    }


    return 0;
}