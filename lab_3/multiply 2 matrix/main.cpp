#include <iostream>
using namespace std;

int main() {



    int matrix1[3][2];
    int matrix2[2][1];
    int result[3][1];

    cout << "enter matrix 1" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout<<"Enter # at index"<<i<<","<<j<<endl;
            cin >> matrix1[i][j];
        }
    }

    cout << "enter matrix 2" << endl;
    for (int i = 0; i < 2; i++) {
       cout<<"Enter # at index"<<i <<endl;
        cin >> matrix2[i][0];
    }

    for (int i = 0; i < 3; i++) {
        result[i][0] = 0;
        for (int k = 0; k < 2; k++) {
            result[i][0] += matrix1[i][k] * matrix2[k][0];
        }
    }

    cout << "result" << endl;
    for (int i = 0; i < 3; i++) {
        cout << result[i][0] << endl;
    }

    return 0;
}
