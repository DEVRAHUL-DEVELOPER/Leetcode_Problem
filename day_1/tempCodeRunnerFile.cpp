#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string num_str;
        // Convert each character to its position in the alphabet and append to num_str
        for (char c : s) {
            int v = c - 'a' + 1;
            num_str += to_string(v);
        }

        // Perform the transformation k times
        while (k > 0) {
            int sum = 0;
            for (char c : num_str) {
                sum += c - '0'; // Convert each character to a digit and add to sum
            }
            num_str = to_string(sum);
            k--;
        }

        // Return the final result as an integer
        return stoi(num_str);
    }
};

int main() {
    Solution solution;  // Create an instance of the Solution class
    string s;
    int k;

    // Take input from the user
    cout << "Enter the string (s): ";
    cin >> s;
    cout << "Enter the number of transformations (k): ";
    cin >> k;

    // Call the getLucky function and output the result
    int result = solution.getLucky(s, k);
    cout << "Output: " << result << endl;

    return 0;
}
