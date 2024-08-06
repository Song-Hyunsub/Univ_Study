def solution(arr, queries):
    result = []
    for s, e, k in queries:
        min_value = float('inf')
        found = False
        
        for i in range(s, e+1):
            if arr[i] > k and arr[i] < min_value:
                min_value = arr[i]
                found = True
                
        if found:
            result.append(min_value)
        else:
            result.append(-1)
    return result
