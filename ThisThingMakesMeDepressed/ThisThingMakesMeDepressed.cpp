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
	std::string fullName;
};

#pragma endregion

/// <summary>
/// Initialization of the structure Student
/// </summary>
struct Student Students[STRUCTURE_SIZE];

#pragma region Class FullName

class FullName
{
public:

	FullName();
	~FullName();
	
	void SetFullName(std::string, std::string, std::string);
	void CheckFullName();
	void ShowFullName();

private: 
	std::string _surname;
	std::string _name;
	std::string _paronymic;

};

FullName::FullName()
{

}

FullName::~FullName()
{

}

void FullName::SetFullName(std::string surname, std::string name, std::string paronymic)
{
	_surname = surname; 
	_name = name;
	_paronymic = paronymic;
}

void FullName::CheckFullName()
{
	for (i = 0; i < _surname.length(); i++)
	{
		if (_surname[i] == 'А' || _surname[i] == 'а' || _surname[i] == 'Б' || _surname[i] == 'б' ||
			_surname[i] == 'В' || _surname[i] == 'в' || _surname[i] == 'Г' || _surname[i] == 'г' ||
			_surname[i] == 'Д' || _surname[i] == 'д' || _surname[i] == 'Е' || _surname[i] == 'е' ||
			_surname[i] == 'Ё' || _surname[i] == 'ё' || _surname[i] == 'Ж' || _surname[i] == 'ж' ||
			_surname[i] == 'З' || _surname[i] == 'з' || _surname[i] == 'И' || _surname[i] == 'и' ||
			_surname[i] == 'Й' || _surname[i] == 'й' || _surname[i] == 'К' || _surname[i] == 'к' ||
			_surname[i] == 'Л' || _surname[i] == 'л' || _surname[i] == 'М' || _surname[i] == 'м' ||
			_surname[i] == 'Н' || _surname[i] == 'н' || _surname[i] == 'О' || _surname[i] == 'о' ||
			_surname[i] == 'П' || _surname[i] == 'п' || _surname[i] == 'Р' || _surname[i] == 'р' ||
			_surname[i] == 'С' || _surname[i] == 'с' || _surname[i] == 'Т' || _surname[i] == 'т' ||
			_surname[i] == 'У' || _surname[i] == 'у' || _surname[i] == 'Ф' || _surname[i] == 'ф' ||
			_surname[i] == 'Х' || _surname[i] == 'х' || _surname[i] == 'Ц' || _surname[i] == 'ц' ||
			_surname[i] == 'Ч' || _surname[i] == 'ч' || _surname[i] == 'Ш' || _surname[i] == 'ш' ||
			_surname[i] == 'Щ' || _surname[i] == 'щ' || _surname[i] == 'Ы' || _surname[i] == 'ы' ||
			_surname[i] == 'Ь' || _surname[i] == 'ь' || _surname[i] == 'Ъ' || _surname[i] == 'ъ' ||
			_surname[i] == 'Э' || _surname[i] == 'э' || _surname[i] == 'Ю' || _surname[i] == 'ю' ||
			_surname[i] == 'Я' || _surname[i] == 'я')

			std::cout << "Проверка фамилии пройдена! Проверен символ " << i + 1 << std::endl;

		else
		{
			_surname.clear();
			std::cout << "Введены некорректные данные" << std::endl;
			return;
		}
	}

	std::cout << std::endl;

	for (i = 0; i < _name.length(); i++)
	{
		if (_surname[i] == 'А' || _surname[i] == 'а' || _surname[i] == 'Б' || _surname[i] == 'б' ||
			_surname[i] == 'В' || _surname[i] == 'в' || _surname[i] == 'Г' || _surname[i] == 'г' ||
			_surname[i] == 'Д' || _surname[i] == 'д' || _surname[i] == 'Е' || _surname[i] == 'е' ||
			_surname[i] == 'Ё' || _surname[i] == 'ё' || _surname[i] == 'Ж' || _surname[i] == 'ж' ||
			_surname[i] == 'З' || _surname[i] == 'з' || _surname[i] == 'И' || _surname[i] == 'и' ||
			_surname[i] == 'Й' || _surname[i] == 'й' || _surname[i] == 'К' || _surname[i] == 'к' ||
			_surname[i] == 'Л' || _surname[i] == 'л' || _surname[i] == 'М' || _surname[i] == 'м' ||
			_surname[i] == 'Н' || _surname[i] == 'н' || _surname[i] == 'О' || _surname[i] == 'о' ||
			_surname[i] == 'П' || _surname[i] == 'п' || _surname[i] == 'Р' || _surname[i] == 'р' ||
			_surname[i] == 'С' || _surname[i] == 'с' || _surname[i] == 'Т' || _surname[i] == 'т' ||
			_surname[i] == 'У' || _surname[i] == 'у' || _surname[i] == 'Ф' || _surname[i] == 'ф' ||
			_surname[i] == 'Х' || _surname[i] == 'х' || _surname[i] == 'Ц' || _surname[i] == 'ц' ||
			_surname[i] == 'Ч' || _surname[i] == 'ч' || _surname[i] == 'Ш' || _surname[i] == 'ш' ||
			_surname[i] == 'Щ' || _surname[i] == 'щ' || _surname[i] == 'Ы' || _surname[i] == 'ы' ||
			_surname[i] == 'Ь' || _surname[i] == 'ь' || _surname[i] == 'Ъ' || _surname[i] == 'ъ' ||
			_surname[i] == 'Э' || _surname[i] == 'э' || _surname[i] == 'Ю' || _surname[i] == 'ю' ||
			_surname[i] == 'Я' || _surname[i] == 'я')

			std::cout << "Проверка имени пройдена! Проверен символ " << i + 1 << std::endl;

		else
		{
			_name.clear();
			std::cout << "Введены некорректные данные" << std::endl;
			return;
		}
	}

	std::cout << std::endl;


	for (i = 0; i < _paronymic.length(); i++)
	{
		if (_surname[i] == 'А' || _surname[i] == 'а' || _surname[i] == 'Б' || _surname[i] == 'б' ||
			_surname[i] == 'В' || _surname[i] == 'в' || _surname[i] == 'Г' || _surname[i] == 'г' ||
			_surname[i] == 'Д' || _surname[i] == 'д' || _surname[i] == 'Е' || _surname[i] == 'е' ||
			_surname[i] == 'Ё' || _surname[i] == 'ё' || _surname[i] == 'Ж' || _surname[i] == 'ж' ||
			_surname[i] == 'З' || _surname[i] == 'з' || _surname[i] == 'И' || _surname[i] == 'и' ||
			_surname[i] == 'Й' || _surname[i] == 'й' || _surname[i] == 'К' || _surname[i] == 'к' ||
			_surname[i] == 'Л' || _surname[i] == 'л' || _surname[i] == 'М' || _surname[i] == 'м' ||
			_surname[i] == 'Н' || _surname[i] == 'н' || _surname[i] == 'О' || _surname[i] == 'о' ||
			_surname[i] == 'П' || _surname[i] == 'п' || _surname[i] == 'Р' || _surname[i] == 'р' ||
			_surname[i] == 'С' || _surname[i] == 'с' || _surname[i] == 'Т' || _surname[i] == 'т' ||
			_surname[i] == 'У' || _surname[i] == 'у' || _surname[i] == 'Ф' || _surname[i] == 'ф' ||
			_surname[i] == 'Х' || _surname[i] == 'х' || _surname[i] == 'Ц' || _surname[i] == 'ц' ||
			_surname[i] == 'Ч' || _surname[i] == 'ч' || _surname[i] == 'Ш' || _surname[i] == 'ш' ||
			_surname[i] == 'Щ' || _surname[i] == 'щ' || _surname[i] == 'Ы' || _surname[i] == 'ы' ||
			_surname[i] == 'Ь' || _surname[i] == 'ь' || _surname[i] == 'Ъ' || _surname[i] == 'ъ' ||
			_surname[i] == 'Э' || _surname[i] == 'э' || _surname[i] == 'Ю' || _surname[i] == 'ю' ||
			_surname[i] == 'Я' || _surname[i] == 'я')

			std::cout << "Проверка отчества пройдена! Проверен символ " << i + 1 << std::endl;

		else
		{
			_paronymic.clear();
			std::cout << "Введены некорректные данные" << std::endl;
			return;
		}
	}

	Students[currentAmountOfStudentsInDatabase].fullName = _surname + " " + _name[0] + "." + _paronymic[0] + ".";
	std::cout << std::endl;
}

