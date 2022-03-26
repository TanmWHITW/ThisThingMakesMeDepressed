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
	std::string fullName{};
	int yearOfEnterringUniversity{};
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
		if (_name[i] == 'А' || _name[i] == 'а' || _name[i] == 'Б' || _name[i] == 'б' ||
			_name[i] == 'В' || _name[i] == 'в' || _name[i] == 'Г' || _name[i] == 'г' ||
			_name[i] == 'Д' || _name[i] == 'д' || _name[i] == 'Е' || _name[i] == 'е' ||
			_name[i] == 'Ё' || _name[i] == 'ё' || _name[i] == 'Ж' || _name[i] == 'ж' ||
			_name[i] == 'З' || _name[i] == 'з' || _name[i] == 'И' || _name[i] == 'и' ||
			_name[i] == 'Й' || _name[i] == 'й' || _name[i] == 'К' || _name[i] == 'к' ||
			_name[i] == 'Л' || _name[i] == 'л' || _name[i] == 'М' || _name[i] == 'м' ||
			_name[i] == 'Н' || _name[i] == 'н' || _name[i] == 'О' || _name[i] == 'о' ||
			_name[i] == 'П' || _name[i] == 'п' || _name[i] == 'Р' || _name[i] == 'р' ||
			_name[i] == 'С' || _name[i] == 'с' || _name[i] == 'Т' || _name[i] == 'т' ||
			_name[i] == 'У' || _name[i] == 'у' || _name[i] == 'Ф' || _name[i] == 'ф' ||
			_name[i] == 'Х' || _name[i] == 'х' || _name[i] == 'Ц' || _name[i] == 'ц' ||
			_name[i] == 'Ч' || _name[i] == 'ч' || _name[i] == 'Ш' || _name[i] == 'ш' ||
			_name[i] == 'Щ' || _name[i] == 'щ' || _name[i] == 'Ы' || _name[i] == 'ы' ||
			_name[i] == 'Ь' || _name[i] == 'ь' || _name[i] == 'Ъ' || _name[i] == 'ъ' ||
			_name[i] == 'Э' || _name[i] == 'э' || _name[i] == 'Ю' || _name[i] == 'ю' ||
			_name[i] == 'Я' || _name[i] == 'я')

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
		if (_paronymic[i] == 'А' || _paronymic[i] == 'а' || _paronymic[i] == 'Б' || _paronymic[i] == 'б' ||
			_paronymic[i] == 'В' || _paronymic[i] == 'в' || _paronymic[i] == 'Г' || _paronymic[i] == 'г' ||
			_paronymic[i] == 'Д' || _paronymic[i] == 'д' || _paronymic[i] == 'Е' || _paronymic[i] == 'е' ||
			_paronymic[i] == 'Ё' || _paronymic[i] == 'ё' || _paronymic[i] == 'Ж' || _paronymic[i] == 'ж' ||
			_paronymic[i] == 'З' || _paronymic[i] == 'з' || _paronymic[i] == 'И' || _paronymic[i] == 'и' ||
			_paronymic[i] == 'Й' || _paronymic[i] == 'й' || _paronymic[i] == 'К' || _paronymic[i] == 'к' ||
			_paronymic[i] == 'Л' || _paronymic[i] == 'л' || _paronymic[i] == 'М' || _paronymic[i] == 'м' ||
			_paronymic[i] == 'Н' || _paronymic[i] == 'н' || _paronymic[i] == 'О' || _paronymic[i] == 'о' ||
			_paronymic[i] == 'П' || _paronymic[i] == 'п' || _paronymic[i] == 'Р' || _paronymic[i] == 'р' ||
			_paronymic[i] == 'С' || _paronymic[i] == 'с' || _paronymic[i] == 'Т' || _paronymic[i] == 'т' ||
			_paronymic[i] == 'У' || _paronymic[i] == 'у' || _paronymic[i] == 'Ф' || _paronymic[i] == 'ф' ||
			_paronymic[i] == 'Х' || _paronymic[i] == 'х' || _paronymic[i] == 'Ц' || _paronymic[i] == 'ц' ||
			_paronymic[i] == 'Ч' || _paronymic[i] == 'ч' || _paronymic[i] == 'Ш' || _paronymic[i] == 'ш' ||
			_paronymic[i] == 'Щ' || _paronymic[i] == 'щ' || _paronymic[i] == 'Ы' || _paronymic[i] == 'ы' ||
			_paronymic[i] == 'Ь' || _paronymic[i] == 'ь' || _paronymic[i] == 'Ъ' || _paronymic[i] == 'ъ' ||
			_paronymic[i] == 'Э' || _paronymic[i] == 'э' || _paronymic[i] == 'Ю' || _paronymic[i] == 'ю' ||
			_paronymic[i] == 'Я' || _paronymic[i] == 'я')

			std::cout << "Проверка отчества пройдена! Проверен символ " << i + 1 << std::endl;

		else
		{
			_paronymic.clear();
			std::cout << "Введены некорректные данные" << std::endl << std::endl;
			return;
		}
	}

	Students[currentAmountOfStudentsInDatabase].fullName = _surname + " " + _name[0] + "." + _paronymic[0] + ".";
}

