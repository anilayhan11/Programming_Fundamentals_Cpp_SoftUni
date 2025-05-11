#include <iostream>
using namespace std;

void reverseArray(string rev[], int size)
{
    int iterations = size / 2;
    for (int cnt = 0; cnt < iterations; cnt++)
    {
        string tmp = rev[cnt];
        rev[cnt] = rev[size - 1 - cnt];
        rev[size - 1 - cnt] = tmp;
    }
}

void printArray(string toPrint[], int size)
{
    for (int cnt = 0; cnt < size; cnt++)
        cout << toPrint[cnt] << ' ';
    cout << endl;
}

int main()
{
    int N;
    cin >> N;

    const int maxValue = 100;

    string arr[maxValue];
    for (int cnt = 0; cnt < N; cnt++)
        cin >> arr[cnt];

    reverseArray(arr, N);
    printArray(arr, N);
        
    return 0;

}

