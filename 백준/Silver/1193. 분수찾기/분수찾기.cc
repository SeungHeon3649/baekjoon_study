#include <iostream>
using namespace std;

int main() 
{
    int X;
    cin >> X;

    int row = 1, col = 1;
    bool up = true;

    for (int i = 1; i < X; i++) 
    {
        if (up) 
        {
            if (row > 1) 
            {
                row--;
                col++;
            }
            else 
            {
                up = false;
                col++;
            }
        }
        else 
        {
            if (col > 1) 
            {
                row++;
                col--;
            }
            else 
            {
                up = true;
                row++;
            }
        }
    }
    cout << row << '/' << col << endl;
    return 0;
}
