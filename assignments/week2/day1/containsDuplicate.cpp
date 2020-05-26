class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        std::pair<std::set<int>::iterator,bool> ret;
        for(int x: nums) {
            ret = s.insert(x);
            if(ret.second == false) {
                return true;
            }
        }
        return false;
    }
};
