//Problem : Maximal Rectangle
class Solution {
    public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        int nse=0;
        int pse=0;
        stack <int>st;
        for (int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()]>=heights[i]){
                int value=st.top();
                st.pop();
                nse=i;
                pse=st.empty()?-1:st.top();
                maxi=max(maxi,heights[value]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            nse=n;
            int value=st.top();
            st.pop();
            pse=st.empty()?-1:st.top();
            maxi=max(maxi,heights[value]*(nse-pse-1));
        }

        return maxi;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>convertedCol(m,0);
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(matrix[i][j]=='1'){
                convertedCol[j]++;
            }
            else{
                convertedCol[j]=0;
            }
            }
            maxi=max(maxi,largestRectangleArea(convertedCol));
        }
        return maxi;
    }
};
