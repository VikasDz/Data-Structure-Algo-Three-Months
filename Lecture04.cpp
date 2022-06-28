#include <iostream>
using namespace std;
int main()
{

    //  Pattern Question (..

    int n;
    cout << " Enter Pattern Number" << endl;
    cin >> n;

    //  *  *  *  *  *
    //  *  *  *  *  *
    //  *  *  *  *  *
    //  *  *  *  *  *
    //  *  *  *  *  *
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= n)
    //     {

    //         cout << " * ";
    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // *
    // **
    // ***
    // ****
    // *****
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= row)
    //     {

    //         cout << " * ";
    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // 1
    // 22
    // 333
    // 4444
    // 55555
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= row)
    //     {

    //         cout << row;
    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21

    // int count = 1;
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= n)
    //     {

    //         cout << count << " ";
    //         count++;
    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // 5 6 7 8 9

    // int count = 1;
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     int value = row;
    //     while (colume <= row)
    //     {

    //         cout << value << " ";
    //         value++;
    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= row)
    //     {

    //         cout << row-colume+1 << " ";

    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // A A A A
    // B B B B
    // C C C C
    // D D D D

    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= n)
    //     {
    //         char ch ='A' + row-1;
    //         cout << ch << " ";

    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // A B C D
    // A B C D
    // A B C D
    // A B C D

    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= n)
    //     {
    //         char ch = 'A' + colume - 1;
    //         cout << ch << " ";

    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // A B C D E
    // F G H I J
    // K L M N O
    // P Q R S T
    // U V W X Y

    // char count = 'A';
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= n)
    //     {

    //         cout << count << " ";
    //         colume = colume + 1;
    //         count++;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // A B C D
    // B C D E
    // C D E F
    // D E F G

    // int count = 1;
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     int value = row;
    //     char value2 = 'A'+row+colume-2;
    //     while (colume <= n)
    //     {

    //         cout << value2 << " ";
    //         value2++;
    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // A
    // B B
    // C C C
    // D D D D
    // E E E E E

    // char ch = 'A';
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= row)
    //     {
    //         cout << ch << " ";
    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     ch++;
    //     row = row + 1;
    // }

    // A
    // B C
    // D E F
    // G H I J
    // K L M N O

    // char ch = 'A';
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;
    //     while (colume <= row)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //         colume = colume + 1;
    //     }
    //     cout << endl;

    //     row = row + 1;
    // }

    // A
    // B C
    // C D E
    // D E F G
    // int row = 1;
    // while (row <= n)
    // {

    //     int colume = 1;

    //     while (colume <= row)
    //     {

    //         char n1ew = 'A' + row +colume -2;

    //         cout << n1ew << " ";

    //         colume = colume + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // D
    // C D
    // B C D
    // A B C D
    int row = 1;
    while (row <= n)
    {

        int colume = 1;

        char n1ew = 'A' + n - row;

        while (colume <= row)
        {

            cout << n1ew << " ";
            n1ew = n1ew + 1;

            colume = colume + 1;
        }
        cout << endl;

        row = row + 1;
    }

    return 0;
}