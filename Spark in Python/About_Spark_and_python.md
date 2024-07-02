
* What is a Big Data? <br>
RAM보다 더 큰 값을 지닌 데이터의 경우
(1) SQL 데이터베이스를 활용해 Storage를 RAM 대신 Hard Drive로 옮기거나
(2) 분산 시스템을 활용해 여러 기계와 컴퓨터로 데이터를 분배하는 것
=> 여기에서 Spark가 쓰인다!!
<br>
* Spark : 데이터를 램에 할당하지 못할 때, 또 단일 기계에 할당하는 것이 불가능해졌을 때 쓰인다 <br>
<br>
* 로컬 시스템과 분산 시스템의 차이에서 나타는 분산 시스템의 특징 <br>
(1) 성능이 떨어지는 서버나 컴퓨터라 분산 시스템을 잘 활용하여 연산 과정을 분배해 작동하게 할 수 있음 <br>
=> 스파크에서 가장 중요한 점!! <br>
(2) 특정 컴퓨터의 내부 결함이나 고장이 발생한 경우에도 기능을 유지한다.(내고장성) <br>
 <br>
* 하둡 <br>
  - 방대한 양의 파일을 여러 컴퓨터에 분산시키는 방법 중 하나 <br>
  - HDFS라는 체제를 사용 <br>
    HDFS : 사용자가 아주 큰 용량의 데이터 세트를 여러 컴퓨터에 분배함 <br>
    (데이터 블록을 복제해 내고장성을 높여, 한 컴퓨터가 고장나도 다른 컴퓨터에 복제된 데이터 블록으로 연산이 가능한 특성
    ,MapReduce도 활용) <br>
    MapReduce : 분산된 데이터 세트의 계산을 가능하게 한다. <br>
    데이터 블록이 작을 수록 병렬 처리는 더 많이 이뤄지고 이 과정은 노드의 고장으로 인한 데이터의 손실을 방지한다. <br>

* Spark <br>
(0) 목차 <br>
 - Spark <br>
 - Spark vs MapReduce <br>
 - Spark RDDs (회복성 분산 데이터) <br>
 - Spark DataFrames <br>
(1) Spark <br>
 - 가장 최신 기술 중 하나로 큰 데이터를 쉽고 빠르게 처리하며 Apache 회사의 오픈 소스 프로젝트이기에 모든 소스 코드에 접근이 가능 <br>
 - 쉽고 빠른 기능 덕분에 폭발적인 인기를 얻었음 <br>
 - MapReduce의 대안 정도로 볼 수도 있음 <br>
 - 하둡과 스파크를 연관 지었던 맥락보다는 MapReduce와 스파크를 연관지어 생각하면 된다. <br>
 - 다양한 서식에 저장된 데이터를 사용할 수 있으며, 예시는 아래와 같다. <br>
   * 카산드라 <br>
   * AWS S3 <br>
   * HDFS <br>
(2) Spark vs (하둡)MapReduce <br>
 - Spark는 MapReduce보다 100배 더 빠르게 운용될 수 있다.
    => How?
     MapReduce는 Map과 Reduce 작업이 끝날 때마다 디스크에 파일을 기록하지만
     Spark는 메모리에 데이터 기록을 한다. => 램과 비슷한 원리로 작동하며, 메모리가 찬 경우, 데이터를 디스크에 기록
     (단일 컴퓨터에 있는 램이 부족할 경우 하드 드라이브에 데이터를 기록)
(3) Spark RDDs <br>
- Resilient Distributed Dataset (RDD) - 회복성 분산 데이터
- 분산된 데이터의 집합, 내고장성, 데이터의 병렬 운용(즉, 데이터를 나눌 수 있는 능력)
- 많은 데이터 소스를 쓸 수 있음
- 변환되지 않고, 지연된 연산을 하며, 캐싱이 가능하다.
- Spark에는 크게 Transformations(변환 - 알아야 할 레시피)과 Actions(레시피를 실행으로 옮기는 행동 그 자체) 2가지의 행동이 있다.
- '변환'의 예) 데이터의 평균값, 특정 데이터 값의 개수 세기, 어떤 열이 2의 숫자보다 큰 값을 가지는지 검색
- 스파크 구문을 입력할 때, RDD 구문과 데이터프레임 구문이 나타나는 경우를 보게 됨.
- Spark는 데이터프레임 기반의 문법을 차용하는 쪽으로 가고 있다. (Pandas, R, 엑셀 스프레시트)
- RDD : 데이터가 물리적으로 저장되는 방법
(4) Spark DataFrames <br>
- 정의 : 스파크의 머신러닝을 위해 쓰이는 표준 방법
- Java, Scala, Python, R언어를 사용할 수 있기에 용이
- SQL, 스트리밍, 복잡한 분석 등을 통합해 사용할 수 있어 범용성이 좋음


* Spark SQL Guide <br>
  => https://spark.apache.org/docs/latest/sql-getting-started.html
* MLlib (Machine Learning Library) Guide <br>
  => https://spark.apache.org/docs/latest/ml-guide.html
* Clustering <br>
  => https://spark.apache.org/docs/latest/ml-clustering.html
* Collaborative Filtering => 클릭한 후 스크롤을 내려 전체 예시뿐만 아니라 API 문서 확인 가능  <br>
  => https://spark.apache.org/docs/latest/ml-collaborative-filtering.html
