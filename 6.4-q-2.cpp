// In the name of who programmed the world
// Date: 7/26/2018
// By: Ali Zanguei

// This program is going to sort an array in descending order.

#include <iostream>
#include <algorithm>

int main()
{
    using namespace std;

    int array[] = {90, 60, 30, 20, 40, 70, 80, 50, 10, 100};
    const int length = sizeof(array) / sizeof(array[0]);

    for (int iii=0; iii<length-1; iii++)
    {
        int maxIndex = iii;
        for (int jjj=iii; jjj<length; jjj++)
        {
            if (array[maxIndex] < array[jjj])
                maxIndex = jjj;
        }
        swap(array[maxIndex], array[iii]);
    }
    for (int index=0; index<length; index++)
    {
        cout << array[index] << " ";
    }

    return 0;
}
