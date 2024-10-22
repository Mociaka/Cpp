#include <iostream>

struct Date {
    int hours;
    int minutes;
};

void normalizeTime(Date& time) {
    if (time.minutes >= 60) {
        time.hours += time.minutes / 60;
        time.minutes %= 60;
    }
    time.hours %= 24; 
}

int task1() {
    Date time;

    std::cout << "Enter hours (0-23): ";
    std::cin >> time.hours;
    while (time.hours < 0 || time.hours >= 24) {
        std::cout << "Invalid input. Enter hours (0-23): ";
        std::cin >> time.hours;
    }

    std::cout << "Enter minutes (0-59): ";
    std::cin >> time.minutes;
    while (time.minutes < 0 || time.minutes >= 60) {
        std::cout << "Invalid input. Enter minutes (0-59): ";
        std::cin >> time.minutes;
    }

    int additionalMinutes;
    std::cout << "Enter the number of minutes: ";
    std::cin >> additionalMinutes;

    time.minutes += additionalMinutes;
    normalizeTime(time);

    std::cout << "New time: " << time.hours << ":" << (time.minutes < 10 ? "0" : "") << time.minutes << std::endl;

    return 0;
}

Date calculateDuration(const Date& start, const Date& end) {
    Date duration;

    duration.hours = end.hours - start.hours;
    duration.minutes = end.minutes - start.minutes;

    if (duration.minutes < 0) {
        duration.minutes += 60;
        duration.hours--;
    }
    if (duration.hours < 0) {
        duration.hours += 24;
    }

    return duration;
}

int task2() {
    Date start, end;

    std::cout << "Enter the event start time (hours 0-23, minutes 0-59):" << std::endl;
    std::cout << "Hours: ";
    std::cin >> start.hours;
    while (start.hours < 0 || start.hours >= 24) {
        std::cout << "Invalid input. Enter hours (0-23): ";
        std::cin >> start.hours;
    }

    std::cout << "Minutes: ";
    std::cin >> start.minutes;
    while (start.minutes < 0 || start.minutes >= 60) {
        std::cout << "Invalid input. Enter minutes (0-59): ";
        std::cin >> start.minutes;
    }

    std::cout << "Enter the event end time (hours 0-23, minutes 0-59):" << std::endl;
    std::cout << "Hours: ";
    std::cin >> end.hours;
    while (end.hours < 0 || end.hours >= 24) {
        std::cout << "Invalid input. Enter hours (0-23): ";
        std::cin >> end.hours;
    }

    std::cout << "Minutes: ";
    std::cin >> end.minutes;
    while (end.minutes < 0 || end.minutes >= 60) {
        std::cout << "Invalid input. Enter minutes (0-59): ";
        std::cin >> end.minutes;
    }

    Date duration = calculateDuration(start, end);

    std::cout << "Event duration: " << duration.hours << ":" << (duration.minutes < 10 ? "0" : "") << duration.minutes << std::endl;

    return 0;
}

int main() {


    // task1();
    task2();
}
