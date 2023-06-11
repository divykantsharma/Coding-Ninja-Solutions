#include <iostream>
using namespace stint main()
{
    /*
        Read input as specified in the question.
        Print output as specified in the question.
    */
    int n;
    cin >> n;
    for (int i = 1; i < ((n + 1) / 2); i++){
        for (int j = i; j < ((n + 1) / 2); j++){
            cout << ' ';
        }
        for (int j = 1; j < i; j++){
            cout << '*';
        }
        for (int j = 1; j <= i; j++){
            cout << '*';
        }
        cout << endl;
    }

    for (int i = 1; i <= ((n + 1) / 2); i++){
        for (int j = 1; j <= (i - 1); j++){
            cout << ' ';
        }
        for (int j = i; j < ((n + 1) / 2); j++){
            cout << '*';
        }
        for (int j = i; j <= ((n + 1) / 2); j++){
            cout << '*';
        }
        cout << endl;
    }
}