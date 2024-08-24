class node{
    public:
    int data;
    int row;
    int col;

    node(int d, int r, int c){
        data = d;
        row = r;
        col = c;
    }
};

class compare{
    public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        priority_queue<node*, vector<node*>, compare> minheap;
        int k = nums.size();
        for(int i = 0; i < k; i++){
            int ele = nums[i][0];
            maxi = max(maxi, ele);
            mini = min(mini, ele);
            minheap.push(new node(ele, i , 0));
        }

        int ansstart = mini;
        int ansend = maxi;

        while(!minheap.empty()){
            node* top = minheap.top();
            int topele = top->data;
            int toprow = top->row;
            int topcol = top->col;
            minheap.pop();

            mini = topele;

            if(maxi - mini < ansend - ansstart){
                ansstart = mini;
                ansend = maxi;
            }

            //checking for new element in the same list

            if(topcol + 1 < nums[toprow].size()){
                maxi = max(maxi, nums[toprow][topcol+1]);
                node* newNode = new node(nums[toprow][topcol+1], toprow, topcol+1);
                minheap.push(newNode);
            }
            else{
                //there is no element in same nums -> to rukna hai 
                break;
            }
        }
        vector<int> ans;
        ans.push_back(ansstart);
        ans.push_back(ansend);
        return ans;
    }
};