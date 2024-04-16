#include <iostream>
using namespace std;

int cmp(int x, int y, int z)
{
    if (x >= y)
    {
        if (x >= z)
        {
            cout << x << " is the largest number" << endl;
        }
        else
        {
            cout << z << " is the largest number" << endl;
        }
    }
    else
    {
        if (y >= z)
        {
            
            cout << y << " is the largest number" << endl;
        }
        else
        {
            cout << z << " is the largest number" << endl;
        }
    }
return 0;
}
int main()
{
    cout << "enter x, y and z" << endl;
    int x, y, z;
    cin >> x >> y >> z;
    cmp(x,y,z);
    return 0;
}