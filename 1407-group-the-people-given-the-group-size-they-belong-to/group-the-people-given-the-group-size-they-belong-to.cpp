class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& grp) {
        unordered_map<int , vector<int>> m;

        for(int i =0 ; i< grp.size(); i++){
            m[grp[i]].push_back(i);
        }
        vector<vector<int>> res;
        for( auto e : m){
            int j = 0 ;
            while( j < e.second.size()){
                vector<int> temp;
                for(int x = 0 ; x < e.first ; x++){
                    int val = e.second[j];
                    temp.push_back(val);
                    j++;
                }
                res.push_back(temp);
            }
        }
        return res;
    }
};
