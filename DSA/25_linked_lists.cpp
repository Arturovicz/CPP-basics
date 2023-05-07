#include <iostream>

using std::string, std::cout, std::cin;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void append(int val)
    {
        Node *new_node = new Node(val);

        if (head == nullptr)
        {
            head = new_node;
            return;
        }

        Node *last_node = head;
        while (last_node->next != nullptr)
        {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    void prepend(int val)
    {
        Node *new_node = new Node(val);

        new_node->next = head;
        head = new_node;
    }

    void insert_after_node(Node *prev_node, int val)
    {
        if (prev_node == nullptr)
        {
            cout << "Previous node is null" << '\n';
            return;
        }

        Node *new_node = new Node(val);
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }

    void delete_node(int key)
    {
        Node *cur_node = head;

        if (cur_node != nullptr && cur_node->data == key)
        {
            head = cur_node->next;
            delete cur_node;
            return;
        }

        Node *prev_node = nullptr;
        while (cur_node != nullptr && cur_node->data != key)
        {
            prev_node = cur_node;
            cur_node = cur_node->next;
        }

        if (cur_node == nullptr)
        {
            return;
        }

        prev_node->next = cur_node->next;
        delete cur_node;
    }

    void print_list()
    {
        Node *cur_node = head;

        while (cur_node != nullptr)
        {
            cout << cur_node->data << " ";
            cur_node = cur_node->next;
        }
        cout << '\n';
    }
};

int main(int argc, char const *argv[])
{
    LinkedList llist;
    llist.append(1);
    llist.append(2);
    llist.append(3);
    llist.print_list();
    llist.prepend(4);
    llist.print_list();
    llist.insert_after_node(llist.head->next, 5);
    llist.print_list();
    llist.delete_node(3);
    llist.print_list();
    return 0;
}
