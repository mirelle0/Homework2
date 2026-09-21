# Домашнее задание к работе 2
## Условие задачи:
Мальчик может бегать в три раза быстрее, чем ходить. Скорость его ходьбы равна 4 км/час. Он принял участие в марафонском забеге, но сошёл с дистанции, пробежав только x км. Сколько времени он затратил на преодоление этого расстояния?

## 1. Алгоритм и блок-схема
### Алгоритм
```
1)Начало.
2)Объявить константу:
walk_speed = 4 (км/ч) — скорость ходьбы мальчика.
3)Вычислить скорость бега:
run_speed = walk_speed * 3
4)Ввести исходные данные:
x — расстояние, которое пробежал мальчик (км).
5)Вычислить затраченное время:
time = x / run_speed
6)Вывести результаты расчётов с подстановкой всех значений в текст.
7)Конец.
```
### Блок-схема
![Image alt](https://github.com/mirelle0/Homework2/edit/master/shema2.png)


(https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=shema.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22LXyu-JH_JVS77Rq2Kug3%22%3E7Zpdb5swGIV%2FDdJWaZUxH0kvQ5J20zRpai52WSFwg1UHI3AK3a%2FfazBfCVFpC1EzcVHHHIxNzoEnNlQzlrvsLnaj4Bf3CdMw8jPNWGkY66ZuwodUXgplZumFsI2prxrVwob%2BJUpESt1TnySthoJzJmjUFj0ehsQTLc2NY562mz1y1h41crfkSNh4LjtW%2F1BfBIU6t1Ctfyd0G5Qj60jt2bllYyUkgevztCEZa81YxpyLorbLloRJ80pfiuNuT%2BytTiwmoehzwL13j2Zr%2F3YVej%2Bfs4WZbub8Gz7uRXWciJfSA%2BgH7IYNJw2oIJvI9eSeFBIHLRA7Bls6VOErRuRHmEBkSin6enbZXvWlBBILkjXGU6d8R%2FiOiPgFmgQNV21lYVonoM%2BUpnoxykTUdVa67qr8t1XPtUVQUS69wTGjj2Pw5UTbmi7nEhHzJ7LkjMcghjyUFj9Sxg4kl9FtCJsejEhAd6R9FK7Rhdqxo74vh3Zivg99Ik8fdZoP8s1Klg7S4LTms7IOpZOX63cFZBwHZLfzMZHVysewRsrH7pNP%2B5otbkvpmO8mQWVff9vz614K2VZS8LoADy4%2BZbfyS6NrW1alH2Y%2BFo0BWJTLnhK%2Bl745IRdecDK9gW4d4yAZ3L5z5mPdObM%2ByZRWQiuXMcI4OLoDNyISUzgNmUN73%2B96x9vx9EgzUv7oDIerjrsBH%2BIKtU3XzbFcn186r%2FLSwYpOsjRzHzH6kjMMNXimN8rqCKjf5vWCfPO8BPwg1bGqLPJy%2BXWwyA%2FuMwOfK3K912%2FUxMDTDKxmF8NnY04UPEnB6pjhbbcuGIOpy54ekohAC7hOpYTMc1FqxEimmdoHKVUdMnw201ztNKWM0daW%2BiVP1uJ9eACpFreu4M8YjVq6da6IbiZqfYxa1ZOawbMpB5qo1UEtUx%2FN9o5HkRdDLQHRVsDyaSIe5MpSGoJRg2jnmWyNmBGesPUxbJmjLddxr%2BX6%2F4CtDtdfw5aFRrO910r8k2KrfDKma3On4%2FmYsTiYfi3bOFs2YCfrBQXrWj5bK9MaIORXuDdiyL3W%2FRP3TnPPGm2RiXutdi7x5aM92vID91qYf2ZoLRqgWqlH8RJj9lCTrFdePNrvePMIm%2FV7%2Bnxf478djPU%2F%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    float walk_speed = 4.0;
    float run_speed;
    float dist_x;
    float time;
    run_speed = walk_speed * 3.0;
    printf("Введите расстояние x (в км), которое пробежал мальчик: ");
    scanf("%f", &dist_x);
    time = dist_x / run_speed;
    printf("Результаты:\n");
    printf("Скорость ходьбы: %.2f км/ч\n", walk_speed);
    printf("Скорость бега:   %.2f км/ч\n", run_speed);
    printf("Пройденное расстояние: %.2f км\n", dist_x);
    printf("Затраченное время: %.4f часов\n", time);
    printf("Это составляет примерно %.2f минут.\n", time * 60);
}
```
### 3. Результаты работы программы
```
(Ниже приведён пример вывода для x = 6. Если запускаете с другим числом — замените вывод на свой.)

Введите расстояние x (в км), которое пробежал мальчик: 6

Результаты:
Скорость ходьбы: 4.00 км/ч
Скорость бега:   12.00 км/ч
Пройденное расстояние: 6.00 км
Затраченное время: 0.5000 часов
Это составляет примерно 30.00 минут.
```
### 4. Информация о разработчике
Дегтярева Полина, бИЦТ-262
