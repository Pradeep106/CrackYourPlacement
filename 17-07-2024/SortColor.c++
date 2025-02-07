class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end()) -> not to be used.

        //count method
        // int zeros, ones, twos;
        // zeros = ones = twos = 0;
         
        //  for(int i =0; i<nums.size();i++){

        //      if(nums[i]==0)
        //         zeros++;

        //      else if(nums[i]==1)
        //         ones++;

        //     else
        //         twos++;
             
        //  }

        //  //spread
        //  int i=0;
        //  while(zeros--){
        //      nums[i] = 0;
        //      i++;
        //  }

        //    while(ones--){
        //      nums[i] = 1;
        //      i++;
        //  }

        //    while(twos--){
        //      nums[i] = 2;
        //      i++;
        //  }


        //optimal approch using 3 pointer

        int l = 0, m = 0, h = nums.size()-1;

        while(m <= h){
            
            if(nums[m] == 0){
                swap(nums[l] , nums[m]);
                l++;
                m++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
                swap(nums[h] , nums[m]);
                h--;
            }
        }
    }
};