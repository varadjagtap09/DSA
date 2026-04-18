#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector <int> & nums)
{
    int maxi=0;
    int cnt=0;
    for (int i=0 ;i<nums.size();i++){
        if (nums[i]==2){
            cnt ++;
            maxi = max(maxi , cnt);
        }
        else{
            cnt =0;
        }
    }
    return maxi;
}
int main (){
    vector<int>nums = {2,2,2,0,2,0,2,2};
    cout << findMaxConsecutiveOnes (nums);
    return 0;
}