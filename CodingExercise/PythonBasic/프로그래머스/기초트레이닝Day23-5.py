# Solution 1
def solution(date1, date2):
    return 1 if date1 < date2 else 0

# Solution 2
def solution(date1, date2):
    return 1 if int("".join(map(str, date1))) < int("".join(map(str, date2))) else 0