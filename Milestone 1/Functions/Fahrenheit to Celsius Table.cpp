#include <iostream>
using namespace std;
int fah_To_cel(int a){
    int ans = (5.0 / 9) * (a - 32);
    return ans;
}
void printTable(int start, int end, int step){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */

    // Using for loop
    for (start<=end;start=start+step){
        int cel = fah_To_cel(start);
        cout << start << "\t" << cel << endl;
    }
}
