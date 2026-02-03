#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector <int> find_lse(vector<int> vec){
        int n= vec.size();
        stack<int> st;
        vector <int> lse(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && vec[st.top()]>vec[i]){
                st.pop();
            }
            lse[i]=(st.empty())?-1:st.top();
            st.push(i);
        }
        return lse;
    }
    private:
    vector <int> find_rse(vector<int> vec){
        int n= vec.size();
        stack<int> st;
        vector <int> rse(n,n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && vec[st.top()]>=vec[i]){
                st.pop();
            }
            rse[i]=(st.empty())?n:st.top();
            st.push(i);
        }
        return rse;
    }

public:
long long mod=(long long)1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        long long sum=0;
        int n= arr.size();
        vector<int>lse=find_lse(arr);
        vector<int>rse=find_rse(arr);
        for(int i=0;i<n;i++){
            int left=i-lse[i];
            int right=rse[i]-i;
            sum=sum+(arr[i]*left*1LL*right)%mod;       //1LL is very important to prevent overflow
            sum=sum%mod;
        }
        return sum;
    }
};