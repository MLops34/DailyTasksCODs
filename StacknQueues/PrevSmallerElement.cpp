vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int>NSE(A.size(),-1);
    stack<int> st;
    for(int i=0;i<A.size();i++){
        while(!st.empty() && st.top()>=A[i]){
            st.pop();
        }
        NSE[i] = st.empty() ? -1 : st.top();
        st.push(A[i]);
    }
    return NSE;
}
