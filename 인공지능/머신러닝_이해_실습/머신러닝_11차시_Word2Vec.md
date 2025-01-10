## 1. TF-IDF와 Bag of Words의 한계  
  
Bag of Words 방식 : 단어의 중요도 및 빈도수 분포로 문서의 성질 파악  
Bag of Words의 한계 : 단어 사이의 관계와 거리를 알 수는 없다.  
Bag of Words의 한계를 극복한 것 -> Word2Vec  
(공통점 : 완전히 똑같은 단어의 쌍이나 문장의 쌍은 0이 되고 두 개의 차이점이 클수록 거리가 멀다)  
  
## 2. Word2Vec의 의미  
  
Word2Vec이란? : Word를 원하는 size의 벡터 형식으로 embedding한 것  
방대한 텍스트를 분석하여 '같이 나오는 단어를 예측'하는 신경망 모델을 만들어 볼 것  
Skip-gram : 중심 단어에서 주변 단어를 예측하는 모델  
<br>
<img width="522" alt="Skip-gram" src="https://github.com/user-attachments/assets/028b5857-0622-4cf3-ac93-a31d5f86958e" />
<br>
W'(N*V)  
N = 사용자가 설정  
V = 사전 크기  
Word2Vec의 훈련과정 확인 사이트 : https://ronxin.github.io/wevi/  
최종적으로 훈련된 단어의 가중치를 통하여 담어 임베딩 벡터를 구할 수 있음  
<br>
<img width="388" alt="이차원 그래프" src="https://github.com/user-attachments/assets/dbc8077b-691d-441a-9bc3-a0d1df8524a4" />
<br>
가중치 행렬을 2개 차원으로 축소하여 2차원 그래프로 나타낸 것  
=> 최종적으로 W는 단어의 임베딩 벡터를 표현하게 됨  
  
Word2Vec의 장점 : 단어를 하나의 수치형으로 나타낼 수가 있어서 텍스트마이닝이나 NLP에서 많은 수치형 알고리즘에 적용을  
해 볼 여지가 생긴다. 이를 이용하여 단어 간의 거리를 구할 수도 있고 텍스트 간의 거리를 구할 수도 있다.  
단어를 벡터로 취급하기 때문에 거리와 방향을 구할 수도 있다. 반면에 기존의 Bag of Words방식이나 Tf-idf는 단지 스칼라 정보만 주게 된다.  
  
   
   
## 실습 내용)  
  
정규화 -> 어근 바꾸기 -> 명사/형용사/동사 걸러내기  
word2vec.Word2Vec 함수  
- 2차원 벡터 : size=200  
- 3차원 벡터 : size=300  
- 크기가 클 수록 자세한 word 정보를 담을 수 있음. 그러나 속도는 느려짐.  
- window : word의 범위 => window size가 10이면 앞뒤로 10개씩의 단어를 포함한다.  
- sg : [1일 경우 skip-gram, 0일 경우 CBOW] => skip-gram이 성능이 더 좋음  
- 벡터는, 기하학적인 정보를 담고 있기 때문에, 덧셈, 뺄셈을 할 수 있고, 비슷한 단어를 찾아 낼 수 있고, 해당 단어와의 유사도를 정의할 수 있으며, 단어와 단어 사이의 거리도 정의할 수 있다.  
- 차원 줄여주기 => 2차원 그래프를 그리기 위함 => 2차원 그래프의 좌표값을 얻게 됨  
- labels = db.labels_ : label값의 군집 번호가 찍힘  
- myCounter = collection.Counter(words_all) : words_all을 Counter 데이터로 바꿈  
- radius = np.array([i for i in list(myCounter.values())]) : word의 중요도 값을 추출  
- .annotate : 실제 word의 값  
- 단어 임베딩의 크기(size) N을 정해줘야 함  
- 임베딩의 크기는 skip gram 알고리즘에서 hidden layer의 크기에 해당한다.
<br>
<img width="610" alt="word2vec" src="https://github.com/user-attachments/assets/17872897-013e-4043-b4f2-10e8c5411cda" />
<br>  
- 원의 지름 : tf-idf의 score를 의미  
- 단어의 가까움의 정도가 나타남  
- tf-idf score와 Word2Vec의 정보를 같이 볼 수 있음   
  
