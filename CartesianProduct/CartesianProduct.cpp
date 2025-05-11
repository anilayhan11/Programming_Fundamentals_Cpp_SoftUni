#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    const int max_value = 99;
    int nums[99];
    
    for (int cnt = 0; cnt < n; cnt++)
        cin >> nums[cnt];

    int cartesian[max_value * max_value];

    for(int col = 0; col < n; col++)
        for (int row = 0; row < n; row++)
        {
            int index = col * n + row;
            cartesian[index] = nums[col] * nums[row];
        }

    for (int cnt = 0; cnt < n*n; cnt++)
        cout << cartesian[cnt] << ' ';
    cout << endl;

    return 0;

}

