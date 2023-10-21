#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
void Print(const T& t, string sep){
    for(const auto& n: t){
        if(n != t.back())
        cout << n << sep;
        else cout << n;
    }
}
int main() {
    vector<int> data = {1, 2, 3};
    Print(data, "! ");
}
