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
        cin >> array[j];     //�������� ����� ������

    }
    for (int j = 0; j < 10;j++)
        cout << array[j] << " ";//��������� ����� ������ ������
    for (int j = 0; j < N; j++)
        if (el > array[j])
            el = array[j];//����������� ���������� �������� ������


    cout << "\n" << el << " min" << endl;//��������� ���������� �������� ������


    int i = 0;
    while (array[i++] >= 0);//���������� �� �� ��'��� � ������ ��'�����
    while (array[i] >= 0) {//���� �������� �� ��'���
        sum += array[i++];//������ ��
    }

    cout << "\n" << sum << endl;//�������� �������� ����



    system("pause");
}