#include <iostream>
#include <queue>

int main() {
    // ��������� ����� ��� ����� �����
    std::queue<int> numberQueue;

    // ��������� ����� �� �����
    numberQueue.push(5);
    numberQueue.push(12);
    numberQueue.push(7);
    numberQueue.push(20);
    numberQueue.push(15);
    numberQueue.push(8);

    // ���������� ������� ������ �������� � ����
    int evenCount = 0;
    int size = numberQueue.size(); // �����'������� ���������� ����� �����

    for (int i = 0; i < size; ++i) {
        int number = numberQueue.front(); // �������� ������ �������
        numberQueue.pop(); // ��������� ���� � �����

        // ����������, �� � ����� ������
        if (number % 2 == 0) {
            evenCount++;
        }

        // ��������� ����� ����� � �����
        numberQueue.push(number);
    }

    // ���� ����������
    std::cout << "Count of non add numbers in cherzi: " << evenCount << std::endl;

    return 0;
}
