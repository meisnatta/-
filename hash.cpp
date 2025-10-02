#include <iostream>
#include <unordered_map>

int main() {
    // Создаем хеш-таблицу
    std::unordered_map<std::string, int> myMap;
    
    // Добавляем элементы
    myMap["one"] = 1;
    myMap["two"] = 2;
    myMap["three"] = 3;
    
    // Выводим все элементы
    for (const auto& element : myMap) {
        std::cout << element.first << " = " << element.second << std::endl;
    }
    
    return 0;
}
