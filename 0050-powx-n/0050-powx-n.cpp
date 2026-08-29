class Solution {
public:
    double myPow(double x, int n) {
        double N=1;
        long long pow =n;

        if(pow<0){
            x = 1/x;
            pow = -pow;
        }
       while(pow>0){
        if(pow%2 ==1){
            N=N*x;
        }

        x = x*x;
        pow = pow/2;
       }

        return N;
    }
};