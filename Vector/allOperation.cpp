#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num1 {1,2,3,4,5,6,7,8,9};

    num1.resize(11);
    num1.resize(15,100);
    num1.resize(5);
    // vector<int> num2 {9,8,7,4,5,6,1,2,3};

    // num2.swap(num1);


    for (int i = 0; i < num1.size(); i++)
    {
        cout << num1[i] << "\n";
    }

    // cout << "-------------" << "\n";

    // for (int i = 0; i < num2.size(); i++)
    // {
    //     cout << num2[i] << "\n";
    // }
    
    // cout << num.max_size()<<"\n";
    // num.shrink_to_fit();
    // cout << num.capacity();

    // cout << num.back() <<"\n";

    // for(auto it = num.cbegin(); it != num.cend(); ++it)
    //     cout << *it << "\n";

    // for(auto it = num.crbegin(); it !=num.crend(); ++it)
    //     cout << *it << "\n";
    // cout<<"----------"<<"\n";

    // num.emplace(num.begin()+2,100);

    // num.emplace_back(10);
    // num.emplace_back(11);

    // num.erase(num.begin()+1);
    // num.erase(num.begin()+1,num.begin()+2);

    // for(auto it = num.begin(); it != num.end(); ++it)
    //     cout << *it << "\n";

    return 0;
}