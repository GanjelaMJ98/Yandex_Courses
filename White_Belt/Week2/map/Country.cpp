#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;


int main(){
    map<string,string> Countries;
    vector<string> ans;

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        string operation_code;
        cin >> operation_code;

        if (operation_code == "DUMP") {
            if(Countries.size() == 0){
                cout << "There are no countries in the world" << endl;;
            }else{
                for(const auto item : Countries){
                    cout << item.first + "/" + item.second << " ";
                }
                cout << endl;
            }
        }
        if (operation_code == "CHANGE_CAPITAL"){
            string country,new_capital;
            cin >> country >> new_capital;
            if(Countries.count(country) > 0){
                if(Countries[country] == new_capital){
                    cout << "Country " + country +" hasn't changed its capital" << endl;
                }else{
                    cout <<"Country " + country + " has changed its capital from " +Countries[country]+" to " + new_capital<< endl;
                }
            }else{
                cout <<"Introduce new country " + country + " with capital " +new_capital<< endl;
            }
            Countries[country] = new_capital;
        }
        if (operation_code == "RENAME"){
            string old_country,new_country;
            cin >> old_country >> new_country;
            if(old_country == new_country or Countries.count(new_country) > 0 or Countries.find(old_country) == Countries.end()){
                cout <<"Incorrect rename, skip" << endl;
            }else{
                cout <<"Country " + old_country + " with capital " + Countries[old_country] + " has been renamed to " + new_country<< endl;
                Countries[new_country] = Countries[old_country];
                Countries.erase(old_country);
            }

        }
        if (operation_code == "ABOUT"){
            string country;
            cin >> country;
            if(Countries.find(country) == Countries.end()){
                cout <<"Country " +country + " doesn't exist"<< endl;
            }else{
                cout <<"Country " +country + " has capital " + Countries[country]<< endl;
            }
        }
    }
}