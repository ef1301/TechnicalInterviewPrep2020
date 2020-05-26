class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s;
        set<int>::iterator it;
        for(int x: nums) {
            it = s.find(x);
            if(it == s.end()) {
                s.insert(x);
            } else {
                s.erase(it);
            }
        }
        auto val = s.begin();
        return *val;      
    }
};
