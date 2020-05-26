class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        map<int,int>::iterator it = HashMap.find(key);
        if(it != HashMap.end()) {
            HashMap[key] = value;
        } else {
            HashMap.insert(make_pair(key,value));
        }
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        map<int,int>::iterator it = HashMap.find(key);
        if(it != HashMap.end()) {
            return HashMap[key];
        } else {
            return -1;
        }
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        HashMap.erase(key);
    }
private:
    map<int, int> HashMap;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

//-----------------------------------------------------------------------
class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet(): hashSet(1000000, false) {
        // cost too many time here
        // for(int i=0;i<=1000000;i++) hashSet.push_back(false);
    }
    
    void add(int key) {
        hashSet[key]=true;
    }
    
    void remove(int key) {
        hashSet[key]=false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return hashSet[key];
    }
private:
    vector<bool> hashSet;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
