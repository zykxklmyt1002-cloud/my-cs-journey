// black friday.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int month, day;
    while (cin >> month >> day)
    {
        int sum_day = 0, week = 0;
        switch (month)           //小巧思用了switch的尾随性质略去一月一月算的麻烦
        {
        case 12:
            sum_day += 30;
        case 11:
            sum_day += 31;
        case 10:
            sum_day += 30;
        case 9:
            sum_day += 31;
        case 8:
            sum_day += 31;
        case 7:
            sum_day += 30;
        case 6:
            sum_day += 31;
        case 5:
            sum_day += 30;
        case 4:
            sum_day += 31;
        case 3:
            sum_day += 28;
        case 2:
            sum_day += 31;
        case 1:
            sum_day += 0;
        }
        sum_day += day;
        week = sum_day % 7;
        if (week == 6 && day == 13)        //很简单的判断
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
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
