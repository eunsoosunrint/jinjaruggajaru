# 진짤루에여 가짤루에여?! (C 문제 풀이)
> Tag: #난이도(최하) #반복문


## 문제
> 진짤루에여 가짤루에여?! 네?!<br/>
> 가짤루 아니고 진짤루에여 진짤루 아니고 가짤루에여?! 네?!!

해당 말은 프로미스나인 송하영이 2020년부터 밀고 있는 유행어이다. 프로미스나인의 팬인 인수는 해당 유행어를 따라하고 싶지만 너무 못한다. ~~그냥 나가야한다~~ 암튼 은수는 송하영이 라이브에서 저말을 했을때 전에 했던 말이 진짤루인지 가짤루인지 진위 여부를 판단하고 싶다.
<br/><br/>
진짤루는 하면 할수록 전 말의 진위성이 높아지며, 가짤루는 진위성이 낮아진다.<br/>
가짤루는 연속되어 사용시, 개수가 짝수면 진위성이 높아지고, 홀수면 낮아진다.<br/>
<br/>

## 입력
~~입력은 은수가 저번 문제를 출제할 때 한국어를 사용했다가 ISO C를 찾아가고 싶어져서 영어로 입력한다.~~
진짤루는 JinJaru, 가짤루는 GgaJaru라고 입력한다. 대소문자는 달라질 수 있다.<br/>
<br/>
첫번째 줄에는 진짤루와 가짤루가 몇번 입력되는지가 주어진다.<br/>
두번째 줄에는 진짤루와 가짤루가 공백으로 구분되어 주어진다.<br/>
<br/>

## 출력
첫 번째 줄에 전 말의 진위성이 출력된다.

## 입력 예시
```text
5
JinJaru JinJaru JinJaru gGajaRu gGajAru
```

## 출력 예시
```text
4
```