class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int , int>s1;
     for(int i = 0; i<n; i++){
       s1[nums1[i]]++;
     }

        vector<int>ans;

     for(int i =0; i<m; i++){
        if(s1[nums2[i]]>0){
            ans.push_back(nums2[i]);
            s1[nums2[i]] = 0;
        }
     }
     return ans;

    }


};
