#include <iostream>
using namespace std;

int main() {
    int a[5];
    int min, max;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        if (i == 0) {
            min = a[i];
            max = a[i];
        } else {
            if (a[i] < min) {
                min = a[i];
            }
            if (a[i] > max) {
                max = a[i];
            }
        }
    }
    cout << min + max << endl;
    return 0;
}