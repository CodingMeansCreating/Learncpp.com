// In the name of who programmed the world
// Date: 7/26/2018
// By: Ali Zanguei

// Using bubble sort algorithm

#include <iostream>
#include <algorithm>

int main()
{
    using namespace std;

    int array[] = {9, 5, 3, 7, 2, 8, 6, 4, 1};
    const int length = sizeof(array) / sizeof(array[0]);

    for (int iii=length-1; iii>=0; iii--)
    {
        for (int jjj=0; jjj<iii; jjj++)
        {
            if (array[jjj] > array[jjj+1])
                swap(array[jjj], array[jjj+1]);
        }
    }
    for (int index=0; index<length; index++)
    {
        cout << array[index] << " ";
    }

    return 0;
}
