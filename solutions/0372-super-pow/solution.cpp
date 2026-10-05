class Solution {
public:
       int pow(int a , int p , int m){
        a = a%m;
        if(p == 0 ){
            return 1;
        }
      int t =  pow(a,p/2,m);
       if(p%2==0){
       int ans = ((t%m)*(t%m))%m;
       return ans;}
       if(p%2!=0){
        return (((t*t)%m)*(a%m))%m;
       }
       return 0;
       }

    int superPow(int a, vector<int>& b) {
        a = a%1337;
        int ans = 1;
        for(int i = 0; i<b.size(); i++){
        ans =(1LL* pow(ans,10,1337)*pow(a , b[i] , 1337 ))%1337;
        }
       return ans;
       }
};
