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
	std::string facility{};
	int facilityInt{};
	std::string specialization{};
	int specializationInt{};
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

	~FullName();

	void SetFullName(std::string, std::string, std::string);
	void CheckFullName();
	void ShowFullName();
	void AddFullName();

private:
	std::string _surname;
	std::string _name;
	std::string _paronymic;

};

/// Default destructor
FullName::~FullName()
{

}

/// <summary>
/// Getting amd setting values for the next working with them
/// </summary>
/// <param name="surname">Surname input</param>
/// <param name="name">Name input</param>
/// <param name="paronymic">Paronymic input</param>
void FullName::SetFullName(std::string surname, std::string name, std::string paronymic)
{
	_surname = surname;
	_name = name;
	_paronymic = paronymic;
}

/// <summary>
/// Checking if there are forbidden symbols
/// </summary>
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
			std::cout << "Введен некорректный символ "; std::cout << i + 1; std::cout << ", была введена цифра или спец.символ! Запись будет удалена!" << std::endl;
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
			std::cout << "Введен некорректный символ "; std::cout << i + 1; std::cout << ", была введена цифра или спец.символ! Запись будет удалена!" << std::endl;
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
			std::cout << "Введен некорректный символ "; std::cout << i + 1; std::cout << ", была введена цифра или спец.символ! Запись будет удалена!" << std::endl;
			return;
		}
	}
}

/// <summary>
/// Adding checked input to database
/// Adding ERROR if there were forbidden letters
/// </summary>
void FullName::AddFullName()
{
	if (_surname.empty() || _name.empty() || _paronymic.empty())
		Students[currentAmountOfStudentsInDatabase].fullName = "ERROR";
	else Students[currentAmountOfStudentsInDatabase].fullName = _surname + " " + _name[0] + "." + _paronymic[0] + ".";
}

/// <summary>
/// Test void, delete later
/// </summary>
void FullName::ShowFullName()
{
	std::cout << _surname + " " + _name[0] + "." + _paronymic[0] + "." << std::endl;
}

#pragma endregion

#pragma region Class YearOfEnterringUniversity

class YearOfEnterringUniversity
{
public:
	~YearOfEnterringUniversity();
	void SetYearOfEnterringUniversity(std::string);
	void CheckYearOfEnterringUniversity();
	void ShowYearOfEnterringUniversity();
	void AddYearOfEnterringUniversity();


protected:
	std::string _year;
	int _yearInt{};
};

/// <summary>
/// Default destructor
/// </summary>
YearOfEnterringUniversity::~YearOfEnterringUniversity()
{

}

/// <summary>
/// Getting amd setting values for the next working with them
/// </summary>
/// <param name="year">Year of enterring the university input</param>
void YearOfEnterringUniversity::SetYearOfEnterringUniversity(std::string year)
{
	_year = year;
	_yearInt = NULL;
}

/// <summary>
/// Checking if there are forbidden letters (Only 12334567890 are allowed)
/// </summary>
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
			std::cout << "Введен некорректный символ "; std::cout << i + 1; std::cout << ", была введена буква или спец.символ! Запись будет удалена!" << std::endl;
			return;
		}

	}

	_yearInt = std::stoi(_year);

	if (_yearInt < 1995 || _yearInt > 2022)
	{
		std::cout << "Год поступления может быть указан в промежутке 1995-2022!";
		_yearInt = NULL;
	}

	std::cout << std::endl;
}

/// <summary>
/// Adding checked ibput to data base
/// Adding 0 if there were forbidden letters
/// </summary>
void YearOfEnterringUniversity::AddYearOfEnterringUniversity()
{
	Students[currentAmountOfStudentsInDatabase].yearOfEnterringUniversity = _yearInt;
}

/// <summary>
/// Test void, delete later
/// </summary>
void YearOfEnterringUniversity::ShowYearOfEnterringUniversity()
{
	std::cout << _year << std::endl;
}

#pragma endregion

#pragma region Facility

class Facility
{
public:

	void SetFacility(std::string);
	void CheckFacility();
	void StringToIntFacility();
	void AddFacility();
	void ShowFacility();

private:
	std::string _facility{};
	int _facilityInt{};
};


/// <summary>
/// Getting and setting values
/// </summary>
/// <param name="facility">Facility input</param>
void Facility::SetFacility(std::string facility)
{
	_facility = facility;
}

