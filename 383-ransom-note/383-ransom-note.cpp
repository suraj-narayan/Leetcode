class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ump, ump2;
        
        for(auto i:ransomNote)
            ump[i]++;
        for(auto i:magazine)
            ump2[i]++;
        
        for(auto i:ump)
        {
            if(ump2.find(i.first)==ump.end() or ump2[i.first]<i.second)
                return false;
        }
        return true;
    }
};