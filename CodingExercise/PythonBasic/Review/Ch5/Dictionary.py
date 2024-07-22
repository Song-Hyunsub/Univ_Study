cabinet = {"A-3":"유재석", "B-100": "김태호"}
cabinet["A-3"] = "김종국"
cabinet["C-20"] = "조세호"
print(cabinet)
# {'A-3': '김종국', 'B-100': '김태호', 'C-20': '조세호'}

del cabinet["A-3"]  # A-3 삭제
print(cabinet)
#{'B-100': '김태호', 'C-20': '조세호'}

print(cabinet.get("A-3"))
# None

print(cabinet.get(5, "사용 가능"))
# 사용 가능

print(cabinet.get("B-100"))
# 김태호

print(cabinet["B-100"])
# 김태호

print(cabinet.keys())
# dict_keys(['B-100', 'C-20'])

print(cabinet.values())
# dict_values(['김태호', '조세호'])

# key, value 쌍으로 출력
print(cabinet.items())
# dict_items([('B-100', '김태호'), ('C-20', '조세호')])

cabinet.clear()
print(cabinet)
# {}