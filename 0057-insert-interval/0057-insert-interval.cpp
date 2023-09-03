class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> result; int i=0; int n=intervals.size();
      
      //For starting non overlapping Intervals
       while(i<n && intervals[i][1]<newInterval[0])
      { result.push_back(intervals[i]);
       i++;}
        
      //For overlapping Intervals
       vector<int> mI=newInterval;
       while(i<n && intervals[i][0]<=newInterval[1])
       {
           mI[0]=min(mI[0],intervals[i][0]);
           mI[1]=max(mI[1],intervals[i][1]);
           i++;
       }

       result.push_back(mI);

     //For ending non overlapping Intervals

     while(i<n)
     {result.push_back(intervals[i]);
     i++;}



     return result;





      

    }
};



/*Clarifying Questions
Are intervals Non overlapping??
Is the intervals array sorted??

Approach:
First we will pushback starting kai non overlapping intervals
then we will visit overlapping intervals and combine them into a merged interval
and push back the merged interval
then we will pushback ending kai non overlapping intervals


Time Complexity:O(n);
Space Complexity:O(n);
*/