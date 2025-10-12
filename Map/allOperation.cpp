#include<iostream>
#include<map>
using namespace std;

int main(){
    // map<int, string> map1;

    // map1.insert({3,"Fazle Rabbi"});
    // map1.insert({5,"Anayet"});
    // map1.emplace_hint(map1.begin(),7,"helooo");

    // for(auto& element : map1){
    //     cout << element.first << " " << element.second << "\n";
    // }

    map<char,int> mymap;

    mymap['a']=10;
    mymap['b']=20;
    mymap['c']=30;

    pair<std::map<char,int>::iterator,std::map<char,int>::iterator> ret;
    ret = mymap.equal_range('b');
    
    cout << "The lower bound is "<< ret.first->first << ":" << ret.first->second;
    cout << "\nThe upper bound is " << ret.second->first << ":" << ret.second->second;

    // for(auto& el : mymap){
    //     cout << el.first << " " << el.second << "\n";
    // }

    

    // map<int, string> map2 = {{2,"Hello"}, {1,"world"}};

    // for(auto& e : map2){
    //     cout << e.first << " " << e.second << "\n";
    // }

    return 0;
}

