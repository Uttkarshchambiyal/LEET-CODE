class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1;
        int maxxp = INT_MIN;
        int n = nums.size();
        if(n==1){
            return nums[0];
        }

        for(int i = 0; i<n; i++){
            product *= nums[i];
            
            
            if(  product > maxxp){
                maxxp = product;
            }
            if(product == 0){
                product = 1;
            }  
        }

        product = 1;

         for(int i = n-1; i>=0; i--){
            product *= nums[i];
            
            
            if(  product > maxxp){
                maxxp = product;
            }
            if(product == 0){
                product = 1;
            }  
        }
       
        return maxxp;
    }
};
