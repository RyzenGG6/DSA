  int minimumSum(int num) {
        string a = to_string(num);
        // a[1]=a[2];
        sort(a.begin(),a.end());
        swap(a[1], a[2]);
        int ans1, ans2;
        int sum = 0;
        ans1 = (int(a[0]) - 48) * 10 + (int(a[1]) - 48);
        ans2 = (int(a[2]) - 48) * 10 + (int(a[3]) - 48);
        // cout << ans1 << " " << ans2;
        sum = ans1 + ans2;
        return sum;
    }