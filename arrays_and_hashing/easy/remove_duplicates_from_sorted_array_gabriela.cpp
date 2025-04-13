class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int tam=nums.size(),aux=1,num;
        num=nums[0];
        for(int i=1;i<tam;i++){
            if(nums[i]!=num){
                num=nums[i];
                nums[aux]=num;
                aux++;
            }
        }
        return aux;
    }
};