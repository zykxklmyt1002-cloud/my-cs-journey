// solve 2 equation.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a = 0, b = 0, c = 0, x = 0, delta = 0, y = 0, t_delta;
    while (cin >> a >> b >> c)
    {
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                    cout << "Infinite solutions" << fixed << setprecision(2) << "\n";
                else
                    cout << "No solution"  << "\n";
            }
            else
            {
                x = 0 - (c / b);
                cout << "Linear equation, one root: x = " << fixed << setprecision(2) << x << "\n";
            }
        }
        else
        {
            if (b == 0 && c == 0)
            {
                cout << "One real root: x = 0.00\n";
            }
            else
            {
                delta = b * b - 4 * a * c;
                if (delta > 0)
                {
                    t_delta = sqrt(delta);
                    x = (-b - t_delta) / (2 * a);
                    y = (-b + t_delta) / (2 * a);
                    cout << "Two distinct real roots: x1 = " << fixed << setprecision(2) << x << ", x2 = " << fixed << setprecision(2) << y << "\n";
                }
                else if (delta == 0)
                {
                    x = (-b) / (2 * a);
                    cout << "One real root: x = " << fixed << setprecision(2) << x << "\n";
                }
                else
                {
                    cout << "No real roots" << "\n";
                }
            }
            
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
