class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==1)
            return 0;
        
        set<char> ss;
        char c;
        bool unique = false;
        for(int i=0;i<s.size();i++){
            //cout << c << ss.count(c) << endl;
            c = s[i];
            
            //cout << c << ss.count(c) << endl;
            
            if(i!=0 && c == s[i-1])
                continue;
            
            if( i== s.size()-1){
                cout << "i = size-1\n" << c;
                if(!ss.count(c))
                    return i;
                else
                    return -1;
            }
                
            
            
            
            for(int j=i+1;j<s.size();j++){
                //cout << c << " " << s[j] << endl;
                if(c == s[j]){
                    break;
                }
                if(j == s.size()-1 && !ss.count(c) ){
                    cout << c << " " << ss.count(c) << endl;
                    
                    return i;
                }
            }
            if(!ss.count(c))
                ss.insert(c);
        }
        //cout << s;
        return -1;
    }
};
