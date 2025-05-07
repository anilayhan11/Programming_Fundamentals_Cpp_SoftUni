#include <iostream>
using namespace std;

int main()
{
    const int MaxSize = 99;
    int array[MaxSize] = {};

    int N;
    cin >> N;

    for (int cnt = 0; cnt < N; cnt++)
        cin >> array[cnt];

    for (int cnt = N - 1; cnt >= 0; cnt--)
        cout << array[cnt] << ' ';
    cout << endl;

    return 0;
}
