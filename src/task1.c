/* task1.c */
#include <stdbool.h>
#include <stdio.h>

bool is_palindrome(int num) {
  int original = num;
  int reversed = 0;
  int remainder;

  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }

  return original == reversed;
}

int main() {
  int n;

  printf("Введите размер массива: ");
  scanf("%d", &n);

  int arr[n];

  printf("Введите %d натуральных чисел: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (is_palindrome(arr[i])) {
      count++;
    }
  }

  printf("Количество палиндромов в массиве: %d\n", count);

  return 0;
}
