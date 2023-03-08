#include <iostream>

int main()
{
    int n;
    long long max1 = 0, max2 = 0;
    std :: cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        std :: cin >> a[i];
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2)
        {
            max2 = a[i];
        }
    }
    std :: cout << (long long) max1 * max2;
}