#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> words;
        if (strs.size() == 0)
        {
            return words;
        }
        
        for (string word : strs)
        {
            string temp = word;
            sort(temp.begin(), temp.end());
            if(words.size()==0)
            {
                    vector<string> thisv;
                    thisv.push_back(word);
                    words.push_back(thisv);
                    continue;
            }
            int wordss = words.size();
            for (int i = 0;i < wordss;i++)
            {
                
                string wordtemp = words[i][0];
                
                //cout<<wordtemp<<endl;
                sort(wordtemp.begin(), wordtemp.end());
                if (temp == wordtemp)
                {
                    //cout<<word<<" "<<words[i][0]<<endl;
                    words[i].push_back(word);
                    break;
                }
                else {
                    if(i==words.size()-1)
                    {
                        vector<string> thisv;
                        thisv.push_back(word);
                        words.push_back(thisv);
                    }
                    
                }
            }

        }
        return words;
    }
};
