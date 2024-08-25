def solution(board, k):
    answer = 0
    for i in range(len(board)):
        for j in range(len(board[i])):
            if i + j <= k:  # 인덱스의 합이 k 이하인 경우
                answer += board[i][j]
    return answer
