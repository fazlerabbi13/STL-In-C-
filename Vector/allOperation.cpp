#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num {1,2,3,4,5,6,7,8,9};
    // cout << num.max_size()<<"\n";
    // num.shrink_to_fit();
    // cout << num.capacity();

    // cout << num.back() <<"\n";

    for(auto it = num.cbegin(); it != num.cend(); ++it)
        cout << *it << "\n";

    // for(auto it = num.crbegin(); it !=num.crend(); ++it)
    //     cout << *it << "\n";
    cout<<"----------";

    num.emplace(num.begin()+2,100);

    num.emplace_back(10);
    num.emplace_back(11);
    
    for(auto it = num.cbegin(); it != num.cend(); ++it)
        cout << *it << "\n";

    return 0;
}