 double average(vector<int>& salary) {
         int sum = 0, maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < salary.size(); i++) {
        maxi = max(maxi, salary[i]);
        mini = min(mini, salary[i]);
        sum += salary[i];
    }
    int x = sum - (maxi + mini);
    return (double)x / (salary.size() - 2);

        
    }