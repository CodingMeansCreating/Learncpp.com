// In the name of who programmed the world

#include <iostream>

int main()
{
    using namespace std;

    const int numOfRows    = 10;
    const int numOfColumns = 10;
    int twoDArray[numOfRows][numOfColumns] = { 0 };

    for (int row=0; row<numOfRows; row++)
    {
        for (int column=0; column<numOfColumns; column++)
        {
            twoDArray[row][column] = (row+1) * (column+1);
        }
    }
    for (int row=0; row<numOfRows; row++)
    {
        for (int column=0; column<numOfColumns; column++)
        {
            cout << twoDArray[row][column] << "\t";
        }
        cout << '\n';
    }

    return 0;
}
