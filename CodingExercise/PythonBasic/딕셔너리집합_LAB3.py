#CH09-Lab03 멘델의 유전 법칙 시뮬레이션
import random

descendant = [ ]

def make_descendant():
    h1 = random.randrange(0, 2)
    h2 = random.randrange(0, 2)
    if h1==0 and h2==0:
        h = 'RR'
    elif h1==0 and h2==1:
        h = 'Rr'
    elif h1==1 and h2==0:
        h = 'rR'
    else:
        h = 'rr'
    descendant.append(h)

def count_descendant(d):
    d_dict={ }
    for n in d:
        if n in d_dict:
            d_dict[n] += 1
        else:
            d_dict[n] = 1
    print(d_dict)
    cal_rate(d_dict)

def cal_rate(d):
    rate = (d['RR']+d['Rr']+d['rR'])/d['rr']
    print(rate, ": 1")

for n in range(100):
    make_descendant()

count_descendant(descendant)
