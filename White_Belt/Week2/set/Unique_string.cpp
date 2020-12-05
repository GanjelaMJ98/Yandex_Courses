#include <set>
#include <string>
#include <iostream>

using namespace std;

int main(void){
    int q;
    set<string> uniq;
    cin >> q;
    for(int i = 0; i < q; i++){
        string boof;
        cin >> boof;
        uniq.insert(boof);
    }
    cout << uniq.size() << endl;
    return 0;
}

