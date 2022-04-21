class MyHashSet {
public:
    bitset<1000001> buckets;
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        buckets.set(key % 1000001);
    }
    
    void remove(int key) {
        buckets.reset(key % 1000001);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return buckets.test(key % 1000001);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */