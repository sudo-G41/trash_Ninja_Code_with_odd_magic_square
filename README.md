# trash_Ninja_Code_with_odd_magic_square
개쓰래기 코드지만 난 좋다 ㅎㅎ<br>
~~사실 아직 미완성~~ 완성<br>
# 이것은 뭐하는 코드인가
## 왜 이걸 만들었는가?
알고리즘 문제 풀다 개 쓰래기같은 코드가 떠올라 만들었다
## 무엇에 쓰는 물건인가?
이거슨 홀수 마방진 만드는 코드로 [정올](http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1338&sca=2020)에 제출하려 만들었다
## 왜 이따구로 짜는가?
나도 몰라 정상적으로 짜도 되긴 하는데 코드 라인 줄이고 난해하게 짜고 싶어
## 어떤 이득이 있는가?
사실 반복문 보면 2중 반복문 형식으로 짜는걸 어거지로 반복문 하나만 쓰게 하는건데 이게 횟수가 많아지다보면 속도 면에서 좀더 이득이 있긴 한데 굳이? 써야 하나 싶긴 함 왜냐 저 복잡한 계산식 속에 꼬인 부분이 있을 지도 모르거든 허허
## 마지막으로 할말
메롱! ㅎㅎ
## 추가사항
d.cpp가 정올 용으로 홀수 마방진만 작동<br>
e.cpp는 백준 풀이를 위해 홀짝 관계없이 작동하기 위해 만드는 중  
nXn n이 4의 배수일때 마방진 함수 작성
4의 배수가 아니면서 2의 배수인 마방진 완성(귀찮아서 그냥 ㅎ.....)

## 의미 없지만 그동안 이런 코드를 위해 굳이 생각해본것
1. char&15 <= 숫자로 된 문자를 형변환만 하면 숫자로 바꿀 수 있다!  
2. int&1 <= 홀수인 경우 1 짝수인 경우 0 출력  
3. 현 index를 n, 배열 size를 k라 할 경우 ++n%k라는 유명한 공식??이 있다.(원형큐 같은데에 많이 쓰이는 그것!)  그 반대는 어떻게 하는가? 바로 이것 ((k-1)-(k-n)%k)


솔직히 아는 사람들은 알 수도 있고 이미 유명할 수도 있지만 난 이것들을 그런 사람들에게 배우거나 찾아본것이 아니고 내가 직접 이것저것 생각해보면서 찾아낸것이다.  
그런데 굳이 이거 써야 하냐 묻는다면 하지마라 의미 없다... 잘 생각해보면  
1.같은 경우 C++은 atoi쓰면 되고 JAVA도 Integer.parseInt같은 좋은 함수도 있고 char-'0'해도 된다.  
2.같은 경우 유명한 int%2하면 된다. 누구나 쓰는 해당 정수를 2로 나눈 나머지값만 확인하면 된다고!!!!  
3.같은 경우 그냥 조건문 쓰면 되고(삼항연산자도 가능) 그냥 할짓없어서 사용하는 뻘짓이다 헤헿  
## 목표
c, c++, cs, java, python요게 내가 할줄아는(반복문, 조건문, 함수 정도) 언어인데 다 만들어보고 싶다.
