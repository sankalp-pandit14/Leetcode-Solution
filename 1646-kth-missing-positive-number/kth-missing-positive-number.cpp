class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n= arr.size();
        int low=0,high=n-1;
        int missing=0;
        
        while(low<=high){
            int mid= (low+high)/2;     
// This means:

// Index 3 has only 3 missing numbers before it.
// Index 4 has 6 missing numbers before it.

// So the 5th missing number lies before 11 (which is arr[4]).

// Step 2: What does low = 4 tell us?

// There are 4 elements before index 4:

// 2 3 4 7

// These are present numbers.

// Step 3: Imagine counting natural numbers

// Write the numbers up to the answer:

// 1 2 3 4 5 6 7 8 9

// Among these:

// Present numbers:

// 2 3 4 7

// There are 4 of them.

// Missing numbers:

// 1 5 6 8 9

// There are 5 of them.

// Notice something:

// Total numbers = Present + Missing

// 9 = 4 + 5
        missing = arr[mid]- (mid+1);
        if(missing<k){
            low=mid+1;
        }
        else {
            high=mid-1;
        }

        }
        return low+k;// 5th mising lie krta h btw 11 and 7 kyuki ussi me mera jha high pehle low bad me aaya aur fir 5th missing number nikal jayega 5th missing from 
    }
};