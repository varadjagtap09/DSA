#include <bits/stdc++.h>
using namespace std;
int findmissingNumber(std :: vector<int>& arr)
{
int sum =0;
int n=arr.size() + 1;
for ( int i =0 ; i< n ; i++){
    sum += arr[i];
}
int expectedSum = n * (n + 1) / 2;
return expectedSum - sum;
}
int main(){
    vector<int>arr ={2 ,1 ,3 ,4 ,5,7,8};
    cout <<findmissingNumber(arr);
    return 0;
}