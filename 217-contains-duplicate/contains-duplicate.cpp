class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;

    for (int x : nums) {
        if (s.count(x))   // already seen before
            return true;
        s.insert(x);
    }
    return false;
}
};