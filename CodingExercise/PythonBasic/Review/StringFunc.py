python = "Python is Amazing"
print(python.lower())
print(python.upper())
print(python[0].isupper())
print(len(python))
print(python.replace("Python", "Java"))
index = python.index("n")
print(index)
index = python.index("n", index + 1)    # 두 번째 n의 위치를 찾음
print(index)

print(python.find("Java"))      # 원하는 값이 없으면 -1 반환
# print(python.index("Java"))   # 원하는 값 없으면 오류 처리

print(python.count("n"))