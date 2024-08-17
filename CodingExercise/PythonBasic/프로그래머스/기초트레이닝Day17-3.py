def solution(strArr):
    # "ad"를 포함하지 않는 문자열만을 필터링
    result = [s for s in strArr if "ad" not in s]
    return result