class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum=0;
        int n=salary.size();

        for(int i=0;i<salary.size();i++) {
            sum+=salary[i];
        }
        sum-=salary[0]+salary[n-1];
        return sum/(salary.size() -2);
    }
};