#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {4, 7, 9, 14, 12};
    
    auto print = [](const int& n) { cout << n << ' '; };
    auto change = [](int& n) {
        if (n%2 == 1){
            n*=3;
        }
    };
 
    cout << "Входные данные:\t";
    for_each(v.cbegin(), v.cend(), print);
    cout << '\n';
 
    // increment elements in-place
    for_each(v.begin(), v.end(), change);
 
    cout << "Выходные данные:";
    for_each(v.cbegin(), v.cend(), print);
    cout << '\n';
}
