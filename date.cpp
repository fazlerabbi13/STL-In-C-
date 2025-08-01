#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string end_date = "2019/04/30";

    if (s <= end_date) {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }

    return 0;
}
