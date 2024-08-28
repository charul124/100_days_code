class node{
    public:
    char data;
    int count;

    node(char d, int c){
        data = d;
        count = c;
    }
};

class compare{
    public:
    bool operator()(node a, node b){
        return a.count < b.count;
    }
};

class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> umap;
        priority_queue<node, vector<node>, compare> maxheap;
        for(char c : s){
            umap[c]++;
        }
        string ans = "";
        for (auto& x : umap) {
            maxheap.push(node(x.first, x.second));
        }
        while(maxheap.size() > 1){
            node first = maxheap.top();
            maxheap.pop();
            node second = maxheap.top();
            maxheap.pop();

            ans += first.data;
            ans += second.data;

            first.count--;
            second.count--;

            if(first.count != 0){
                maxheap.push(first);
            }
            
            if(second.count != 0){
                maxheap.push(second);
            }
        }

        if(maxheap.size() == 1){
            node temp = maxheap.top();
            maxheap.pop();
            if(temp.count == 1){
                ans += temp.data;
            }
            else{
                return "";
            }
        }
        return ans;
    }
};