/// <summary>
/// Checking if there were forbidden letters
/// </summary>
void Facility::CheckFacility()
{
	for (i = 0; i < _facility.length(); i++)
	{
		if (_facility[i] == '1' || _facility[i] == '2' ||
			_facility[i] == '3' || _facility[i] == '4' ||
			_facility[i] == '5' || _facility[i] == '6' ||
			_facility[i] == '7' || _facility[i] == '8' ||
			_facility[i] == '9' || _facility[i] == '0')

			std::cout << "Проверка цифры факультета пройдена! Проверен символ " << i + 1 << std::endl;
		else
		{
			_facility.clear();
			std::cout << "Введен некорректный символ "; std::cout << i + 1; std::cout << ", была введена буква или спец.символ! Запись будет удалена!" << std::endl;
			return;
		}

	}
	std::cout << std::endl;
}

/// <summary>
/// Since we working with switch here 
/// we have to convert string to integer
/// and set value to private string
/// </summary>
void Facility::StringToIntFacility()
{
	if (_facility.empty())
	{
		_facility = "ERROR";
		return;
	}

	_facilityInt = std::stoi(_facility);

	switch (_facilityInt)
	{
	case 1:
		_facility = "Факультет геологии и геофизики нефти и газа";
		break;
	case 2:
		_facility = "Факультет разработки нефтяных и газовых месторождений";
		break;
	case 3:
		_facility = "Факультет проектирования, сооружения и эксплуатации систем трубопроводного транспорта";
		break; 
	case 4:
		_facility = "Факультет инженерной механики";
		break; 
	case 5:
		_facility = "Факультет химической технологии и экологии";
		break; 
	case 6:
		_facility = "Факультет автоматики и вычислительной техники";
		break; 
	case 7:
		_facility = "Факультет комплексной безопасности ТЭК";
		break; 
	case 8:
		_facility = "Факультет экономики и управления";
		break;
	case 9:
		_facility = "Факультет международного энергетического бизнеса";
		break;
	case 10:
		_facility = "Факультет международного энергетического бизнеса";
		break;
	default:
		std::cout << "Факультета под номером "; std::cout << _facility; std::cout << " не существует! Запись будет удалена!" << std::endl;
		_facilityInt = NULL;
		_facility = "ERROR";
		break;
	}
}

/// <summary>
/// Adding value in database
/// Adding ERROR if there were forbidden letters
/// </summary>
void Facility::AddFacility()
{
	Students[currentAmountOfStudentsInDatabase].facility = _facility;
	Students[currentAmountOfStudentsInDatabase].facilityInt = _facilityInt;

}

/// <summary>
/// Test void, delete later
/// </summary>
void Facility::ShowFacility()
{
	std::cout << Students[currentAmountOfStudentsInDatabase].facility << std::endl;
	std::cout << Students[currentAmountOfStudentsInDatabase].facilityInt << std::endl;
}

#pragma endregion

#pragma region Class Specialization

class Specialization
{
public:
	~Specialization();
	void SetSpecialization(std::string);
	void CheckSpecialization();
	void StringToIntSpecialization();
	void AddSpecialization();
	void ShowSpecialization();

private:
	std::string _specialization{};
	int _specializationInt{};
};

/// <summary>
/// Default destructor
/// </summary>
Specialization::~Specialization()
{

}

void Specialization::SetSpecialization(std::string specialization)
{
	_specialization = specialization;
}

void Specialization::CheckSpecialization()
{
	for (i = 0; i < _specialization.length(); i++)
	{
		if (_specialization[i] == '1' || _specialization[i] == '2' ||
			_specialization[i] == '3' || _specialization[i] == '4' ||
			_specialization[i] == '5' || _specialization[i] == '6' ||
			_specialization[i] == '7' || _specialization[i] == '8' ||
			_specialization[i] == '9' || _specialization[i] == '0')

			std::cout << "Проверка выбранной специальности пройдена! Проверен символ " << i + 1 << std::endl;
		else
		{
			_specialization.clear();
			std::cout << "Введен некорректный символ "; std::cout << i + 1; std::cout << ", была введена буква или спец.символ! Запись будет удалена!" << std::endl;
			return;
		}

	}
	std::cout << std::endl;
}

