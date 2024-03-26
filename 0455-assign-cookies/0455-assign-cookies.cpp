class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());


        int gindx=0; 
        for(int i=0;i<s.size();i++)
        {
            if(gindx<g.size() && s[i]>=g[gindx])
            gindx++;
        }

        return gindx;
    }
};