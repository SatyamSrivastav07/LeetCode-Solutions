class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count=0, temp=capacity;
        for(int i=0;i<plants.size();i++) {
            if(capacity>=plants[i]){
                count++;
                capacity-=plants[i];
            } 
            else{
                count+=i*2+1;
                capacity=temp-plants[i];
            }    
                cout<<count<<" ";

        }
        return count;
    }
};