def solution(arr, intervals):
    answer = []
    first_interval = arr[intervals[0][0]:intervals[0][1]+1]
    second_interval = arr[intervals[1][0]:intervals[1][1] + 1]
    answer = first_interval + second_interval
    return answer
