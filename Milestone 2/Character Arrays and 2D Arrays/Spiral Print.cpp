#include <iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols){
    // Write your code here
    int rs = 0;
    int re = nRows - 1;
    int cs = 0;
    int ce = nCols - 1;
    int count = 0;
    while (count < (nRows * nCols)){
        for (int i = cs; (i <= ce) && (count < (nRows * nCols)); i++){
            cout << input[rs][i] << ' ';
            count++;
        }
        rs++;
        for (int j = rs; (j <= re) && (count < (nRows * nCols)); j++){
            cout << input[j][ce] << ' ';
            count++;
        }
        ce--;
        for (int k = ce; (k >= cs) && (count < (nRows * nCols)); k--){
            cout << input[re][k] << ' ';
            count++;
        }
        re--;
        for (int l = re; (l >= rs) && (count < (nRows * nCols)); l--){
            cout << input[l][cs] << ' ';
            count++;
        }
        cs++;
    }
}

