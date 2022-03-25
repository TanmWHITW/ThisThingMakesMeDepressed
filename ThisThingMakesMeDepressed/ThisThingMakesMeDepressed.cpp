#include <string>
#include <iostream>
#include <Windows.h>
#include <locale>

/// const int to define structure size
#define STRUCTURE_SIZE 30

/// <summary>
/// General counter for every function, zero it before using
/// </summary>
int i = 0;

/// <summary>
/// Amount of students in database, 0 by default
/// </summary>
int currentAmountOfStudentsInDatabase = 0;

/// <summary>
/// Navigation integer for workability of switch
/// </summary>
int navigation = 0;

#pragma region Structure Student

struct Student
{

};

#pragma endregion

/// <summary>
/// Initialization of the structure Student
/// </summary>
struct Student Students[STRUCTURE_SIZE];

/// <summary>
/// Deleting the specific data or the whole one
/// </summary>
void Delete()
{

};

/// <summary>
/// Adding new data to structure
/// </summary>
void EnterNew()
{

};

/// <summary>
/// Editing of the specific data
/// </summary>
void Change()
{

};

/// <summary>
/// Show the specific data or the whole one
/// </summary>
void Out()
{

};

int main()
{
	/// <summary>
	/// Installing the page win-cp 1251 in input stream
	/// </summary>
	/// <returns>win-cp 1251</returns>
	SetConsoleCP(1251);

	/// <summary>
	/// Installing the page win-cp 1251 in output stream
	/// </summary>
	/// <returns>win-cp 1251</returns>
	SetConsoleOutputCP(1251);

	/// <summary>
	/// First launch does not have any data
	/// </summary>
	/// <returns></returns>
	std::cout << "Записей пока нет"	<< std::endl;

	/// <summary>
	/// Navigation via integer type
	/// </summary>
	/// <returns></returns>
	std::cout << "Введите:"	<< std::endl;
	std::cout << "1-для удаления записи" << std::endl;
	std::cout << "2-для ввода новой записи" << std::endl;
	std::cout << "3-для изменения записи" << std::endl;
	std::cout << "4-для вывода записи(ей)" << std::endl;
	std::cout << "5-для выхода"	<< std::endl;

	/// <summary>
	/// Getting the void to navigate to
	/// </summary>
	/// <returns></returns>
	std::cin >> navigation;

	do
	{
		switch (navigation)
		{
		case 1:  Delete();
			break;
		case 2:  EnterNew();
			break;
		case 3:  Change();
			break;
		case 4:  Out();
			break;
		}
	} while (navigation != 5);
}

