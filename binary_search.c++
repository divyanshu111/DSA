class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        //nth root of an integer
        // so we are given integer and we have to find
        
        int low=1;
        int high=m;
        
        int ans=-1;
        while(low<=high){
            // we will be returning -1 in case we don't find a root
            int mid=(high+low)/2;
            int x=mid;
            for(int i=1;i<n;i++){
                if(x > m) break;// this is optimisation 
                x=mid*x;
            }
            if(x<m){
                low=mid+1;// moving search space because we are not going to reiterate over same number again. If  that would be the case answer would be mid
            }
            else if(x>m){
                high=mid-1;// same as low limiting the search space
            }
            else{
                ans=mid;
                break;
            }
        }
        return ans;
        
    }
};