#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(0), month(0), year(0) {}

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void acceptDate() {
        std::cout << "Enter date (dd mm yyyy): ";
        std::cin >> day >> month >> year;
    }

    void displayDate() {
        std::cout << "Date in dd-mm-yyyy format: " << day << "-" << month << "-" << year << std::endl;
        std::cout << "Date in dd-MMM-yyyy format: " << day << "-" << getMonthAbbreviation(month) << "-" << year << std::endl;
        std::cout << "Date in dd/mm/yy format: " << day << "/" << month << "/" << year % 100 << std::endl;
    }

    int differenceInDays(Date other) {
        int thisDays = year * 360 + month * 30 + day;
        int otherDays = other.year * 360 + other.month * 30 + other.day;
        return thisDays - otherDays;
    }

private:
    std::string getMonthAbbreviation(int month) {
        switch (month) {
            case 1: return "JAN";
            case 2: return "FEB";
            case 3: return "MAR";
            case 4: return "APR";
            case 5: return "MAY";
            case 6: return "JUN";
            case 7: return "JUL";
            case 8: return "AUG";
            case 9: return "SEP";
            case 10: return "OCT";
            case 11: return "NOV";
            case 12: return "DEC";
            default: return "";
        }
    }
};

int main() {
    Date date1, date2;

    std::cout << "Enter first date:\n";
    date1.acceptDate();

    std::cout << "Enter second date:\n";
    date2.acceptDate();

    std::cout << "Displaying first date:\n";
    date1.displayDate();

    std::cout << "Displaying second date:\n";
    date2.displayDate();

    std::cout << "Difference in days: " << date1.differenceInDays(date2) << std::endl;

    return 0;
}
