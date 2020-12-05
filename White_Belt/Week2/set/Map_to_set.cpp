#include <set>
#include <string>
#include <iostream>
#include <map>

using namespace std;

set<string> BuildMapValuesSet(const map<int,string> source){
    set<string> values;
    for(const auto item : source){
        values.insert(item.second);
    }
    return values;
}

int main(void){
    set<string> values = BuildMapValuesSet({
                                                   {1, "odd"},
                                                   {2, "even"},
                                                   {3, "odd"},
                                                   {4, "even"},
                                                   {5, "odd"}
                                           });

    for (const string& value : values) {
        cout << value << endl;
    }
}
