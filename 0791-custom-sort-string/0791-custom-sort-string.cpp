class Solution {
public:
    string customSortString(string order, string s) {
        string result="";
        unordered_map<char,int>mp;
        for(char it:s)
        {
            mp[it]++;
        }
        for(char it : order)
        {
            if(mp.find(it)!=mp.end())
            {
                result.append(mp[it],it);
            }
         mp.erase(it);   
        }
        
        for(auto it:mp)
        {
            result.append(it.second,it.first);
        }
        return result;
    }
};