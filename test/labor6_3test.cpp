#include <gtest/gtest.h>
#include "../labor6_3.hpp"  // Замінити на ім'я файла з кодом програми

// Тест для функції CountOddtemp
TEST(CountOddTempTest, HandlesPositiveNumbers) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    EXPECT_EQ(CountOddtemp(arr, size), 3);  // Очікується, що в масиві є 3 непарні числа
}

TEST(CountOddTempTest, HandlesNoOddNumbers) {
    int arr[] = {2, 4, 6, 8};
    int size = 4;

    EXPECT_EQ(CountOddtemp(arr, size), 0);  // Очікується, що в масиві немає непарних чисел
}

TEST(CountOddTempTest, HandlesAllOddNumbers) {
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;

    EXPECT_EQ(CountOddtemp(arr, size), 5);  // Очікується, що всі числа непарні
}

// Тест для функції Countodd
TEST(CountOddTest, HandlesPositiveNumbers) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    EXPECT_EQ(Countodd(arr, size), 3);  // Очікується, що в масиві є 3 непарні числа
}

TEST(CountOddTest, HandlesNoOddNumbers) {
    int arr[] = {2, 4, 6, 8};
    int size = 4;

    EXPECT_EQ(Countodd(arr, size), 0);  // Очікується, що в масиві немає непарних чисел
}

TEST(CountOddTest, HandlesAllOddNumbers) {
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;

    EXPECT_EQ(Countodd(arr, size), 5);  // Очікується, що всі числа непарні
}

// Можна також додати тест для перевірки роботи з великими розмірами масивів
TEST(CountOddTest, HandlesLargeArray) {
    int size = 100;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = 2 * i + 1;  // Створюємо масив з непарних чисел
    }

    EXPECT_EQ(CountOddtemp(arr, size), size);
    EXPECT_EQ(Countodd(arr, size), size);

    delete[] arr;
}

