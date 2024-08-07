subway = [10, 20, 30]
print(subway)
# [10, 20, 30]

subway = ["유재석", "조세호", "박명수"]
print(subway)
# ['유재석', '조세호', '박명수']

# 조세호씨가 몇 번째 칸에 타고 있는가?
print(subway.index("조세호") + 1)
# 2

# 하하씨가 다음 정류장에서 다음 칸에 탐
subway.append("하하")
print(subway)
# ['유재석', '조세호', '박명수', '하하']

# 정형돈씨를 유재석(0) / 조세호(1) 사이에 태워봄
subway.insert(1, "정형돈")
print(subway)

# 지하철에 있는 사람을 한 명씩 뒤에서 꺼냄
print(subway.pop())
print(subway)
print(subway.pop())
print(subway)
print(subway.pop())
print(subway)
# 하하
# ['유재석', '정형돈', '조세호', '박명수']
# 박명수
# ['유재석', '정형돈', '조세호']
# 조세호
# ['유재석', '정형돈']

# 같은 이름의 사람이 몇 명 있는지 확인
subway.append("유재석")
print(subway)
print(subway.count("유재석"))
# ['유재석', '정형돈', '유재석']
# 2

# 정렬도 가능
num_list = [5,2,4,3,1]
num_list.sort()     # 오름차순으로 정렬
print(num_list)     
# [1, 2, 3, 4, 5]

# 순서 뒤집기 가능
num_list.reverse()   # 내림차순으로 정렬
print(num_list)
# [5, 4, 3, 2, 1]

# 모두 지우기
num_list.clear()
print(num_list)
# []

# 다양한 자료형 함께 사용
mix_list = ["조세호", 20, True]
print(mix_list)
# ['조세호', 20, True]

# 리스트 확장
num_list = [5,2,4,3,1]
num_list.extend(mix_list)
print(num_list)
# [5, 2, 4, 3, 1, '조세호', 20, True]
