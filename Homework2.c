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