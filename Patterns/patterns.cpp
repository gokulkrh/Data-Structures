#include <iostream>

void starBlock(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void leftStairStars(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void leftStairNums(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

void leftStairNumsPerRow(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i;
        }
        std::cout << std::endl;
    }
}

void leftInvertedStairStars(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void leftInvertedStairNums(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

void starPyramid(int n) {}

void invertedStarPyramid(int n) {}

void starDiamond(int n) {}

void starHalfDiamond(int n) {}

void leftStairOnesZeros(int n)
{
}

void mirrorStairNums(int n)
{
}

void serialStairs(int n)
{
}

void leftStairsAlpha(int n)
{
}

void leftInvertedStairAlpha(int n) {}

void leftStairAlphaPerRow(int n) {}

void alphaPyramid(int n) {}

void hollowBlockStar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void blockNums(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            std::cout << (n - std::min(std::min(top, down), std::min(left, right)));
        }
        std::cout << std::endl;
    }
}

int main()
{
    int size, patternType;
    std::cin >> patternType >> size;

    switch (patternType)
    {
    case 1:
        starBlock(size);
        break;
    case 2:
        leftStairStars(size);
        break;
    case 3:
        leftStairNums(size);
        break;
    case 4:
        leftStairNumsPerRow(size);
        break;
    case 5:
        leftInvertedStairStars(size);
        break;
    case 6:
        leftInvertedStairNums(size);
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;
    case 11:
        break;
    case 12:
        break;
    case 13:
        break;
    case 14:
        break;
    case 15:
        break;
    case 16:
        break;
    case 17:
        break;
    case 18:
        break;
    case 19:
        break;
    case 20:
        break;
    case 21:
        hollowBlockStar(size);
        break;
    case 22:
        blockNums(size);
        break;
    default:
        std::cout << "invalid pattern type" << std::endl;
        break;
    }
    return 0;
}