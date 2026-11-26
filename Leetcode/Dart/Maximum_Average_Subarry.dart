double findMaxAverage(List<int> nums , int k){
        int currSum  = 0 ;
        int maxSum = 0 ;
        for(int i = 0 ; i < k ; i++)currSum+=nums[i];
        maxSum = currSum ;
        for(int j = k ; j < nums.length  ; j++){
                currSum = currSum - nums[j - k] + nums[j];
                if(currSum > maxSum) maxSum = currSum ;
        }
        return maxSum / k ;
}
void main(){
        List<int>nums = [1,12,-5,-6,50,3];
        int k = 4 ;
        print(findMaxAverage(nums, k));
}