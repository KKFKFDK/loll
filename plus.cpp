#include <iostream>
#include <string>

class Student {
private:
    std::string fullName;          // ФИО
    std::string birthDate;         // Дата рождения
    std::string phoneNumber;       // Контактный телефон
    std::string city;              // Город
    std::string country;           // Страна
    std::string university;        // Название учебного заведения
    std::string groupNumber;       // Номер группы

public:
    // Метод для ввода данных студента
    void inputData() {
        std::cout << "Введите ФИО: ";
        std::getline(std::cin, fullName);
        std::cout << "Введите дату рождения (дд.мм.гггг): ";
        std::getline(std::cin, birthDate);
        std::cout << "Введите контактный телефон: ";
        std::getline(std::cin, phoneNumber);
        std::cout << "Введите город: ";
        std::getline(std::cin, city);
        std::cout << "Введите страну: ";
        std::getline(std::cin, country);
        std::cout << "Введите название учебного заведения: ";
        std::getline(std::cin, university);
        std::cout << "Введите номер группы: ";
        std::getline(std::cin, groupNumber);
    }

    // Метод для вывода данных студента
    void displayData() const {
        std::cout << "ФИО: " << fullName << std::endl;
        std::cout << "Дата рождения: " << birthDate << std::endl;
        std::cout << "Контактный телефон: " << phoneNumber << std::endl;
        std::cout << "Город: " << city << std::endl;
        std::cout << "Страна: " << country << std::endl;
        std::cout << "Учебное заведение: " << university << std::endl;
        std::cout << "Номер группы: " << groupNumber << std::endl;
    }

    // Аксессоры (геттеры и сеттеры)
    const std::string& getFullName() const { return fullName; }
    void setFullName(const std::string& name) { fullName = name; }

    const std::string& getBirthDate() const { return birthDate; }
    void setBirthDate(const std::string& date) { birthDate = date; }

    const std::string& getPhoneNumber() const { return phoneNumber; }
    void setPhoneNumber(const std::string& phone) { phoneNumber = phone; }

    const std::string& getCity() const { return city; }
    void setCity(const std::string& c) { city = c; }

    const std::string& getCountry() const { return country; }
    void setCountry(const std::string& c) { country = c; }

    const std::string& getUniversity() const { return university; }
    void setUniversity(const std::string& uni) { university = uni; }

    const std::string& getGroupNumber() const { return groupNumber; }
    void setGroupNumber(const std::string& group) { groupNumber = group; }
};

int main() {
    Student student;
    student.inputData(); // Ввод данных студента
    student.displayData(); // Вывод данных студента

    return 0;
}
