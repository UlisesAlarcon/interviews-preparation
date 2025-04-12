class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int tam=nums.size(),k,a,b;
        int index_reversa=tam-1;
        k=tam;
        for(int i=0;i<tam;i++){
            cout<<i<<endl;
            if(nums[i]==val){
                while(index_reversa>=0 and nums[index_reversa]==val){
                    index_reversa--;
                    tam--;
                    k--;
                }
                if(index_reversa>=0 and nums[index_reversa]!=val and i<index_reversa){
                    nums[i]=nums[index_reversa];
                    tam--;
                    index_reversa--;
                }
            }
        }
        return tam;
    }
};