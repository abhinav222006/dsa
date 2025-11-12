class Solution {
public:
    vector<int> searchRange(vector<int>& num, int target) {
        int start =0 , end = num.size()-1, first =-1, last = -1, mid;
        //first
        while(start<=end){
            mid = start + (end-start)/2;
            if(num[mid]==target){
                first = mid;
                end = mid -1;
            }
            else if (num[mid]<target){
                start = mid + 1;
            }
            else {
                end = mid -1;
            }           
        } 
        //last
        start = 0, end = num.size()-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(num[mid]==target){
                last = mid;
                start = mid +1;
            }
            else if (num[mid]<target){
                start = mid + 1;
            }
            else {
                end = mid -1;
            }           
        } 
        vector<int>a(2);
        a[0]=first;
        a[1]=last;
        return a;  
    }
};