void FullName::ShowFullName()
{
	std::cout << _surname + " " + _name[0] + "." + _paronymic[0] + "." << std::endl;
}

#pragma endregion

#pragma region YearOfEnterringUniversity

class YearOfEnterringUniversity
{
public:
	YearOfEnterringUniversity();
	~YearOfEnterringUniversity();
	void SetYearOfEnterringUniversity(std::string);
	void CheckYearOfEnterringUniversity();
	void ShowYearOfEnterringUniversity();

private:
	std::string _year;
	int _yearInt;
};

YearOfEnterringUniversity::YearOfEnterringUniversity()
{

}

YearOfEnterringUniversity::~YearOfEnterringUniversity()
{

}

void YearOfEnterringUniversity::SetYearOfEnterringUniversity(std::string year)
{
	_year = year;
	_yearInt = NULL;
}

void YearOfEnterringUniversity::CheckYearOfEnterringUniversity()
{
	for (i = 0; i < _year.length(); i++)
	{
		if (_year[i] == '1' || _year[i] == '2' ||
			_year[i] == '3' || _year[i] == '4' ||
			_year[i] == '5' || _year[i] == '6' ||
			_year[i] == '7' || _year[i] == '8' ||
			_year[i] == '9' || _year[i] == '0')

			std::cout << "Проверка года поступления пройдена! Проверен символ " << i + 1 << std::endl;
		else
		{
			_year.clear();
			std::cout << "Введены некорректные данные, были введены буквы или спец.символы!" << std::endl;
			return;
		}

	}

	_yearInt = std::stoi(_year);

	if (_yearInt >= 1995 && _yearInt <= 2022)
		Students[currentAmountOfStudentsInDatabase].yearOfEnterringUniversity = _yearInt;
	else
		std::cout << "Год поступления может быть указан в промежутке 1995-2022!" << std::endl;

}

void YearOfEnterringUniversity::ShowYearOfEnterringUniversity()
{
	std::cout << _year << std::endl;
}

#pragma endregion


FullName fullName;
YearOfEnterringUniversity yearOfEnterringUniversity;

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

	std::string inputYearOfEnterringUniversity;

	std::cout << "Ввод информации" << std::endl;
	if (currentAmountOfStudentsInDatabase < STRUCTURE_SIZE)
	{
		std::cout << "____________________________________" << std::endl;

		std::cout << "Запись номер ";
		std::cout << currentAmountOfStudentsInDatabase + 1;
		std::cout << std::endl;

		std::cout << std::endl << "Фамилия, Имя, Отчество полностью через пробел" << std::endl;
		std::cin >> inputSurname;
		std::cin >> inputName;
		std::cin >> inputPatronymic;

		std::cout << std::endl;

		fullName.SetFullName(inputSurname, inputName, inputPatronymic);
		fullName.CheckFullName();

		std::cout << std::endl << "Год поступления цифрами" << std::endl;
		std::cin >> inputYearOfEnterringUniversity;

		std::cout << std::endl;

		yearOfEnterringUniversity.SetYearOfEnterringUniversity(inputYearOfEnterringUniversity);
		yearOfEnterringUniversity.CheckYearOfEnterringUniversity();

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

		std::cout << "Год поступления" << std::endl;
		std::cout << Students[outputNumber - 1].yearOfEnterringUniversity;
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

			std::cout << "Запись номер " << i + 1 << std::endl;
			std::cout << std::endl;

			std::cout << "Фамилия И.О." << std::endl;
			std::cout << Students[i].fullName;
			std::cout << std::endl;

			std::cout << "Год поступления" << std::endl;
			std::cout << Students[i].yearOfEnterringUniversity;
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
	std::cout << "Записей пока нет" << std::endl;

	/// <summary>
	/// Navigation via integer type
	/// </summary>
	/// <returns></returns>
	std::cout << "Введите:" << std::endl;
	std::cout << "1-для удаления записи" << std::endl;
	std::cout << "2-для ввода новой записи" << std::endl;
	std::cout << "3-для изменения записи" << std::endl;
	std::cout << "4-для вывода записи(ей)" << std::endl;
	std::cout << "5-для выхода" << std::endl;

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