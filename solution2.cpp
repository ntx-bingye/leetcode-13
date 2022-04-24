public:
    int romanToInt(string s) {
        
        if(s.size() == 0) return 0;
        map<char, int> roman = {{'I',1},{'V',5},{'X',10},{'L',50},
                                {'C',100},{'D',500},{'M',1000}};
        
        reverse(s.begin(),s.end());
        char pre;
        pre = s.at(0);
        int ret = roman[pre];
        s.erase(0,1);
        for(auto cur:s)
        {
            ret = (roman[cur] >= roman[pre])? (ret + roman[cur]):(ret - roman[cur]);
        
            pre = cur;
        }    

        return ret;
    }
    
};
