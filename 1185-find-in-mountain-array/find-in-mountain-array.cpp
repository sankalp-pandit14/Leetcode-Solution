/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findpeak(MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 1, high = n - 2;

        while (low <= high) {
            int mid = (low + high) / 2;

            int curr = mountainArr.get(mid);
            int left = mountainArr.get(mid - 1);
            int right = mountainArr.get(mid + 1);

            if (curr > left && curr > right) {
                return mid;
            }
            else if (curr > right) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return -1;
    }

    int searchLeft(int l, int r, int target, MountainArray &mountainArr) {
        int low = l, high = r;

        while (low <= high) {
            int mid = (low + high) / 2;
            int val = mountainArr.get(mid);

            if (val == target) return mid;

            if (val < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    int searchRight(int l, int r, int target, MountainArray &mountainArr) {
        int low = l, high = r;

        while (low <= high) {
            int mid = (low + high) / 2;
            int val = mountainArr.get(mid);

            if (val == target) return mid;

            if (val < target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();

        int peak = findpeak(mountainArr);

        int ans = searchLeft(0, peak, target, mountainArr);

        if (ans != -1)
            return ans;

        return searchRight(peak + 1, n - 1, target, mountainArr);
    }
};
// is finding peak then creating a partition between two of them andd thenn find the left part and then the right part got it
// one error is that question clearly says use .get call few times sowe assign call at the start and keep it