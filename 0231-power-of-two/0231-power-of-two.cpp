class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
     int b=n&1;
        if(n<=0)
            return false;
    while(n!=0 )
    {
        int b=n&1;
        if(b==1)
        c++;
        n=n>>1;
    }
 if(c==1)
return true;
 return false;
    }
};