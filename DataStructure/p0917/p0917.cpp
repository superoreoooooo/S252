#include <iostream>

using namespace std;

void p7();
void ex2_2();
void ex2_3();
void ex2_6();

int main(int argc, char *argv[])
{
    // p7();
    // ex2_2();
    // ex2_3();
    ex2_6();

    return 0;
}

void p7()
{
    char c, c_array[100];
    int i, i_array[100];
    short s, s_array[100];
    float f, f_array[100];
    long l, l_array[100];

    cout << "char  c size : " << sizeof(c) << "\tchar  c_array size : " << sizeof(c_array) << endl;
    cout << "int   i size : " << sizeof(i) << "\tint   i_array size : " << sizeof(i_array) << endl;
    cout << "short s size : " << sizeof(s) << "\tshort s_array size : " << sizeof(s_array) << endl;
    cout << "float f size : " << sizeof(f) << "\tfloat f_array size : " << sizeof(f_array) << endl;
    cout << "long  l size : " << sizeof(l) << "\tlong  l_array size : " << sizeof(l_array) << endl;
}

void ex2_2()
{
    int grades[]{91, 86, 97};

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << "학년 : 총점 = " << grades[i] << ", 등급 = ";
        if (grades[i] >= 90)
            cout << "A" << endl;
        else if (grades[i] >= 80)
            cout << "B" << endl;
        else if (grades[i] >= 70)
            cout << "C";
    }
}

void ex2_3()
{
    int a;

    do
    {
        cout << "input number between (1 ~ 9)";
        cin >> a;
        if (a >= 1 && a <= 9)
        {
            break;
        }
    } while (true);

    for (int i = 1; i <= 9; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }
}

void ex2_6() {
    int array[2][3][4];
    int counter = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                array[i][j][k] = ++counter;
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << "array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
            }
        }
    }
}