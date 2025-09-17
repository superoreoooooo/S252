#include <iostream>

using namespace std;

#pragma region "define area"
void ex2_1();
void ex2_2();
void ex2_3();
void ex2_4();
void ex2_5();
void ex2_6();
void ex2_7();
void ex2_8();
void ex2_9();
void ex2_10();
void ex2_11();
#pragma endregion

int main(int argc, char *argv[])
{

#pragma region "execution area"
    ex2_1();
    ex2_2();
    ex2_3();
    ex2_4();
    ex2_5();
    ex2_6();
    ex2_7();
    ex2_8();
    ex2_9();
    ex2_10();
    ex2_11();
#pragma endregion

    return 0;
}

void ex2_1()
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

void ex2_4()
{
    char str[20] = "Data Structure!";
    int i;

    printf("\n str[] : ");

    for (i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
    }

    getchar();
}

void ex2_5()
{
    int i, length = -1;
    char str[50];
    printf("\n 문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);
    printf("\n 입력된 문자열은 \n");
    for (i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
        length += 1;
    }
    printf(" 입니다.");
    printf("\n\n 입력된 문자열의 길이 = %d \n", length);
    getchar();
}

void ex2_6()
{
    int array[2][3][4];
    int counter = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                array[i][j][k] = ++counter;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << "array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
            }
        }
    }
}

void ex2_7()
{
    int i, j, k;
    char student[2][3][20];

    for (i = 0; i < 2; i++)
    {
        printf("\n 학생%d의 이름 : ", i + 1);
        fgets(student[i][0], sizeof(student), stdin);
        printf("\n 학생%d의 학과 : ", i + 1);
        fgets(student[i][1], sizeof(student), stdin);
        printf("\n 학생%d의 학번 : ", i + 1);
        fgets(student[i][2], sizeof(student), stdin);
    }

    for (i = 0; i < 2; i++)
    {
        printf("\n\n 학생 %d", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("\n\t");
            for (k = 0; k < student[i][j][k] != '\0'; k++)
            {
                printf("%c", student[i][j][k]);
            }
        }
    }

    getchar();
}

void ex2_8()
{
    int i = 10, j = 20;
    int *ptr;

    printf("\n i의 값 = %d \n j의 값 = %d", i, j);
    printf("\n i의 메모리 주소(&i) = %u", &i);
    printf("\n j의 메모리 주소(&j) = %u", &j);

    ptr = &i;
    printf("\n\n << ptr=&i 실행 >>");
    printf("\n ptr의 메모리주소(&ptr) = %u", &ptr);
    printf("\n ptr의 값(ptr) = %u", ptr);
    printf("\n 참조값(*ptr) = %d", *ptr);

    ptr = &j;
    printf("\n\n << ptr=&j 실행 >>");
    printf("\n ptr의 메모리주소(&ptr) = %u", &ptr);
    printf("\n ptr의 값(ptr) = %u", ptr);
    printf("\n 참조값(*ptr) = %d", *ptr);

    i = *ptr;
    printf("\n\n << i=*ptr 실행 >>");
    printf("\n i의 값 = %d", i);

    getchar();
}

void ex2_9()
{
    int i;
    char string1[20] = "Dreams come true!", string2[20], *ptr1, *ptr2;

    ptr1 = string1;
    printf("\n string1의 주소 = %u \t ptr1 = %u", string1, ptr1);
    printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
    printf("\n\n %s", ptr1 + 7);
    ptr2 = &string1[7];
    printf("\n %s \n\n ", ptr2);

    for (i = 16; i >= 0; i--)
    {
        putchar(*(ptr1 + i));
    }

    for (i = 0; i < 20; i++)
    {
        string2[i] = *(ptr1 + i);
    }

    printf("\n\n string1 = %s", string1);
    printf("\n string2 = %s", string2);

    *ptr1 = 'P';
    *(ptr1 + 1) = 'e';
    *(ptr1 + 2) = 'a';
    *(ptr1 + 3) = 'c';
    *(ptr1 + 4) = 'e';

    printf("\n\n string1 = %s\n", string1);

    getchar();
}

void ex2_10()
{
    int i;
    char *ptrArray[4] = {"Korea", "Seoul", "Mapo", "152번지 2_/3"};

    for (i = 0; i < 4; i++)
    {
        printf("\n %s", ptrArray[i]);
    }

    ptrArray[2] = "Jongno";
    printf("\n\n");

    for (i = 0; i < 4; i++)
    {
        printf("\n %s", ptrArray[i]);
    }

    getchar();
}

void ex2_11()
{
    char *ptrArray[2];
    char **ptrptr;
    int i;

    ptrArray[0] = "Korea";
    ptrArray[1] = "Seoul";

    ptrptr = ptrArray;
    printf("\n ptrArray[0]의 주소 (&ptrArray[0]) = %u", &ptrArray[0]);
    printf("\n ptrArray[0]의 값 (ptrArray[0]) = %u", ptrArray[0]);
    printf("\n ptrArray[0]의 참조 문자 (*ptrArray[0]) = %c", *ptrArray[0]);
    printf("\n ptrArray[0]의 참조 문자열 (*ptrArray[0]) = %s \n", *ptrArray);

    printf("\n ptrArray[1]의 주소 (&ptrArray[1]) = %u", &ptrArray[1]);
    printf("\n ptrArray[1]의 값 (ptrArray[1]) = %u", ptrArray[1]);
    printf("\n ptrArray[1]의 참조 문자 (*ptrArray[1]) = %c", *ptrArray[1]);
    printf("\n ptrArray[1]의 참조 문자열 (*ptrArray[1]) = %s \n", *(ptrArray + 1));

    printf("\n ptrptr의 주소 (&ptr) = %u", &ptrptr);
    printf("\n ptrptr의 값 (ptrptr) = %u", ptrptr);
    printf("\n ptrptr의 1차 참조값 (*ptrptr) = %u", *ptrptr);
    printf("\n ptrptr의 2차 참조값 (**ptrptr) = %c", **ptrptr);
    printf("\n ptrptr의 참조 문자열 (*ptrArray[0]) = %s \n", *ptrptr);

    printf("\n\n *ptrArray[0] : ");
    for (i = 0; i < 5; i++)
    {
        printf("%c", *(ptrArray[0] + i));
    }

    printf("\n **ptrptr : ");
    for (i = 0; i < 5; i++)
    {
        printf("%c", *(*ptrptr + i));
    }

    printf("\n *ptrArray[1] : ");
    for (i = 0; i < 5; i++)
    {
        printf("%c", *(ptrArray[1] + i));
    }

    printf("\n *(ptrptr+1) : ");
    for (i = 0; i < 5; i++)
    {
        printf("%c", *(*(ptrptr + 1) + i));
    }

    getchar();
}