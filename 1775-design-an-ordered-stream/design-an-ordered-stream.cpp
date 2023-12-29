class OrderedStream {
public:
    vector<string> stream ; //to get input
    int i=0;
    OrderedStream(int n) {
        stream.resize(n); //change the size of the vector when orderedStream is called
    }
    
    vector<string> insert(int id, string value) {
        vector<string> result;
        stream[id-1] = value; // value is stored in the ith position
        while(i<stream.size() && stream[i]!="") //stream[i] !="" because an entry is printed only if the entry before it is printed
        {
            result.push_back(stream[i]);
            i++;
        }
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */