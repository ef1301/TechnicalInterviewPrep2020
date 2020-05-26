class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //you don't need 2 sets but 1 is necessary
        set<int> output;   
        if (nums1.size() >= nums2.size()) {
            set<int> s1(nums1.begin(), nums1.end());
            for (int val: nums2) {
                if(s1.find(val) != s1.end()) {
                    output.insert(val);
                }
            }
            return vector<int>(output.begin(), output.end());
        }
        else {
            set<int> s2(nums2.begin(), nums2.end());
            for (int val: nums1) {
                if(s2.find(val) != s2.end()) {
                    output.insert(val);
                }   
            }
            return vector<int>(output.begin(), output.end());
        }
    }

};
