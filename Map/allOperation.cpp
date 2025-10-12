#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> map1;

    map<int, string> map2 = {{2,"Hello"}, {1,"world"}};

    for(auto& e : map2){
        cout << e.first << " " << e.second << "\n";
    }
    return 0;
}

