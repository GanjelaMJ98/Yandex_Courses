#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(){
    map<set<string>,int> ways;

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int stops_count;
        cin >> stops_count;
        set<string> stops;
        string stop;
        for (int i = 0; i < stops_count; i++) {
            cin >> stop;
            stops.insert(stop);
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