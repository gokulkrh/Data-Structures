#include <iostream>

void rectangleBlock(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << "*";
        };
        std::cout << std::endl;
    };
}

void leftStairStars(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        };
        std::cout << std::endl;
    };
}

void leftStairNums(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        };
        std::cout << std::endl;
    };
}

void leftStairNumsPerRow(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i;
        };
        std::cout << std::endl;
    };
}

void leftInvertedStairStars(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        };
        std::cout << std::endl;
    };
}

void leftInvertedStairNums(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        };
        std::cout << std::endl;
    };
}

void leftStairOnesZeros(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                {
                    std::cout << 1 << " ";
                }
                else
                {
                    std::cout << 0 << " ";
                }
            }
            else
            {
                if (j % 2 != 0)
                {
                    std::cout << 0 << " ";
                }
                else
                {
                    std::cout << 1 << " ";
                }
            }
        }
        std::cout << std::endl;
    }
}

void mirrorStairNums(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                std::cout << j;
            }
            else
            {
                std::cout << " ";
            }
        };
        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                std::cout << j;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void serialStairs(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << num << " ";
            num++;
        }
        std::cout << std::endl;
    }
}

void leftStairsAlpha(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 65; j <= (65 + i - 1); j++)
        {
            std::cout << char(j);
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cin >> n;
    // rectangleBlock(n);
    // leftStairStars(n);
    // leftStairNums(n);
    // leftStairNumsPerRow(n);
    // leftInvertedStairStars(n);
    // leftInvertedStairNums(n);
    // leftStairOnesZeros(n);
    // mirrorStairNums(n);
    // serialStairs(n);
    // leftStairsAlpha(n);
    return 0;
}