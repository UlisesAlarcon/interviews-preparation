class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int tam=n+m-1,a,b;
         m--;
         n--;
         for(int i=tam;i>-1;i--){
            if(m>-1)
                a=nums1[m];
            
            if(n>-1)
                b=nums2[n];
            
            if(a>b and m>-1){
                nums1[i]=a;
                nums1[m]=0;
                m--;
            }else if(n>-1){
                nums1[i]=b;
                n--;
            }
         }
    }
};