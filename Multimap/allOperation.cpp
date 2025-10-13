#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<int, string> my_multimap = {
        {1, "Un"},
        {1, "One"},
        {2, "Two"},
        {2, "Dos"},
        {1, "Uno"},
        {2, "Deux"}
    };

    for(const auto& key_value: my_multimap){
        int key = key_value.first;
        string value = key_value.second;

        cout << key << " _ " << value <<"\n";
    }
    
    return 0;
}