def starBlock(n):
    for i in range(n):
        for j in range(n):
            print("*", end="")
        print("\n")
    return

def staircase(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print("*", end="")
        print("\n")
    return

def staircaseNums(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(j, end="")
        print("\n")
    return

def staircaseNumsPerRow(n):
    return

def invertedStaircase(n):
    return

def invertedStarcaseNums(n):
    return

def oneZeroStaircase(n):
    return
                

if __name__ == "__main__":
    patterType, size = map(int, input().split())
    
    match patterType:
        case 1:
            starBlock(size)
        case _:
            print("invalid pattern type")
    
    # starBlock(n)
    # staircase(n)
    # staircaseNums(size)
    # staircaseNumsPerRow(n)
    # invertedStaircase(n)
    # invertedStarcaseNums(n)
    # oneZeroStaircase(n)