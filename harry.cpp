#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {

    int cnt1 = 0, cnt2 = 0;
    int ele1 = -1, ele2 = -1;

    // Find possible candidates
    for (int x : nums) {

        if (cnt1 == 0 && x != ele2) {
            ele1 = x;
            cnt1 = 1;
        }

        else if (cnt2 == 0 && x != ele1) {
            ele2 = x;
            cnt2 = 1;
        }

        else if (x == ele1) {
            cnt1++;
        }

        else if (x == ele2) {
            cnt2++;
        }

        else {
            cnt1--;
            cnt2--;
        }
    }

    // Verify candidates
    cnt1 = 0;
    cnt2 = 0;

    for (int x : nums) {
        if (x == ele1)
            cnt1++;
        else if (x == ele2)
            cnt2++;
    }

    vector<int> ans;

    if (cnt1 >nums.size() / 3)
        ans.push_back(ele1);

    if (cnt2 >nums.size() / 3)
        ans.push_back(ele2);

    return ans;
}

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i =0; i< n; i++) {
        cin >>nums[i];
    }

    vector<int> ans = majorityElement(nums);

    cout<< "Majority Elements: ";

    if (ans.empty()) {
        cout<< "No Majority Element";
    }
    else {
        for (int x : ans)
            cout << x << " ";
    }

    cout <<endl;

    return 0;
}