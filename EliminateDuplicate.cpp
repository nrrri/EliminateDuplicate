#include <iostream>

using namespace std;

int main()
{
    cout << "hello world" << endl;
    int data[] = {1, 2, 4, 5, 1, 8, 2, 3, 6, 1, 4, 2};
    int collectionSize = 12;
    int arr[20] = {};
    bool check = false;
    int x = 0;

    for (int i = 0; i < collectionSize; i++)
    {
        // check = false;

        for (int k = 0; k < 20; k++)
        {
            // compare 2 value
            // if data[i] != all arr[]
            if (data[i] == arr[k])
            {
                check = false;
                break;
            }
            else
            {
                check = true;
            }
        }

        // if not duplicate move data to new array
        if (check)
        {
            arr[x++] = data[i];
        }
    }

    cout << "The collection contains " << x << " unique numbers, they are : ";
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " | ";
    }
    cout << endl;

    return 0;
}