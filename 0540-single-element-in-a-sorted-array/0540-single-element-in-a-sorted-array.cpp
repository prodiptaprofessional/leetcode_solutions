class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int st = 0, end = A.size()-1;
        if(A.size()==1){
            return A[0];
        }
        while(st<=end){
            int m = st + (end-st)/2 ; //mid
            if(m==0 && A[0]!=A[1]){
                return A[m];
            }
            if(m==A.size()-1 && A[A.size()-1]!=A[A.size()-2]){
                return A[m];
            }
            if(A[m-1]!=A[m] && A[m]!=A[m+1]){
                return A[m];
            }
            if(m%2==0){
                if(A[m-1]==A[m]){
                    end = m-1;
                }
                else{
                    st = m+1;
                }
            }
            else{
                if(A[m-1]==A[m]){
                    st = m + 1;
                }
                else{
                    end=m-1;
                }
            }

        }
        return -1;    
    }
};