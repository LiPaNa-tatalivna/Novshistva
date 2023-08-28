#include <variant>
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>


using namespace std;

variant<int, string, vector<int>> get_variant() {
    srand(time(nullptr));
    int random_variable = rand() % 3;

    variant<int, string, vector<int>> result;
    switch (random_variable)
    {
    case 0:
        result = 5;
        break;
    case 1:
        result = "string";
        break;
    case 2:
        result = vector<int>{ 1, 2, 3, 4, 5 };
        break;
    default:
        break;
    }
    if (holds_alternative<string>(result)){
        cout << get<string>(result);
    }else if(holds_alternative<int>(result)){
        cout << get<int>(result)*2;
    }else if(holds_alternative<vector<int>>(result)){
        for_each(get<vector<int>>(result).begin(), get<vector<int>>(result).end(), [](const int& n) {
            cout << n << ' ';
        });
    }
    
    
    return result;
}

int main()
{
    auto b = get_variant();
    
    
}
