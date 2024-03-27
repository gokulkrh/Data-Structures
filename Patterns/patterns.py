def starBlock(n):
    for i in range(n):
        for j in range(n):
            print("*", end=" ")
        print("\n")

def staircase(n):
    for i in range(n):
        for j in range(i+1):
            print("*", end=" ")
        print("\n")

def staircaseNums(n):
    for i in range(n):
        for j in range(i+1):
            print(j+1, end=" ")
        print("\n")

def staircaseNumsPerRow(n):
    for i in range(n):
        for j in range(i+1):
            print(i+1, end=" ")
        print("\n")

def invertedStaircase(n):
    for i in range(n):
        for j in range(n-i):
            print("*", end=" ")
        print("\n")

def invertedStarcaseNums(n):
    for i in range(n):
        for j in range(n-i):
            print(j+1, end=" ")
        print("\n")

def oneZeroStaircase(n):
    for i in range(n):
        for j in range(i+1):
            if i%2 == 0:
                if j%2 == 0:
                    print("1", end=" ")
                else:
                    print("0", end=" ")
            else:
                if j%2 == 0:
                    print("0", end=" ")
                else:
                    print("1", end=" ")
        print("\n")
                

if __name__ == "__main__":
    n = int(input())
    # starBlock(n)
    # staircase(n)
    # staircaseNums(n)
    # staircaseNumsPerRow(n)
    # invertedStaircase(n)
    # invertedStarcaseNums(n)
    oneZeroStaircase(n)