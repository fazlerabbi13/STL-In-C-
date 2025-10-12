#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> map1;

    map1.insert({3,"Fazle Rabbi"});
    map1.insert({5,"Anayet"});
    map1.emplace_hint(map1.begin(),7,"helooo");
    
    for(auto& element : map1){
        cout << element.first << " " << element.second << "\n";
    }

    map<int, string> map2 = {{2,"Hello"}, {1,"world"}};

    for(auto& e : map2){
        cout << e.first << " " << e.second << "\n";
    }
    return 0;
}

