#include <iostream>
#include <cassert>
#include "BinarySearchTree.h"

//template <class S>
//class BinarySearchTree;
//
//template <class T>
//class TreeNode {
//    friend BinarySearchTree<T>;
//private:
//    int key;
//    T value;
//    TreeNode *leftChild;
//    TreeNode *rightChild;
//    TreeNode *parent;
//public:
//    TreeNode(int key, T value): key(key), value(value) {
//        leftChild = nullptr;
//        rightChild = nullptr;
//        parent = nullptr;
//    };
//
//    bool operator<(const TreeNode &rhs) const {
//        return key < rhs.key;
//    }
//
//    bool operator>(const TreeNode &rhs) const {
//        return rhs < *this;
//    }
//
//    bool operator<=(const TreeNode &rhs) const {
//        return !(rhs < *this);
//    }
//
//    bool operator>=(const TreeNode &rhs) const {
//        return !(*this < rhs);
//    }
//};
//
//template <class S>
//class BinarySearchTree{
//private:
//    TreeNode<S> *root;
//    TreeNode<S> *insert(int key, S value, TreeNode<S>* parent){
//        if(parent == nullptr) return new TreeNode<S>(key, value);
//        if(key < parent->key){
//            parent->leftChild = insert(key, value, parent->leftChild);
//        } else if (key > parent->key) {
//            parent->rightChild = insert(key, value, parent->rightChild);
//        } else {
//            parent->value = value;
//        }
//    }
//
//    void print(TreeNode<S>* node){
//        if(node == nullptr)
//            return;
//        print(node->leftChild);
//        std::cout << node->value << std::endl;
//        print(node ->rightChild);
//    }
//public:
//    BinarySearchTree() : root(nullptr) {}
//    void put(int key, S value){
//        root = insert(key, value, root);
//    }
//
//    void print(){
//        print(root);
//    }
//};

void test(){
//    BinarySearchTree<int, std::string> tree {};
//    AvlTree<int, std::string> tree {};
    BinarySearchTree<int, std::string>* tree = new AvlTree<int, std::string>();
    tree->put(1, "Hello");
    tree->put(2, "World");
    tree->put(3, "!");
//    assert(tree.size() == 3);
//    assert(*tree.get(2) == "World");
//    assert(*tree.min() == "Hello");
//    assert(*tree.max() == "!");
//    tree.put(3, "New value");
//    assert(*tree.get(3) == "New value");
//    assert(tree.remove(1) == "Hello");
//    assert(tree.size() == 2);
//    assert(tree.get(4) == nullptr);
//    assert(*tree.min() == "World");
}

int main() {
//    BinarySearchTree<char> myTree;
//    myTree.put(1, (char) '2');
//    myTree.put(2, '3');
//    myTree.print();
//    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}