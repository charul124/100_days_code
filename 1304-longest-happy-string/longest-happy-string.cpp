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
    string longestDiverseString(int a, int b, int c) {
        priority_queue<node, vector<node> , compare> maxheap;
        if(a > 0){
            node temp('a', a);
            maxheap.push(temp);
        }
        if(b > 0){
            node temp('b', b);
            maxheap.push(temp);
        }
        if(c > 0){
            node temp('c', c);
            maxheap.push(temp);
        }

        string ans = "";
        while(maxheap.size() > 1){
            node first = maxheap.top();
            maxheap.pop();
            node second = maxheap.top();
            maxheap.pop();
            if(first.count >= 2){
                ans += first.data;
                ans += first.data;
                first.count -= 2;
            }
            else{
                ans += first.data;
                first.count--;
            }

            if(second.count >= 2 && second.count >= first.count){
                ans += second.data;
                ans += second.data;
                second.count -= 2;
            }
            else{
                ans += second.data;
                second.count--;
            }

            if(first.count > 0){
                maxheap.push(first);
            }
            if(second.count > 0){
                maxheap.push(second);
            }
        }
        if(maxheap.size() == 1){
            node temp = maxheap.top();
            maxheap.pop();
            if(temp.count >= 2){
                ans += temp.data;
                ans += temp.data;
                temp.count -= 2;
            }
            else{
                ans += temp.data;
                temp.count--;
            }
        }
        return ans;
    }
};