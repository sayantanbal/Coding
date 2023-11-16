if __name__ == '__main__':
    
    allList = []
    x = 0
    n = int(input())
    for _ in range(n):
        name = input()
        score = float(input())
        allList.append([score,name])
        
    
    allList.sort()
    for i in range(n):
        if(allList[i][0] < allList[i+1][0]):
            x =  allList[i+1][0]
            # print(f"{x} value of x")
            break
    for i in range(n):
        if ( allList[i][0] == x ):
            print( allList[i][1] )
