double pow(double x, int n){
    if(n==0){
        return 1;
    }
    else{
    return x*pow(x,n-1);}
}

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
       

        if(N<0){
         N = -N;
          double t = pow(x,N/2);
         if(N%2==0){
            return 1.0/(t*t);
        }
        else{
                 return 1.0/((t*t)*x);
        }
        }
        double t = pow(x,N/2);
        if(N%2==0){
            return t*t;
        }
        else{
                 return t*t*x;
        }
    }
};
