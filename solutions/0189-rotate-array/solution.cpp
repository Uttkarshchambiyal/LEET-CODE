void meow(vector<int>& arr, int left,int right){
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
} 



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0){
            return;
        }
        k = k%n;
      if(k==0){
        return;
      }
        meow(nums,0,n-1);
        
        meow(nums,0,k-1);

        meow(nums,k,n-1);


    }
};
