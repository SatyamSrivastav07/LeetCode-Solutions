class Solution {
public:
    static bool compare(pair<int, int>& a, pair<int, int>& b) {
        return a.first < b.first;
    }
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        // vector<int> capitals=capital;
        // sort(capitals.begin(),capitals.end());
        // if(capitals[0]>w)   return 0;
        
        int n=profits.size();
        vector<pair<int,int>> projects;
        for(int i=0;i<n;i++){
            projects.push_back({capital[i],profits[i]});
        }
        sort(projects.begin(),projects.end(),compare);
        priority_queue<int> pq;
        int i=0;
        while(k>0){
            while(i<n && projects[i].first<=w){
                cout<<"W"<<w<<endl;
                pq.push(projects[i].second);
                cout<<projects[i].second<< i <<endl;
                i++;
            }
            if(pq.empty())  break;
            w += pq.top();
            cout<<pq.top()<<endl;
            pq.pop();
            k--;
        }
        return w;
    }
};