void FullName::ShowFullName()
{
	std::cout << _surname + " " + _name[0] + "." + _paronymic[0] + "." << std::endl;
}

#pragma endregion

FullName fullName;

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
	std::string inputSurname;
	std::string inputName;
	std::string inputPatronymic;

	std::cout << "Ввод информации" << std::endl;
	if (currentAmountOfStudentsInDatabase < STRUCTURE_SIZE)
	{
		std::cout << "____________________________________" << std::endl;

		std::cout << "Запись номер ";
		std::cout << currentAmountOfStudentsInDatabase + 1;

		std::cout << std::endl << "Фамилия, Имя, Отчество полностью через пробел" << std::endl;
		std::cin >> inputSurname;
		std::cin >> inputName;
		std::cin >> inputPatronymic;

		fullName.SetFullName(inputSurname, inputName, inputPatronymic);
		fullName.CheckFullName();

		currentAmountOfStudentsInDatabase++;
	}
	else
		std::cout << "Введено максимальное кол-во запи-сей";
	std::cout << "Что дальше?" << std::endl;
	std::cin >> navigation;
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
	int outputNumber;

	std::cout << std::endl << "Введите: " << std::endl;
	std::cout << "1-вывод одной записи" << std::endl;
	std::cout << "2-вывод всех записей" << std::endl;

	std::cin >> navigation;
	if (navigation == 1)
	{
		std::cout << "Введите номер записи, которую нужно вывести" << std::endl;
		std::cin >> outputNumber;
		std::cout << std::endl;

		std::cout << "____________________________________" << std::endl;
		std::cout << std::endl;

		std::cout << "Фамилия И.О." << std::endl;
		std::cout << Students[outputNumber - 1].fullName;
		std::cout << std::endl;
		std::cout << "____________________________________" << std::endl;
		std::cout << std::endl;

	}
	if (navigation == 2)
	{
		for (int i = 0; i < currentAmountOfStudentsInDatabase; i++)
		{
			std::cout << "____________________________________" << std::endl;
			std::cout << std::endl;

			std::cout << "Запись номер " << i << std::endl;
			std::cout << std::endl;

			std::cout << "Фамилия И.О." << std::endl;
			std::cout << Students[i].fullName;
			std::cout << std::endl;

			std::cout << "____________________________________" << std::endl;
			std::cout << std::endl;
		}
	}
	std::cout << "Что делать дальше?" << std::endl;
	std::cin >> navigation;
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

