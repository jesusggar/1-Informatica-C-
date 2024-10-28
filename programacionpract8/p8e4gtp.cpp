#include <iostream>
#include <array>

using namespace std;

typedef pair<int, int> Pair;

int main() {
    int k;
    cin >> k;

    array<array<int, 4>, 3> matrix;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    array<Pair, 12> count_array;
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            bool found = false;
            for (int k = 0; k < count; k++) {
                if (count_array[k].first == matrix[i][j]) {
                    count_array[k].second++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                count_array[count].first = matrix[i][j];
                count_array[count].second = 1;
                count++;
            }
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (count_array[i].second < count_array[j].second) {
                int temp_first = count_array[i].first;
                int temp_second = count_array[i].second;
                count_array[i].first = count_array[j].first;
                count_array[i].second = count_array[j].second;
                count_array[j].first = temp_first;
                count_array[j].second = temp_second;
            }
        }
    }

    for (int i = 0; i < count && i < k; i++) {
        cout << count_array[i].first << " (" << count_array[i].second << " times)" << endl;
    }

    return 0;
}
