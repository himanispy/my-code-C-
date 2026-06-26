//very important

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        // Insert all elements into the hash set
        for (int x :nums) {
            st.insert(x);
        }

        int longest =0;

        // Traverse each unique element
        for (int x:st) {

            // Check if x is the starting element
            if (st.find(x - 1) == st.end()) {

                int curr = x;
                int cnt = 1;

                // Count consecutive numbers
                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    cnt++;
                }

                longest =max(longest, cnt);
            }
        }

        return longest;
    }
};

int main() {

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    Solution obj;

    cout << "Longest Consecutive Sequence Length = "
         << obj.longestConsecutive(nums) << endl;

    return 0;
}