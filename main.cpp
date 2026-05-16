#include "Weather.h"

int main() {
    // Создаем объект класса Weather, передавая данные из примера в задании
    Weather kirovWeather("Киров", 49.6601, 58.5966, 5.69, "дождь", 4.27, 100);

    // Вызываем метод для вывода описания
    kirovWeather.printDescription();

    return 0;
}