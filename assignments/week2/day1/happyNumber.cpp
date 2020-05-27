class Solution {
public:
    int sum(int n) {
        int i = 0;
        while(n != 0) {
            i += pow(n%10,2);
            n /= 10;
        }
        return i;
    }
    
    bool isHappy(int n) {
        set<int> record;
        while(true) {
            n = sum(n);
            set<int>::iterator it = record.find(n);
            if(n == 1) {
                return true;
                break;
            }
            if (it != record.end()) {
                return false;
                break;
            }
            record.insert(n);
        }
        return true;
    }
};