void Specialization::StringToIntSpecialization()
{

	if (_specialization.empty())
	{
		_specialization = "ERROR";
		return;
	}

	_specializationInt = std::stoi(_specialization);

	switch (Students[currentAmountOfStudentsInDatabase].facilityInt)
	{
	case 1:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Геология (05.03.01), бакалавриат";
			break;
		case 2:
			_specialization = "Экология и природопользование (05.03.06), бакалавриат";
			break;
		case 11:
			_specialization = "Прикладная геология (21.05.02), специалитет";
			break;
		case 12:
			_specialization = "Технология геологической разведки (21.05.03), специалитет";
			break;
		case 101:
			_specialization = "Нефтегазовое дело (21.04.01), магистратура";
			break;
		case 102:
			_specialization = "Экология и природопользование (05.04.06), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
		break;
	case 2:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Нефтегазовое дело (21.03.01), бакалавриат";
			break;
		case 11:
			_specialization = "Физические процессы горного или нефтегазового производства (21.05.05), специалитет";
			break;
		case 12:
			_specialization = "Нефтегазовые техника и технологии (21.05.06), специалитет";
			break;
		case 101:
			_specialization = "Нефтегазовое дело (21.04.01), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 3:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Нефтегазовое дело (21.03.01), бакалавриат";
			break;
		case 11:
			_specialization = "Нефтегазовые техника и технологии (21.05.06), специалитет";
			break;
		case 101:
			_specialization = "Нефтегазовое дело (21.04.01), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 4:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Машиностроение (15.03.01), бакалавриат";
			break; 
		case 2:
			_specialization = "Технологические машины и оборудование (15.03.02), бакалавриат";
			break;
		case 3:
			_specialization = "Техносферная безопасность (20.03.01), бакалавриат";
			break;
		case 4:
			_specialization = "Стандартизация и метрология (27.03.01), бакалавриат";
			break;
		case 101:
			_specialization = "Технологические машины и оборудование (15.04.02), магистратура";
			break;
		case 102:
			_specialization = "Техносферная безопасность (20.04.01), магистратура";
			break;
		case 103:
			_specialization = "Стандартизация и метрология (27.04.01), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 5:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Химическая технология (18.03.01), бакалавриат";
			break;
		case 2:
			_specialization = "Энерго- и ресурсосберегающие процессы в химической технологии, нефтехимии и биотехнологии (18.03.02), бакалавриат";
			break;
		case 101:
			_specialization = "Химическая технология (18.04.01), магистратура";
			break;
		case 102:
			_specialization = "Энерго- и ресурсосберегающие процессы в химической технологии, нефтехимии и биотехнологии (18.04.02), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 6:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Прикладная математика (01.03.04), бакалавриат";
			break;
		case 2:
			_specialization = "Информатика и вычислительная техника (09.03.01), бакалавриат";
			break;
		case 3:
			_specialization = "Приборостроение (12.03.01), бакалавриат";
			break;
		case 4:
			_specialization = "Электроэнергетика и электротехника (13.03.02), бакалавриат";
			break;
		case 5:
			_specialization = "Управление в технических системах (27.03.04), бакалавриат";
			break;
		case 101:
			_specialization = "Прикладная математика (01.04.04), магистратура";
			break;
		case 102:
			_specialization = "Управление в технических системах (27.04.04), магистратура";
			break;
		case 103:
			_specialization = "Информатика и вычислительная техника (09.04.01), магистратура";
			break;
		case 104:
			_specialization = "Электроэнергетика и электротехника (13.04.02), магистратура";
			break;
		case 105:
			_specialization = "Приборостроение (12.04.01), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 7:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Информационная безопасность (10.03.01), бакалавриат";
			break;
		case 2:
			_specialization = "Экономика (38.03.01), бакалавриат";
			break;
		case 3:
			_specialization = "Бизнес-информатика (38.03.05), бакалавриат";
			break;
		case 4:
			_specialization = "Юриспруденция (40.03.01), бакалавриат";
			break;
		case 5:
			_specialization = "Международные отношения (41.03.05), бакалавриат";
			break;
		case 11:
			_specialization = "Информационная безопасность автоматизированных систем (10.05.03), специалитет";
			break;
		case 12:
			_specialization = "Информационно-аналитические системы безопасности (10.05.04), специалитет";
			break;
		case 13:
			_specialization = "Экономическая безопасность (38.05.01), специалитет";
			break;
		case 14:
			_specialization = "Правовое обеспечение национальной безопасности (40.05.01), специалитет";
			break;
		case 101:
			_specialization = "Информационная безопасность (10.04.01), магистратура";
			break;
		case 102:
			_specialization = "Экономика (10.04.01), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 8:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Экономика (38.03.01), бакалавриат";
			break;
		case 2:
			_specialization = "Менеджмент (38.03.02), бакалавриат";
			break;

		case 101:
			_specialization = "Экономика (38.04.01), магистратура";
			break;
		case 102:
			_specialization = "Менеджмент (38.04.02), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 9:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Экономика (38.03.01), бакалавриат";
			break;
		case 2:
			_specialization = "Менеджмент (38.03.02), бакалавриат";
			break;
		case 101:
			_specialization = "Экономика (38.04.01), магистратура";
			break;
		case 102:
			_specialization = "Менеджмент (38.04.02), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	case 10:
		switch (_specializationInt)
		{
		case 1:
			_specialization = "Юриспруденция (40.03.01), бакалавриат";
			break;
		case 101:
			_specialization = "Юриспруденция (40.04.01), магистратура";
			break;
		default:
			std::cout << "Специальности под цифрой "; std::cout << _specializationInt; std::cout << " не существует! Запись будет удалена!" << std::endl;
			_specializationInt = NULL;
			_specialization = "ERROR";
			break;
		}
	default:
		std::cout << "Выбран несуществующий факультет! Запись будет удалена!" << std::endl;
		_specializationInt = NULL;
		_specialization = "ERROR";
		break;
	}

}

