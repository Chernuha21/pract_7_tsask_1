#include <iostream>
#include <queue>

int main() {
    // Створення черги для цілих чисел
    std::queue<int> numberQueue;

    // Додавання чисел до черги
    numberQueue.push(5);
    numberQueue.push(12);
    numberQueue.push(7);
    numberQueue.push(20);
    numberQueue.push(15);
    numberQueue.push(8);

    // Обчислення кількості парних елементів у черзі
    int evenCount = 0;
    int size = numberQueue.size(); // Запам'ятовуємо початковий розмір черги

    for (int i = 0; i < size; ++i) {
        int number = numberQueue.front(); // Отримуємо перший елемент
        numberQueue.pop(); // Видаляємо його з черги

        // Перевіряємо, чи є число парним
        if (number % 2 == 0) {
            evenCount++;
        }

        // Повертаємо число назад у чергу
        numberQueue.push(number);
    }

    // Вивід результату
    std::cout << "Count of non add numbers in cherzi: " << evenCount << std::endl;

    return 0;
}
