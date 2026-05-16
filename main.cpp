#include "XmlService.h"
#include <iostream>

int main() {
    try {
        // Код проверки из условия задачи
        XmlService xs;
        Weather w = xs.getWeather("weather.xml");

        // Выводим результат в консоль для визуальной проверки
        w.printDescription();

    } catch (const std::exception& e) {
        std::cerr << "Произошла ошибка при работе с XML: " << e.what() << std::endl;
    }

    return 0;
}