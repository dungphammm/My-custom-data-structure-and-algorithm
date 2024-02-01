#include <iostream>
#include <list>
#include <unordered_map>
#include <utility>

template <typename K, typename V>
class LinkedHashMap {
public:
    // Add a key-value pair to the LinkedHashMap
    void put(const K& key, const V& value) {
        auto it = map.find(key);
        if (it != map.end()) {
            // If the key already exists, update its value
            it->second->second = value;
            return;
        }

        // Add the new key-value pair to the end of the list
        data.push_back({key, value});
        // Map the key to the new element in the list
        map[key] = std::prev(data.end());
    }

    // Remove an item by key
    void remove(const K& key) {
        auto it = map.find(key);
        if (it != map.end()) {
            // Remove the element from the list
            data.erase(it->second);
            // Remove the key from the map
            map.erase(it);
        }
    }

    // Get the value associated with a key
    V get(const K& key) {
        auto it = map.find(key);
        if (it != map.end()) {
            return it->second->second;
        }
        throw std::runtime_error("Key not found");
    }

    // Iterate over all key-value pairs
    void iterate() const {
        for (const auto& pair : data) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }

private:
    std::list<std::pair<K, V>> data;
    std::unordered_map<K, typename std::list<std::pair<K, V>>::iterator> map;
};

int main() {
    LinkedHashMap<int, std::string> map;

    map.put(1, "one");
    map.put(2, "two");
    map.put(3, "three");

    map.iterate();

    map.remove(2);

    std::cout << "After removal:" << std::endl;
    map.iterate();

    return 0;
}