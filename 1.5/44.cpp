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

// 返回第n小的质数。
int getZhishu(int n)
{
    int i = 1;
    while (n > 0)
    {
        i++;
        if (zhishu(i))
        {
            n--;
        }
    }
    return i;
}

int main()
{
    int count;

    cin >> count;

    cout << getZhishu(count) << endl;
    return 0;
}