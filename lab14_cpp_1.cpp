#include <iostream>
#include <string>
using namespace std;

template<class T>
T find_average(T arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++ ){
        sum += arr[i];
    }
    return sum/size;
}


int main() {
    int int_array[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << find_average(int_array, 10) << endl;
    double double_array[5] {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << find_average(double_array, 5) << endl;
    char char_array[6] {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << find_average(char_array, 6) << endl;
    return 0;
}
