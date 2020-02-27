#include <iostream>
using namespace std;

// 判断n是否是质数，返回是或否。
bool zhishu(int n)
{
    for (int i = 2; i < n; i++)
    {
        // cout << "i=" << i << endl;
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

// 计算n的m次方
int pow(int n, int m)
{
    int k = n;
    for (int i = 1; i < m; i++)
    {
        k = k * n;
    }
    return k;
}

int main()
{
    int n;
    for (int i = 2; i < 50; i++)
    {
        n = pow(i, 5) + 6;
        if (zhishu(i) && zhishu(n))
        {
            cout << i << "  " << n << endl;
        }
    }

    // cout << pow(2, 6) << endl;

    return 0;
}