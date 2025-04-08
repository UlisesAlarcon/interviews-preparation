class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int n = (int)word1.size();
            int m = (int)word2.size();
    
            int  i = 0, j = 0;
    
            string result = "";
            bool band = true;
    
            while (i < n and j < m){
                if(band)
                    result += word1[ i ++];
                else 
                    result += word2 [ j ++];
                band = !band;
            }
            while ( i < n){
                result += word1 [ i ++ ];
            }
            while ( j < m) {
                result += word2 [ j ++ ];
            }
            return result;
        }
    };
    
    
    
    
    