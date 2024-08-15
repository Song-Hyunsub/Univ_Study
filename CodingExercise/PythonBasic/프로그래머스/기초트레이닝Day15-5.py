# Solution 1
def solution(myString, pat):
    if pat.lower() in myString.lower():
        return 1
    else:
        return 0
    return answer


# Solution 2
def solution(myString, pat):
    return int(pat.lower() in myString.lower())
