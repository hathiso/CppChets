// C++Chets.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>

void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

void cl_p(int *j,char *k) {
	int h = 2;
	for (int i = 0; i < 8; i++)
	{
		for (int t = 0; t < 8; t++) 
		{
			if (h % 2 == 1)
			{
				*(j+((t)+8*i)) = 0;
			}
			else
			{
				*(j + ((t) + 8 * i)) = 1;
				
			}
			h++;
		}
		h++;
	}
	for (int i = 0; i < 8; i++)
	{
		for (int t = 0; t < 8; t++)
		{
				*(k + ((t)+8 * i)) = *"f";
		}
	}

};
void p_p(int* j, char* k)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << i+1;
		for (int t = 0; t < 8; t++)
		{
			if (*(j + ((t)+8 * i)) == 1)
			{
				SetColor(7, 7);
				std::cout << " ";
				SetColor(0, 15);
				if (*(k + ((t)+8 * i)) == *"f")
				{
					SetColor(7, 7);
					std::cout << *(k + ((t)+8 * i));
				}
				else
				{
					SetColor(15, 7);
					std::cout << *(k + ((t)+8 * i));
				}
				SetColor(7, 7);
				std::cout << " ";
			}
			else if (*(j + ((t)+8 * i)) == 0)
			{
				SetColor(0, 0);
				std::cout << " ";
				if (*(k + ((t)+8 * i)) == *"f")
				{
					SetColor(0, 0);
					std::cout << *(k + ((t)+8 * i));
				}
				else
				{
					SetColor(15, 0);
					std::cout << *(k + ((t)+8 * i));
				}
				SetColor(0, 0);
				std::cout << " ";
			}
		}
		SetColor(15, 0);
		std::cout << "\n";
	}
	std::cout << " ";
	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 0: std::cout << " " << "a" << " "; break;
		case 1: std::cout << " " << "b" << " "; break;
		case 2: std::cout << " " << "c" << " "; break;
		case 3: std::cout << " " << "d" << " "; break;
		case 4: std::cout << " " << "e" << " "; break;
		case 5: std::cout << " " << "f" << " "; break;
		case 6: std::cout << " " << "g" << " "; break;
		case 7: std::cout << " " << "h" << " "; break;
		default:break;
		}
	}
	//SetColor(15, 0);
}
void s_p(char* k)			
{							
	*k = *"R";	
	*(k + 7) = *"R";
	*(k+ 1 ) = *"N";
	*(k + 6) = *"N";
	*(k + 2) = *"B";
	*(k + 5) = *"B";
	*(k + 3) = *"Q";
	*(k + 4) = *"K";
	for (int i = 0; i < 8; i++)
		* (k + 8 + i) = *"P";
	*(k + 56 ) = *"R";
	*(k + 63) = *"R";
	*(k + 57) = *"N";
	*(k + 62) = *"N";
	*(k + 58) = *"B";
	*(k + 61) = *"B";
	*(k + 59) = *"Q";
	*(k + 60) = *"K";
	for (int i = 0; i < 8; i++)
		* (k + 8 * 6 + i) = *"P";
};
void P(char* f, char* l, char* t)
{

};
int main()
{
	int p[8][8];
	char o[8][8];
	cl_p(p[0],o[0]);
	s_p(o[0]);
	p_p(p[0], o[0]);
	
	//char k[2];
	//char l[2];
	//std::cin >> k >> l;
	//std::cout << k << " " << l;
	//P(k, l, o[0]);
	//SetColor(15, 15);
	//std::cout << "test ";
	//SetColor(7,7);
	//std::cout << "test2\n";
	//SetColor(0, 0);
    //std::cout << "Hello World!\n"; 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
