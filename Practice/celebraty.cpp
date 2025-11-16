// 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[4][4] = {
        {0,0,1,1},
        {1,0,1,0},
        {0,0,0,0},
        {1,1,1,0}
    };
    int row = 4, col = 4;

    vector<int> ans(col, 0);

    // Count how many people know each person
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 1) {
                ans[j]++;
            }
        }
    }

    int cele_index = -1;

    // Candidate: person who is known by n-1 people
    for (int i = 0; i < col; i++) {
        if (ans[i] == row - 1) {
            cele_index = i;
            break;
        }
    }

    if (cele_index == -1) {
        cout << "No celebrity" << endl;
        return 0;
    }

    // Check if celebrity knows nobody
    for (int j = 0; j < col; j++) {
        if (arr[cele_index][j] == 1) {
            cout << "No celebrity" << endl;
            return 0;
        }
    }

    cout << "Celebrity is person " << cele_index << endl;

    return 0;
}