void Specialization::AddSpecialization()
{
	Students[currentAmountOfStudentsInDatabase].specialization = _specialization;
	Students[currentAmountOfStudentsInDatabase].specializationInt = _specializationInt;
}

void Specialization::ShowSpecialization()
{
}

#pragma endregion


/// <summary>
/// Initialisation of the FullName object
/// </summary>
FullName fullName;

/// <summary>
/// Initialisation of the YearOfEnterringUniversity object
/// </summary>
YearOfEnterringUniversity yearOfEnterringUniversity;

/// <summary>
/// Initialisation of the Facility object
/// </summary>
Facility facility;

/// <summary>
/// Initialization of the Specialization object
/// </summary>
Specialization specialization;

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

	std::string inputFacility;

	std::string inputSpecialization;

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
		fullName.AddFullName();

		std::cout << std::endl << "Год поступления цифрами" << std::endl;
		std::cin >> inputYearOfEnterringUniversity;

		std::cout << std::endl;

		yearOfEnterringUniversity.SetYearOfEnterringUniversity(inputYearOfEnterringUniversity);
		yearOfEnterringUniversity.CheckYearOfEnterringUniversity();
		yearOfEnterringUniversity.AddYearOfEnterringUniversity();

		std::cout << std::endl << "Выберите факультет\n1 - Факультет геологии и геофизики нефти и газа\n2 - Факультет разработки нефтяных и газовых месторождений\n3 - Факультет проектирования, сооружения и эксплуатации систем трубопроводного транспорта\n4 - Факультет инженерной механики\n5 - Факультет химической технологии и экологии\n6 - Факультет автоматики и вычислительной техники\n7 - Факультет комплексной безопасности ТЭК\n8 - Факультет экономики и управления\n9 - Факультет международного энергетического бизнеса\n10 - Юридический факультет" << std::endl;
		std::cin >> inputFacility;

		std::cout << std::endl;

		facility.SetFacility(inputFacility);
		facility.CheckFacility();
		facility.StringToIntFacility();
		facility.AddFacility();

		std::cout << std::endl << "Выберите специальность" << std::endl;

		std::cin >> inputSpecialization;

		std::cout << std::endl;

		specialization.SetSpecialization(inputSpecialization);
		specialization.CheckSpecialization();
		specialization.StringToIntSpecialization();
		specialization.AddSpecialization();

		currentAmountOfStudentsInDatabase++;
	}
	else
		std::cout << "Введено максимальное кол-во запи-сей" << std::endl;
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

		std::cout << "Факультет" << std::endl;
		std::cout << Students[outputNumber - 1].facility;
		std::cout << std::endl;

		std::cout << "Специальность" << std::endl;
		std::cout << Students[outputNumber - 1].specialization;
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

			std::cout << "Факультет" << std::endl;
			std::cout << Students[i].facility;
			std::cout << std::endl;

			std::cout << "Специальность" << std::endl;
			std::cout << Students[i].specialization;
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