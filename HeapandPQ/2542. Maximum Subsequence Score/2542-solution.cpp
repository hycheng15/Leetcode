#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

class Solution
{
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int nums2_size = nums2.size();
        vector<pair<int, int>> nums_pair;
        for (int i = 0; i < nums2_size; i++) {
            nums_pair.push_back(make_pair(nums2[i], nums1[i]));
        }
        sort(nums_pair.begin(), nums_pair.end(), greater<pair<int, int>>());

        long long result;
        long long k_sum = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < k; i++) {
            pq.push(nums_pair[i].second);
            k_sum += nums_pair[i].second;
        }

        result = nums_pair[k - 1].first * k_sum;

        for (int i = k; i < nums2_size; i++) {
            k_sum -= pq.top();
            pq.pop();
            pq.push(nums_pair[i].second);
            k_sum += nums_pair[i].second;
            result = max(result, nums_pair[i].first * k_sum);
        }

        return result;
    }
};

int main() {
    Solution ans;

    return 0;
}