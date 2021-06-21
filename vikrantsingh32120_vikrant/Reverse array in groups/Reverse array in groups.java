package gfgProblems;
import java.util.*;

class Solution {
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(ArrayList<Integer> arr, int n, int k) {
         for(int i=0;i<n;i+=k){
             int left=i;
             int right=Math.min(i+k-1,n-1);
             
             while(left<right){
                 Collections.swap(arr,left,right);
                 left++;
                 right--;
             }
         }
    }
}
public class ReverseAnSubarraysInGroup {

	public static void main(String[] args) {
		ArrayList<Integer> arr=new ArrayList<>();
		int[] a= {1,2,3,4,5};
		int n=a.length;
		int k=3;
		for(int i=0;i<a.length;i++) {
			arr.add(a[i]);
		}
		
		Solution s=new Solution();
		s.reverseInGroups(arr, n, k);
		
		for(int i=0;i<a.length;i++) {
			System.out.print(arr.get(i)+" ");
		}
	}

}
