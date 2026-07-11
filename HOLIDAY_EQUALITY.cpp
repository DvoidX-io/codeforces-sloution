    #include <iostream>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;

        int a[100];
        int max = 0;

        for(int i = 0;i < n;i++){
        cin >> a[i];
        if(a[i] > max)

        max =a[i];
        }
        long long ans = 0;
        // calculate required

        for(int i=0;i<n;i++)
        {
            ans+=(max - a[i]);

        }
        cout <<  ans;
        return 0;









}