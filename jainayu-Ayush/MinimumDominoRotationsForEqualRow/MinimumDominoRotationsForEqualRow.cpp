class Solution {
    int numsSwap(int target, vector<int>& A, vector<int>& B){
        int swaps = 0;
        for(int i = 0; i < A.size(); i++){
            if(A[i] != target && B[i] != target){
                return INT_MAX;
            } else if(A[i] != target){
                swaps++;
            }
        }
        return swaps;
    }
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int minSwap = min(numsSwap(A[0], A, B), numsSwap(B[0], A, B));
        minSwap = min(minSwap, numsSwap(A[0], B, A));
        minSwap = min(minSwap, numsSwap(B[0], B, A));
        return minSwap == INT_MAX ? -1 : minSwap;
    }
};