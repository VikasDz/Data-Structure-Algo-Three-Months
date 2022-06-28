#include <iostream>
using namespace std;

int main()
{

    /*
        int a = 4;
        int b = 6;

        cout<<" a&b " << (a&b) << endl;
        cout<<" a|b " << (a|b) << endl;
        cout<<" ~a " << ~a << endl;
        cout<<" a^b " << (a^b) << endl;

        cout<< (17>>1)<<endl;
        cout<< (17>>2) <<endl;
        cout<< (19<<1) <<endl;
        cout<< (21<<2) <<endl;

        int i = 7;

        cout<< (++i) <<endl;
        // 8
        cout<< (i++) <<endl;
        // 8 , i = 9
        cout<< (i--) <<endl;
        //9 , i = 8
        cout<< (--i) <<endl;
        // 7, i =7

        int n;
        cout << " enter the value of n" << endl;
        // cin >> n;

        cout << "printing count from 1 to n" << endl;
        int i = 1;
        for (;;)
        {
            if (i <= n)
            {
                cout << i << endl;
            }
            else
            {
                break;
            }
            i++;
        }

        for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
        {
            cout << a << " " << b << " " << c << endl;
        }

        */

    int n;
    cout << "Enter Your Number" << endl;
    cin >> n;

    //    int sum = 0;

    //    for (int i = 1; i <= n; i++)
    //    {
    //       sum = sum+i;

    //    }
    //    cout << sum << endl;

    // int a = 0;
    // int b = 1;

    // for (int i = 1; i <= n; i++)
    // {

    //     int nextNumber = a + b;
    //     cout << nextNumber << endl;

    //     a = b;
    //     b = nextNumber;
    // }

    // bool isPrime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if (isPrime == 0)
    // {
    //     cout << "Not Prime" << endl;
    // }
    // else
    // {
    //     cout << "Prime" << endl;
    // }

    //    Question Time
    // for (int i = 0; i <=5; i--)
    // {
    //     cout<< i <<endl;
    //     i++;
    // }

    /*
    cout << "  Variables - Scopes:  " << endl;
    cout << "  Global Variables Scopes & Local Variables Scope:  " << endl;

    int c = 5;
    cout << c << endl;
    if (true)
    {
        int b = 65;
        cout << b << endl;
    }

    int b = 1;
    cout << b << endl;

    int i = 8;
    for (; i <= 8; i++)
    {
        cout << " Hi " << endl;
    }
    if (1)
    {
        int b = 5;
        if (17)
        {
            int b = 55;
            {
                cout << b << endl;
            }
            if (1)
                int b = 556;
            {
                cout << b << endl;
            }
        }
    }
    */

    cout << "  Operator Precedence: " << endl;

    cout << "  LeetCode Question: " << endl;
    int pord = 1;
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        pord = pord * digit;
        sum = sum + digit;

        n = n / 10;
    }
    int your_value = pord - sum;
    cout << "Your Value: " << your_value << endl;

    return 0;
}