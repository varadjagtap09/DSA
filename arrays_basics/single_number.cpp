#include <bits/stdc++.h>
using namespace std;
int SingleNumber(std ::vector<int> &nums ){
    int ans =0;
    for (int num:nums){
        ans ^=num;
    }
    return ans;
}
int main (){
    vector<int>nums ={2,3,4,2,3};
    cout << SingleNumber(nums);
    return 0;
}