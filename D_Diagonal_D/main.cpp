#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][n - i - 1];
    }
 
    if(primaryDiagonal >= secondaryDiagonal){
        cout << primaryDiagonal - secondaryDiagonal ; }
    else{
        cout << secondaryDiagonal - primaryDiagonal ; }
    return 0;
    }
