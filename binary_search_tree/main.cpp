#include <fstream>
#include <iostream>
#include <string>

using namespace std;
struct node
{
    string word;
    int counter;
    node *_l;
    node *_r;
};

node *add_node(const string &word)
{
    node *element = new node;
    element->word = word;
    element->counter = 1;
    element->_l = nullptr;
    element->_r = nullptr;
    return element;
}
node *search_and_add(node *current, const string &word)
{
    while (1) {
        if (current->word == word) {
            current->counter++;
            return current;
        } else if (current->word < word) {
            if (current->_r == nullptr) {
                current->_r = add_node(word);
                return current;
            } else
                current = current->_r;
        } else if (current->word > word) {
            if (current->_l == nullptr) {
                current->_l = add_node(word);
                return current;
            } else
                current = current->_l;
        }
    }
}
void display(node *current)
{
    if (current->_l != nullptr) {
        display(current->_l);
    }
    cout << current->word << " " << current->counter << endl;

    if (current->_r != nullptr) {
        display(current->_r);
    }
}
int main()
{
    fstream file_str("/home/piotr/license.txt", ios::in);
    node *root = nullptr;
    while (!file_str.eof()) {
        char word[100];
        file_str >> word;
        if (root == nullptr) {
            root = add_node(word);
        } else {
            search_and_add(root, word);
        }
    }
    display(root);

    return 0;
}
