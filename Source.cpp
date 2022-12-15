#include <iostream>
#include<conio.h>

using namespace std;

int main() {

    const int N = 10;
    int array[N];
    int sum = 0;
    int count = 0;
    int el = 10000;
    for (int j = 0; j < N; j++) {
        cout << "array[" << j << "]= ";
        cin >> array[j];     //введення чисел масиву

    }
    for (int j = 0; j < 10;j++)
        cout << array[j] << " ";//виведення чисел усього масиву
    for (int j = 0; j < N; j++)
        if (el > array[j])
            el = array[j];//знаходження мінімального елемента масиву


    cout << "\n" << el << " min" << endl;//виведення мінімального елемента масиву


    int i = 0;
    while (array[i++] >= 0);//пропускаємо всі не від'ємні і перший від'ємний
    while (array[i] >= 0) {//поки елементи не від'ємні
        sum += array[i++];//сумуємо їх
    }

    cout << "\n" << sum << endl;//виводить значення суми



    system("pause");
}