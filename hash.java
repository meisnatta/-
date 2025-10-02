import java.util.HashMap;

public class SimpleExample {
    public static void main(String[] args) {
        // Создаем хеш-таблицу
        HashMap<String, Integer> myMap = new HashMap<>();
        
        // Добавляем элементы
        myMap.put("apple", 10);
        myMap.put("banana", 20);
        myMap.put("orange", 15);
        
        // Выводим все элементы
        for (String fruit : myMap.keySet()) {
            System.out.println(fruit + ": " + myMap.get(fruit));
        }
    }
}
