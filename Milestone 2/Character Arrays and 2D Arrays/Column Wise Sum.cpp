#include <iostream>
using namespace std;
int main(){
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int arr[1000][1000];
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++){           // i for rows
        for (int j = 0; j < c; j++){         // j for columns
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < c; i++){        // i for columns
        for (int j = 0; j < r; j++){         // j for rows
            sum += arr[j][i];  
        }
        cout << sum << ' ';
        sum = 0;
    }
}