//just done day05 code in dsa a to z series 
//question was to find largest element in array
#include <vector>
class Solution {
public:
    int largestElement(std::vector<int>& arr) {
        int largest = arr[0];
        //[3,3,6,1]
        //a[0] = 3, a[1] = 3, a[2] = 6, a[3] = 1
      //  largest = 3

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > largest) {
                //a[i]>largest return true when a[i] is greater than largest 
                largest = arr[i];
                //largest = 6
            }
        }
        return largest;
    }
};
// just done this code in strivers A TO Z Dsa series 