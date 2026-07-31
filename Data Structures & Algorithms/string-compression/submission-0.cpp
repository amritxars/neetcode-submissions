class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        int k=0;
        int i=0;

        while(i<n){

            chars[k] = chars[i];
            k++;

            int j = i+1;
            while(j<n && chars[j] == chars[i]){
                j++;
            }

            if(j-i>1){
                string s = to_string(j-i);

                for(char ch: s){
                    chars[k] = ch;
                    k++;
                }
            }
            i = j;    
        }

        return k;
    }
};