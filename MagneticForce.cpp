class Solution {
public:
    bool canweplace(vector<int> &position, int m, int mindist){
        int  ballno=1;
        int lastposition=position[0];
        for(int i=0; i<position.size(); i++){
            if(m>position.size()){
                return false;
            }
            if (position[i]-lastposition>=mindist){
                ballno++;
                lastposition=position[i];
            }
        }
        return ballno>=m? true:false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int ans=-1;
        int low=1; // least distance is always 1
        int high= position.back()-position[0]; // highest dist is max and min element diff
        while (low<=high){
            int mid=low+(high-low)/2;
            if (canweplace(position, m, mid)){
                ans =mid;
                low=mid+1;
            } else {
                high=mid-1;
            }
        }
        return ans;
    }
};