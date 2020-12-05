#include <iostream>
#include <string>
#include <vector>

using namespace std;


const vector<int> days_in_month = {31,28,31,30,31,30,31,31,30,31,30,31};
const int MONTH_COUNT = days_in_month.size();

int main() {
    int current_month = 0;
    vector<vector<string>> month(days_in_month[current_month]);

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        string operation_code;
        cin >> operation_code;

        if (operation_code == "DUMP") {
            int index_to_print;
            cin >> index_to_print;
            cout << month[index_to_print-1].size() << " ";
                for(string task : month[index_to_print-1])
                    cout << task << " ";
                cout << endl;
        }
        else {
            if (operation_code == "ADD") {
                int day_index = 0;
                string task;
                cin >> day_index >> task;
                --day_index; // элементы вектора нумеруются с нуля
                month[day_index].push_back(task);
            }
            else if (operation_code == "NEXT") {
                int next_month = 0;
                if(current_month == MONTH_COUNT)
                    next_month = 0;
                else
                    next_month = current_month+1;
                int end_day_in_next_month = days_in_month[next_month];
                if(end_day_in_next_month < month.size()){
                    for(int i = days_in_month[next_month]; i < month.size(); i++){
                        for(string event : month[i]){
                            month[end_day_in_next_month-1].push_back(event);
                        }

                    }
                    month.resize(days_in_month[next_month]);
                }
                else {
                    month.resize(days_in_month[next_month]);
                }
                current_month = next_month;
            }
        }
    }

    return 0;
}
