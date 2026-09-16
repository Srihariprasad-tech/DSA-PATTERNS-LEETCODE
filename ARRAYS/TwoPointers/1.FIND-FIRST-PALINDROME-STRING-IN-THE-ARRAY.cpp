class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            string r=words[i];
            reverse(r.begin(),r.end());
            if(words[i]==r)
            {
                return words[i];
            }
        }
        return "";
    }
};
