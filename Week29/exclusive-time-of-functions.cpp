class Solution {
public:
    vector<string> read(string s){
        string tmp = "";
        int i  = 0;
        for(; s[i] != ':';i++){
            tmp += s[i];
            
        }
        vector<string> ans;
        ans.push_back(tmp);
        i++;
        tmp = "";
        for(; s[i] != ':';i++){
            tmp += s[i];
            
        }
        ans.push_back(tmp);
        tmp = "";
        i++;
        for(; s[i] != ':'&&i < s.length();i++){
            tmp += s[i];
           
        }
        ans.push_back(tmp);
        return ans;
    }
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<int> s;
        map<int, int> res;
        int start = -1;
        int last = -1;
        for(string log: logs){
            vector<string>eles = read(log);
            
            if(eles[1]=="start"){
                if(s.size()>0){
                    int tmp = s.top();
                    int offset = 0;
                    if(last == 1)offset = -1;
                    s.pop();
                    s.push(tmp + atoi(eles[2].c_str())-start+offset);
                   
                }
                last = 0;
            }else{
                int b = 0;
                if(s.size()>0){
                    
                    b = s.top();
                    s.pop();
                }
                res[atoi(eles[0].c_str())] += (atoi(eles[2].c_str())-start+b+(last==0&&eles[1]=="end"));
                last = 1;
            }
            start = atoi(eles[2].c_str());
            if(eles[1]=="start")s.push(0);
        }
        vector<int> ans;
        for(auto iter=res.begin(); iter !=res.end(); iter++){
            //cout << iter->first << endl;
            ans.push_back(iter->second);
        }
        return ans;
    }
};