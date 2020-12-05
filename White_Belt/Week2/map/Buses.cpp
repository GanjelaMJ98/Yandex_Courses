#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(){
    map<vector<string>,int> ways;
    vector<string> ans;

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int stops_count;
        cin >> stops_count;
        vector<string> stops(stops_count);
        string stop;
        for (string& stop : stops) {
            cin >> stop;
        }
        // проверяем, не существует ли уже маршрут с таким набором остановок
        if(ways.count(stops)==0){
            // если не существует, нужно сохранить новый маршрут;
            // его номер на единицу больше текущего количества маршрутов
            int numder = ways.size() + 1;
            ways[stops] = numder;
            cout << "New bus "<< numder<< endl;
        }else{
            cout << "Already exists for " << ways[stops] <<endl;
        }
    }
    return 0;
}