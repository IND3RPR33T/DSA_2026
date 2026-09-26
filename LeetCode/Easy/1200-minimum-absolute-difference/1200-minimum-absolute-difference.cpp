class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector <vector<int>> res;
        int mini = INT_MAX;
        for(int i = 1;i<arr.size();i++)
        {

           mini = min(mini,abs(arr[i-1] - arr[i]));
           
        }
        for(int i = 1;i<arr.size();i++)
        {
           if(abs(arr[i-1] - arr[i]) == mini)
             {
              res.push_back({arr[i-1], arr[i]});
             }

           
        }
        return res;
        
    }
};