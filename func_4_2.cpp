// func_4_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>
using namespace std;
long long func(int a, int b)
{
    int i = 1;
    long long sum = 0;              //a的b次方的和的函数
    for (i = 1; i < a + 1; i++)
    {
        sum += pow(i, b);
    }
    return sum;
}
int main()
{
    int m, n, p;
    double x = 0, y = 0, z = 0;
    while (cin >> m >> n >> p)
    {
        double l;
        if (func(m, 1) >= INT_MAX|| func(n, 3) >= INT_MAX|| func(p, 5) >= INT_MAX|| (func(m, 1)+ func(n, 3)) >= INT_MAX)    //判断溢出
        {
            cout << "Overflow" << "\n";
        }
        else
        {
            
            x = double(func(m, 1));
            y = double(func(n, 3));
            z = double(func(p, 5));
            l = (x+ y) / z;
            cout << fixed << setprecision(4) << l << "\n";
        }
    }
    return 0;
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
