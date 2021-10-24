vector<vector<int>> threeSum(vector<int>& v) {
    const int n = v.size();
    sort(v.begin(), v.end());
    
    set<vector<int>> triplets;
    for (int i = 0; i < n - 2 && v[i] <= 0; i++)
        for (int l = i + 1, r = n - 1; l < r; l++, r--) {
            const int s = v[i] + v[l] + v[r];
            if (s < 0)
                r++;
            else if (s > 0)
                l--;
            else
                triplets.insert({v[i], v[l], v[r]});
        }
    
    return vector(triplets.begin(), triplets.end());
}
