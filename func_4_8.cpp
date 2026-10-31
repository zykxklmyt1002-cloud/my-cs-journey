// func_4_8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int Isprime(int);
int sumnum(int);
int main()
{
    int t = 0;
    cin >> t;                    //输入次数
    for (int i = 0;i < t;i++)        
    {
        int L = 0, R = 0, sum = 0;
        cin >> L >> R;
        for (int i = L;i < R + 1;i++)
        {
            if (Isprime(i) == 1 && Isprime(sumnum(i)) == 1)
                sum += 1;
        }
        cout << "Case #" << i + 1 << ": " << sum << endl;
    }
    return 0;
}
int Isprime(int m)
{
    int k = 1;
    if (m == 1)
        k = 0;
    for (int i = 2;i * i <= m;i++)        //判断质数
    {
        if (m % i == 0)
        {
            k = 0;
        }
    }
    return k;
}
int sumnum(int m)                //求各位数字和
{
    int sum = 0;
    for (;m > 0;)
    {
        sum += m % 10;
        m = m / 10;
    }
    return sum;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
