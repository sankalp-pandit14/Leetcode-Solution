
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> solve;

        for (int i = 0; i < asteroids.size(); i++) {

            if (asteroids[i] > 0) {
                solve.push_back(asteroids[i]);
            }
            else {
                while (!solve.empty() &&
                       solve.back() > 0 &&
                       solve.back() < abs(asteroids[i])) {
                    solve.pop_back();
                }

                if (!solve.empty() &&
                    solve.back() == abs(asteroids[i])) {
                    solve.pop_back();
                }
                else if (solve.empty() || solve.back() < 0) {
                    solve.push_back(asteroids[i]);
                }
            }
        }

        return solve;
    }
};

