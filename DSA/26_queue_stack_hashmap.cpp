#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    // QUEUES ARE FIFO==============================================================================
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // STACKS ARE LIFO==============================================================================
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // HASHMAPS = SAME AS PYTHON DICT===============================================================
    unordered_map<string, int> my_map;

    my_map.insert({"apple", 10});
    my_map.insert({"banana", 20});

    cout << my_map["apple"] << endl;

    my_map["banana"] = 30;

    for (auto const &[key, val] : my_map)
    {
        std::cout << key << " : " << val << std::endl;
    }

    return 0;
}
