class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        unordered_map<int,int> m;
                    //check winner and looser of every array whetre firste element of an array contain winner player number while second one contain looser player number


        for(int i = 0; i < matches.size(); i++) {

            int winner = matches[i][0];
            int looser = matches[i][1];

            m[winner] += 0;
            m[looser]++;
        }

        vector<int> zero;
        vector<int> one;

        for(auto it : m) {

            if(it.second == 0) {
                zero.push_back(it.first);
            }
            else if(it.second == 1) {
                one.push_back(it.first);
            }
        }

        sort(zero.begin(), zero.end());
        sort(one.begin(), one.end());

        return {zero, one};
    }
};