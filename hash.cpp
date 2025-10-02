#include <iostream>
#include <unordered_map>

int main() {
    // Создаем хеш-таблицу
    std::unordered_map<std::string, int> myMap;
    
    // Добавляем элементы
    myMap["apple"] = 3;
    myMap["banana"] = 2;
    myMap["orange"] = 1;
    
    // Выводим все элементы
    for (const auto& element : myMap) {
        std::cout << element.first << " = " << element.second << std::endl;
    }
    
    return 0;
}
