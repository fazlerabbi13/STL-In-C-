#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;

    ms.insert(5);
    ms.insert(3);
    ms.insert(3);
    ms.insert(1);

    for (auto i : ms)
        cout << i << " ";

    auto it1 = ms.begin();
    cout << *it1 << " " << "\n";

    // auto it2 = next(it1, 2);
    // cout << *it2 << "\n";

    
    return 0;
}