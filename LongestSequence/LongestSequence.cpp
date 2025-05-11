#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    const int max_value = 99;
    int numbers[max_value];

    for (int counter = 0; counter < N; counter++)
        cin >> numbers[counter];

    int max_sequence_size = 1;
    int curr_sequence_size = 1;
    int max_sequence_number = numbers[0];
    int curr_sequence_number = numbers[0];

    for (int cnt = 1; cnt < N; cnt++)
    {
        if (numbers[cnt] == curr_sequence_number)
        {
            curr_sequence_size++;
        }
        else
        {
            if (curr_sequence_size >= max_sequence_size)
            {
                max_sequence_size = curr_sequence_size;
                max_sequence_number = curr_sequence_number;
            }
            curr_sequence_size = 1;
            curr_sequence_number = numbers[cnt];

        }
    }

    if (curr_sequence_size >= max_sequence_size)
    {
        max_sequence_size = curr_sequence_size;
        max_sequence_number = curr_sequence_number;
    }


    for (int cnt = 0; cnt < max_sequence_size; cnt++)
        cout << max_sequence_number << ' ';
    cout << endl;

    return 0;
}
