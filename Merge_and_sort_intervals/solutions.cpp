#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'mergeHighDefinitionIntervals' function below.
 *
 * The function is expected to return a 2D_INTEGER_ARRAY.
 * The function accepts 2D_INTEGER_ARRAY intervals as parameter.
 */

vector<vector<int>> mergeHighDefinitionIntervals(vector<vector<int>> intervals) {
if(intervals.size() <=1){
    return intervals;
}

sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) 
        {
             return a[0] < b[0];
        }    
);

vector<vector<int>> result;
int start = intervals[0][0];
int end = intervals[0][1];

for(int i = 1; i < intervals.size(); i++){
    int currStart = intervals[i][0];
    int currEnd = intervals[i][1];
    // Start is 1
    // End is 3
    // currStart is 2
    // currEnd is 6
    
    if(end>=currStart){
        end = max(end,currEnd);
    }
    else {
        result.push_back({start,end});        
        start = currStart;
        end = currEnd;
    
    }

}

result.push_back({start,end}); 

return result;

/*Start - 8
End - 10
CurrStart - 15
CurrEnd - 18
i = ?
size intervals = 4
i = 3
*/



}
int main()