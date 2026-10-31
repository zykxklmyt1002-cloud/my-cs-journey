// func_4_7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*给定求组合数公式为，编写程序，输入两个整数 m 和n 的值，求Cnm的值。注意优化算法,降低溢出可能。
要求：主函数调用以下函数求组合数。
int Fabricate(int m, int n); // 返回组合数的值
在Fabricate函数中内需调用Multi函数
int Multi(int m, int n); // 返回m*(m-1)*...*n
注意：测试数据有多组输入*/

#include <iostream>
using namespace std;
int Fabricate(int, int);
int Multi(int, int);
int main()
{
    int m = 0, n = 0;
    while (cin >> m >> n)
    {
        cout << Fabricate(m, n) << endl;
    }
    return 0;
}
int Fabricate(int m, int n)
{
    if (2 * n > m)
    {
        return Fabricate(m, m - n);
    }
    else
    {
        int ans = 0;
        ans = Multi(m, m - n + 1) / Multi(n, 1);
        return ans;
    }
}
int Multi(int m, int n)
{
    int k = 1;
    for(int i = n;i<m+1;i++)
    { 
        k *= i;
    }
    return k;
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
