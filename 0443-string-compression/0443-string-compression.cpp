// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         vector<char> ans;
//         map<char,int> mp;
//         for(int a : chars) {
//             mp[a]++;
//         }
//          for (auto i : mp)
//          {
//             ans.push_back(i.first);
//             if(i.second!=1){
//                 ans.push_back(i.second);
//             }
            
//          }  

//     return ans.size();
//     }
// };
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;  
        int j = 0;  
        
        while (i < n) {
            char currentChar = chars[i];
            int count = 0;
            while (i < n && chars[i] == currentChar) {
                i++;
                count++;
            }
            chars[j++] = currentChar;
    
            if (count > 1) {
                for (char c : to_string(count)) {
                    chars[j++] = c;
                }
            }
        }
                return j;
    }
};
