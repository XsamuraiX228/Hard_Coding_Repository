// main.cpp
// A simple subtraction game where players take turns subtracting a number from a starting value.
// The player who reduces the number to zero wins.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

void binary_search(int left, int right) {
    int usr_answer;
    while (left <= right) {
        int mid = (left + right) / 2;
        cout << "Tell me how I did. 1=too high, 2=too low, 3=success." << endl;
        cout << "Is it " << mid << endl;
        cin >> usr_answer;

        if (usr_answer == 1) {
            right = mid - 1;
        } else if (usr_answer == 2) {
            left = mid + 1;
        } else {
            cout << "Yes I win! Thank you user and the answer was: " << mid << endl;
            break;
        }
    }
}
// 75
int main() {
    int left = 1;
    int right = 100;

    binary_search(left, right);



    return 0;
}
// End of file