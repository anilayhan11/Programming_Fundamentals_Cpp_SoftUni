#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    const int max_value = 99;
    int nums[99];

    for (int cnt = 0; cnt < n; cnt++)
    {
        cin >> nums[cnt];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int min_diff = INT_MAX;
    for (int first = 0; first < n - 1; first++)
        for (int second = first + 1; second < n; second++)
        {
            int difference = abs(nums[first] - nums[second]);
            if (difference < min_diff)
                min_diff = difference;
        }

    cout << min_diff << endl;

    return 0;
}
