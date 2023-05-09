#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Enter size of the array : ";
    cin >> n;

    vector<int> integers;
    for (int i = 0; i < n; i++) {
        int num = rand() % 100;
        integers.push_back(num);

        // sorting the vector
        sort(integers.begin(), integers.end());

        // calculate the median
        int size = integers.size();
        double median;
        if (size % 2 == 0) {
            median = (double)(integers[size/2 - 1] + integers[size/2]) / 2;
        } else {
            median = (double)integers[size/2];
        }

        // output the median
        cout << fixed << setprecision(1) << median << endl;
    }

    return 0;
}