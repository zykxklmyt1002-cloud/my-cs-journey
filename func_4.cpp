// func_4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
unsigned long long r;
/*void swap(int* x, int* y)
{
    int temp = *x;
    *y = temp;
    *x = *y;
}*/
/*int random(int t)                     //输入1，2以选择难度，对应生成难度1/2的随机数
{
    
    if (t == 2)
    {
        while (1)
        {
            r = (r * 25173 + 13849) % 65536;
            if (r <= 99 && r >= 10)
            {
                return r;
            }
        }
    }
    else if (t == 1)
    {
        while (1)
        {
            r = (r * 25173 + 13849) % 65536;
            if (r < 10)
            {
                return r;
            }
        }
    }
    else
        return 0;
}*/                                       //ai写的的确比我的好
int random(int t)
{
    while (1)
    {
        r = (r * 25173 + 13849) % 65536;
        if (t == 1)
            if (r <= 9 && r >= 0) return (int)r;
        if (t == 2)
            if (r <= 99 && r >= 0)return (int)r;
    }
}
void operation_test(int diffi)                      //主要测试函数
{
    char op;
    int a = 0, b = 0, ans = 0, ans_guest = 0, points = 0, i = 1, status = 1;
    cout << "Please enter type of operation (+, -, *, /):\n";
    while (status)
    {
        cin >> op;
        switch (op)
        {
            case '+':
            {
                for (i = 0;i < 10;i++)
                {
                    a = random(diffi);
                    b = random(diffi);
                    ans = a + b;
                    cout << a << "+" << b << "=\n";
                    cin >> ans_guest;
                    if (ans_guest == ans)
                    {
                        cout << "You're right, get 10 points.\n";
                        points += 10;
                    }
                    else
                    {
                        cout << "answer incorrectly.\n";
                    }
                }
                cout << "Your grades are: " << points << "\n";
                status = 0;
                break;
            }
            case '-':
            {
                for (i = 0;i < 10;i++)
                {
                    do
                    {
                        a = random(diffi);
                        b = random(diffi);
                    } while (a < b);
                    ans = a - b;
                    cout << a << "-" << b << "=\n";
                    cin >> ans_guest;
                    if (ans_guest == ans)
                    {
                        cout << "You're right, get 10 points.\n";
                        points += 10;
                        
                    }
                    else
                    {
                        cout << "answer incorrectly.\n";
                        
                    }
                }
                cout << "Your grades are: " << points << "\n";
                status = 0;
                break;
            }
            case '*':
            {
                for (i = 0;i < 10;i++)
                {
                    a = random(diffi);
                    b = random(diffi);
                    ans = a * b;
                    cout << a << "*" << b << "=\n";
                    cin >> ans_guest;
                    if (ans_guest == ans)
                    {
                        cout << "You're right, get 10 points.\n";
                        points += 10;
                        
                    }
                    else
                    {
                        cout << "answer incorrectly.\n";
                        
                    }
                }
                cout << "Your grades are: " << points << "\n";
                status = 0;
                break;
            }
            case '/':
            {
                for (i = 0;i < 10;i++)
                {
                    do
                    {
                        a = random(diffi);
                        b = random(diffi);
                    } while (b == 0 || a % b != 0);
                    ans = a / b;
                    cout << a << "/" << b << "=\n";
                    cin >> ans_guest;
                    if (ans_guest == ans)
                    {
                        cout << "You're right, get 10 points.\n";
                        points += 10;
                        
                    }
                    else
                    {
                        cout << "answer incorrectly.\n";
                        
                    }
                }
                cout << "Your grades are: " << points << "\n";
                status = 0;
                break;
            }
            default:
            {
                cout << "Input error, please re-enter!\n";
                break;
            }
        }
    }
}
int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0;i < t;i++)
    {
        char sta;
        cout << "Start Now? (Y or N)\n";
        cin >> sta;
        if (sta == 'N')
        {
            continue;
        }
        else if (sta == 'Y')
        {
            cout << "Please enter difficulty (1 or 2):\n";
            char diff;
            while (cin >> diff)
            {
                if (diff == '1')
                {
                    operation_test(1);
                    break;
                }
                else if (diff == '2')
                {
                    operation_test(2);
                    break;
                }
                else
                {
                    cout << "Input error, please re-enter!\n";
                }
            }
        }
        else
        {
            cout << "Input error, please re-enter!\n";
            i--;
            continue;
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
