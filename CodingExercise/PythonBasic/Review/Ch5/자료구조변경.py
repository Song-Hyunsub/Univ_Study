menu = {"커피", "우유", "주스"}
print(menu, type(menu))
# {'우유', '커피', '주스'} <class 'set'>

menu = list(menu)
print(menu, type(menu))
# ['우유', '커피', '주스'] <class 'list'>

menu = tuple(menu)
print(menu, type(menu))
# ('우유', '커피', '주스') <class 'tuple'>

menu = set(menu)
print(menu, type(menu))
# {'우유', '커피', '주스'} <class 'set'>