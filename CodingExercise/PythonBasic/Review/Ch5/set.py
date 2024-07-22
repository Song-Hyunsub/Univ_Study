# 집합 (set)
# 중복 안됨, 순서 없음
my_set = {1,2,3,3,3}
print(my_set)
# {1, 2, 3}

java = {"유재석", "김태호", "양세형"}
python = set(["유재석", "박명수"])

#교집합
print(java & python)
print(java.intersection(python))
# {'유재석'}

#합집합
print(java | python)
print(java.union(python))
# {'양세형', '유재석', '김태호', '박명수'}


#차집합
print(java - python)
print(java.difference(python))
# {'김태호', '양세형'}

#python 가능인이 늘어남
python.add("김태호")
print(python)
# {'김태호', '박명수', '유재석'}

# java 까먹음
java.remove("김태호")
print(java)
# {'양세형', '유재석'}