class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int time=0;
        for(int i=0;i<energy.size();i++){
            time+=energy[i];
        }
        if(time>=initialEnergy) time=time-initialEnergy+1;
        else    time=0;
        cout<<time<<" ";
        for(int i=0;i<experience.size();i++) {
            if(experience[i]>=initialExperience){
                time+=experience[i]-initialExperience+1;
                initialExperience+=experience[i]-initialExperience+1;
                initialExperience+=experience[i];
            } 
            else  initialExperience+=experience[i]; 
            cout<<time<<" "<<initialExperience<<" "<< i <<" ";
        }
        return time;

    }
};