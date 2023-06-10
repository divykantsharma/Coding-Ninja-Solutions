#include <iostream>
using namespace std;
void findLargest(int **input, int nRows, int mCols){
    // Write your code here
    int rLargeSum = -2e31;
    int rCurrentSum = 0;
    int rIndex = 0;
    for (int i = 0; i < nRows; i++){
        for (int j = 0; j < mCols; j++){
            rCurrentSum += input[i][j];
        }
        if (rLargeSum < rCurrentSum){
            rLargeSum = rCurrentSum;
            rIndex = i;
        }
        rCurrentSum = 0;
    }

    int cLargeSum = -2e31;
    int cCurrentSum = 0;
    int cIndex = 0;
    for (int i = 0; i < mCols; i++){
        for (int j = 0; j < nRows; j++){
            cCurrentSum += input[j][i];
        }
        if (cLargeSum < cCurrentSum){
            cLargeSum = cCurrentSum;
            cIndex = i;
        }
        cCurrentSum = 0;
    }
    if (rLargeSum >= cLargeSum){
        cout << "row" << ' ' << rIndex << ' ' << rLargeSum << endl;
    }
    else{
        cout << "column" << ' ' << cIndex << ' ' << cLargeSum << endl;
    }
}