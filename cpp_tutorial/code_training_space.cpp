#include <iostream>
using namespace std; // Пространство имён - пока что не знаю, что это

int main()
{
    int arr[5]{ 6,3,4,5,2};

    int min = INT_MAX;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] < min)
        {
            min = arr[i]; 
        }
    }
    cout << min;
}