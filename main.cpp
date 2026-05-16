#include "JsonService.h"
#include <iostream>

int main() {
    try {
        // Код из условия задачи
        JsonService js;
        Weather w = js.getWeather("weather.json");

        // Вызываем метод вывода, чтобы убедиться в правильности заполнения объекта
        w.printDescription();
        
    } catch (const std::exception& e) {
        std::cerr << "Произошла ошибка: " << e.what() << std::endl;
    }

    return 0;
}