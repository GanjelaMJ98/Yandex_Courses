#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;



int main() {
    map<string,set<string>> dict;
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        string operation_code;
        cin >> operation_code;

        if (operation_code == "ADD") {
            string first, second;
            cin >> first >> second;
            dict[first].insert(second);
            dict[second].insert(first);
        }
        else if (operation_code == "COUNT") {
            string word;
            cin >> word;
            cout << dict[word].size() << endl;
        }
        else if (operation_code == "CHECK") {
            string first, second;
            cin >> first >> second;
            bool flag = false;
            if(dict[first].count(second) != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

