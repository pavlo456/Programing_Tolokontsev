#include <stdio.h>
        int main () {
        int text; // змінна для використання команди
        printf("Введіть команду\n 1 для довжини\n 2 для площі\n 3 для об'єму\n");
        scanf("%d", &text);
        int rad = 13; // Заданий радіус
        const float pii = 3.14; // Число Пі
        printf("Визначення  довжини площi та об`эму за заданим радiусом r=%d\n", rad); // вивід умови задачі
        if (text == 1 )  // Якщо змінна для команди (text) =s то виконуются наступне
{
        float lon = 2 * pii * rad;      // Розрахунок площі за формулою
        printf("\nS=%f", lon); }                // Вивід результату
        else if (text == 2 )                     // Якщо змінна text=l то виконується наступне
{
        float squ = pii * rad * rad;            // Розрахунок довжини
        printf("\nL=%f", squ); }                // Вивід результату
        else if (text == 3 )                     // Якщо змінна text=v то виконуєтся наступне
{
        float vol = 4.0 / 3.0 * pii * rad * rad * rad;  // Розрахунок об'єму
        printf("\nV=%f ", vol); }                                       // Вивід результату
        else printf ("Помилка вводу");                                  // Якщо text=іншим символам виводится помилка
        return 0;
}
