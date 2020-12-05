#include <iostream>
#include <string>
#include <map>

using namespace std;

void PrintMap(const map<char, int> m){
    for(const auto item : m)
        cout << item.first << ": " << item.second << endl;
}

map<char, int> BuildCharCounters(const string & str){
    map<char, int> counter;
    for(const auto s : str){
        counter[s]++;
    }
    return counter;
}

int main(){
    int user = 0;
    cin >> user;
    string one,two;
    while (user != 0){
        cin >> one >> two;
        string result = (BuildCharCounters(one) == BuildCharCounters(two)) ? "YES" : "NO";
        cout << result << endl;
        user--;
    }



}


