# 머신러닝 라이브러리(MLlib)

- Spark 2.0 Dateframe 구문을 사용함
- 단점: 데이터 형식이 필요 (하나 또는 두 개의 열만 존재할 수 있음)
 지도 학습 알고리즘의 경우, 두 열은 각각 특징과 라벨임.
 반면 비지도 학습은 특징 열만 있음.
 다수의 특징 열이 있는 데이터 세트의 경우 모든 데이터의 각 항목을 단일 열로 압축해야 함. 
 행은 이전 항목으로 구성된 배열임.
- 전반적으로 다른 머신러닝 라이브러리보다 약간 더 많은 데이터 처리 작업 필요
- 데이터 프로세스에서의 장점 : 정확히 동일한 구문이 분산 데이터에서 작동한다는 것.
 => 방대한 양의 데이터 세트가 있더라도 이에 대한 새로운 구문을 학습할 필요가 없음
- 다양한 벡터 indexer를 사용해 데이터 처리를 좀 더 쉽게 수행할 수 있다.
- MLlib 학습에서 가장 중요한 것 
  + 문서에 익숙해지는 것
  + 단순 암기뿐만 아니라 정보를 찾는 기술을 습득해야만 훌륭한 Spark & Python 개발자로 거듭남
- 해당 강의 : 각 머신러닝 알고리즘 섹션에 적절한 스파크 MLlib 문서를 참조하는 방식으로 진행됨
