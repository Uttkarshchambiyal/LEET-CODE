class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         int tr = 0;
        int br = n-1;
        int lc = 0;
         int rc = n-1;
       vector<vector<int>>arr(n,vector<int>(n));
        
        int count =0;

while(br>=tr && rc>=lc){

          for(int j = lc; j<=rc; j++){
            count++;
          arr[tr][j] = count;
          }
             tr++; 

          for(int j = tr; j<=br; j++){
            count++;
          arr[j][rc] = count;
          }
           rc--;

         if(br>=tr){
           for(int j = rc; j>=lc; j--){
            count++;
          arr[br][j] = count;
          }
              br--;
       
         }

if(rc>=lc){
          for(int j = br; j>=tr; j--){
            count++;
          arr[j][lc] = count;
          }
       lc++;
        }
}
        return arr;
    }
};
