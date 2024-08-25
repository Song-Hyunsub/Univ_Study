# Solution 1
def solution(n):
    array = [[0] * n for _ in range(n)]

    count = 1

    startRow = 0
    endRow = n - 1
    startCol = 0
    endCol = n - 1

    while count <= n * n:
        for i in range(startCol, endCol + 1):
            array[startRow][i] = count
            count += 1
        startRow += 1

        for i in range(startRow, endCol + 1):
            array[i][endCol] = count
            count += 1
        endCol -= 1

        for i in range(endCol, startCol - 1, -1):
            array[endRow][i] = count
            count += 1
        endRow -= 1

        for i in range(endRow, startRow - 1, -1):
            array[i][startCol] = count
            count += 1
        startCol += 1

    return array

# Solution 2
def solution(n):
    if n == 1:
        return [[1]]
    
    answer = [[0 for j in range(n)] for i in range(n)] # 배열 초기화
    
    x = 0
    y = 0
    dir = 'r'
    
    for i in range(n*n):
        answer[x][y] = i + 1
        if dir == 'r':
            y += 1
            if y == n-1 or answer[x][y+1] != 0: # 맨 끝에 도달했거나 가려는 곳에 이미 값이 있으면 방향 전환
                dir = 'd'
        elif dir == 'd':
            x += 1
            if x == n-1 or answer[x+1][y] != 0:
                dir = 'l'
        elif dir == 'l':
            y -= 1
            if y == 0 or answer[x][y-1] != 0:
                dir = 'u'
        elif dir == 'u':
            x -= 1
            if x == n-1 or answer[x-1][y] != 0:
                dir = 'r'
                
    return answer
