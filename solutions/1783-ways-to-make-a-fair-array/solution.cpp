class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        int teven = 0;
        int todd = 0;
        for(int i = 0; i<n; i++){
            if(i%2==0){
                teven += nums[i]; 
            }
            else{
                todd += nums[i];
            }
        }

        int lefteven =0;
        int leftodd = 0;
        int count = 0;

        for(int i = 0; i<n; i++){
                 if(i%2==0){
                teven -= nums[i]; 
            }
            else{
                todd -= nums[i];
            }
        int neven = lefteven + todd;
        int nodd =   leftodd + teven;

        if(neven == nodd){
            count++;
        }

         if(i%2==0){
            lefteven += nums[i];
         }
       else{
        leftodd += nums[i];  
         }
        }
        return count;
    }
};
