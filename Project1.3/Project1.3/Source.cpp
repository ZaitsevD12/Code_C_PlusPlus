if (!false)
{
    std::cout << "If 1" << std::endl;
    int y;
    int x = 9;
    x = 5 + 8;
    std::cout << x << std::endl;
    x = 5 - 8;
    std::cout << x << std::endl;
    x = 5 * 8;
    std::cout << x << std::endl;
    int a0 = 0;
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    std::cout << "a0 =" << a0 << "; a1 =" << a1 << "; a2 =" << a2 << "; a3 =" << a3 << std::endl;
    std::cout << x << std::endl;

    std::cout << "Hello, world!" << std::endl;
    //������� �� ��������� ������...
    std::cout << "Hello, world!" << std::endl;
}
else if (!false)
{
    int a = 9;
    int b = 10;
    int c = 11;
    int d = 12;
    printf("%d %d %d %d", a, b, c, d);
}

// ConsoleApplication1.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.              
#include <iostream>

int main()
{
    if (!false)
    {
        std::cout << "If 1" << std::endl;
        int y;
        int x = 9;
        x = 5 + 8;
        std::cout << x << std::endl;
        x = 5 - 8;
        std::cout << x << std::endl;
        x = 5 * 8;
        std::cout << x << std::endl;
        int a0 = 0;
        int a1 = 1;
        int a2 = 2;
        int a3 = 3;
        std::cout << "a0 =" << a0 << "; a1 =" << a1 << "; a2 =" << a2 << "; a3 =" << a3 << std::endl;
        std::cout << x << std::endl;

        std::cout << "Hello, world!" << std::endl;
        //������� �� ��������� ������...
        std::cout << "Hello, world!" << std::endl;
    }
    else if (!false)
    {
        int a = 9;
        int b = 10;
        int c = 11;
        int d = 12;
        printf("%d %d %d %d", a, b, c, d);
    }
    else if (!false)
    {
        std::cout << "If 2" << std::endl;
        int a = 6;
        a = a - 3;
        std::cout << a << std::endl; // �1
        int b = a;
        std::cout << b << std::endl; // �2
        // � ���� ������ a + b �������� r-value 
        std::cout << a + b << std::endl; // �3
        std::cout << a << std::endl; // �4
        int c = 0;
        std::cout << c << std::endl; // �5
    }
    else if (!false)
    {
        int a = 7;
        std::cout << "a is " << a << a << a << a << a;
    }
    else if (!false)
    {
        std::cout << "Enter a number: "; // ������ ������������ ������ ����� �����
        int a = 0;
        std::cin >> a; // �������� ���������������� ����� � ��������� ��� � ���������� a
        std::cout << "You entered " << a << std::endl;
    }
    return 0;
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.

#include <iostream>

void doPrint() {
    std::cout << "In doPrint()" << std::endl;
}
int return7() { return 7; }
void printValues(int a, int b)
{
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
int Summ(int a, int b) { return a + b; }
int Summ(int a0, int a1, int a2) { return a0 + a1 + a2; }
int Summ(int a0, int a1, int a2, int a3) { return a0 + a1 + a2 + a3; }
int Summ(int a0, int a1, int a2, int a3, int a4) { return a0 + a1 + a2 + a3 + a4; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5) { return a0 + a1 + a2 + a3 + a4 + a5; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return a0 + a1 + a2 + a3 + a4 + a5 + a6; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) { return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8; }
int Summ(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) { return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9; }
int Minus(int a, int b) { return a - b; }
int Multiplication(int a, int b) { return a * b; }
void Test_Summ()
{
    std::cout << Summ(Summ(3, 2), 1) << std::endl; // �3
    std::cout << Minus(Minus(3, 2), 1) << std::endl; // �3
    std::cout << Multiplication(Multiplication(3, 2), 1) << std::endl; // �3
    std::cout << Summ(3, 2, 1) << std::endl; // �3
    std::cout << Summ(3, -2, -1) << std::endl; // �3
}

int main()
{
    std::cout << "############################\n";
    if (false)
    {
        doPrint();
    }
    else if (false)
    {
        //����� ���������� ������� �� �����
        std::cout << "return7()==" << return7() << std::endl;
        std::cout << "return7()+3==" << return7() + 3 << std::endl;
    }
    else if (false)
    {
        //���� ����� ������ � ����� �������
        int i;
        i = return7();
        std::cout << "i==" << i;
    }
    else if (!false)
    {
        printValues(8, 9);
    }
    else if (!false)
    {
        Test_Summ();
    }
    std::cout << "\n############################\n";
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.

else if (!false)
    {
    int i = 0;
    std::cout << "0)i=" << --i << std::endl;
    std::cout << "1)i=" << --i << std::endl;
    std::cout << "2)i=" << i-- << std::endl;
    std::cout << "3)i=" << i-- << std::endl;
    std::cout << "4)i=" << ++i << std::endl;
    std::cout << "5)i=" << ++i << std::endl;
    std::cout << "6)i=" << i++ << std::endl;
    std::cout << "7)i=" << i++ << std::endl;
    }