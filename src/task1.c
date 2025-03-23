/* task1.c */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool is_palindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <размер массива>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Размер массива должен быть натуральным числом.\n");
        return 1;
    }

    int arr[n];
    srand(time(NULL));

    printf("Сгенерированный массив: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; 
        printf("%d ", arr[i]);
    }
    printf("\n");

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_palindrome(arr[i])) {
            count++;
        }
    }

    printf("Количество палиндромов в массиве: %d\n", count);
    return 0;
}