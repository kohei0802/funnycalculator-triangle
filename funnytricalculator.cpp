#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int i, k, w, h, s[3];
    cout << "What mode will you choose: \nMode1[1] -- area of a triangle\nModel[2] -- perimeter of a triangle\n";
    cin >> i;
    if (1==i)
    {
        cout << "Enter the length of width: ";
        cin >> w;
        cout << "Enter the length of height: ";
        cin >> h;
        cout << "The area is " << w * h / 2 << '!';
    }
    else
    {
        cout << "-------Enter the length of the sides a, b & c (e.g., 3 4 5)---------------- \n";
        cout << "a: ";
        cin >> s[1];
        cout << "b: ";
        cin >> s[2];
        cout << "c: ";
        cin >> s[3];
        cout << "Well Done!! Processing";
        for ( int _ = 0; _ < 100 ; _++) //Output 6 dots following "Processing"
        {
            cout << '.';
            Sleep(100);
            if ( _ != 0 && _%20 == 19)
            {
                cout << '\n';
                cout << "                      ";
            }
        }
        cout << "\n";
        cout << "The perimeter is " << s[1]+s[2]+s[3] << '!';
    }

    return 0;
}
