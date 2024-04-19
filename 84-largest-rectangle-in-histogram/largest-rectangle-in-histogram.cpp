class Solution {
public:
vector<int> prevsmaller(vector<int> &v){
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());
    for(int i =0; i< v.size(); i++){
        int curr =  v[i];

        while(st.top() != -1 && v[st.top()] >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> nextsmaller(vector<int> &v){
    stack<int> st;
    int size = v.size();
    st.push(-1);
    vector<int> ans(v.size());
    for(int i = v.size()-1; i>=0; i--){
        int curr =  v[i];
        while(st.top() != -1 && v[st.top()] >= curr){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
    int largestRectangleArea(vector<int>& heights) {
        vector<int> next = nextsmaller(heights); 
    vector<int> prev = prevsmaller(heights);
    int max_area=INT_MIN;
    int size = heights.size();
    for(int i = 0; i < heights.size(); i++){
        int len = heights[i];
        if(next[i] == -1){
            next[i] = size;
        }
        int wid = next[i] - prev[i] - 1;
        int area = len * wid;
        max_area = max(max_area, area);
    }

    return  max_area;
    }
};