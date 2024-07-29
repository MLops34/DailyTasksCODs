class Solution {
public:
    bool isPowerOfThree(int n) {
          if(n==1) return true;
    long long  val;
    for(long long i=1;i<=n;i++){
        val=pow(3,i);
        if(val<=n){
            if(val==n) return true;
        }
        else
        break;
    }
    return false;
        
    }
};