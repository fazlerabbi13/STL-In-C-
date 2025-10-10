#include<bits/stdc++.h>
using namespace std;

bool single_disit(const int& val){
    return (val > 2);
}

int main(){

    list<int>li;
    list<int>li2 {5,2,2,2,3,4};


    li2.unique();
    // li2.remove(4);

    // li.assign(5,3);

    //  li2.remove_if(single_disit);

    li.emplace_back(7);
    li.emplace_front(2);

    li.pop_front();

    // li.splice(li.begin(),li2);

    

    // for(int l: li){
    //     cout << l <<" ";
    // }

    for(int l2: li2){
        cout << l2 <<" ";
    }


    return 0;
}