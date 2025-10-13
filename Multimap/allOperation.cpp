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

    multimap<string, int>name_roll;

    name_roll.insert({"rabbi",47014});
    name_roll.insert({"sagor",47015});

    name_roll.erase("rabbi");

    string result = name_roll.empty()? "yes" : "no";
    cout << result << "\n";
    
    // for(const auto& key_value: my_multimap){
    //     int key = key_value.first;
    //     string value = key_value.second;

    //     cout << key << " _ " << value <<"\n";
    // }
    for(const auto& key_value: name_roll){
        
        int key = key_value.second;
        string value = key_value.first;

        cout << key << " _ " << value <<"\n";
    }

    return 0;
}