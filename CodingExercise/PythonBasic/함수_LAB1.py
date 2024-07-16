#1번을 해보세요!
def BMI(height, weight):
    result = weight / (height ** 2)
    return result;

#2번을 해보세요!
def result_print(result):
    if result < 18.5:
        print("당신은 저체중입니다.")
    elif result < 23:
        print("당신은 정상입니다.")
    elif result < 25:
        print("당신은 과체중입니다.")
    elif result < 30:
        print("당신은 경도비만입니다.")
    else :
        print("당신은 고도비만입니다.")

h = float(input("키를 m단위로 입력하세요: "))
w = float(input("몸무게를 kg단위로 입력하세요: "))

result = BMI(h, w)
result_print(result)
