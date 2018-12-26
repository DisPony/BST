//
// Created by Никита on 25.12.2018.
//

//#ifndef BST_BINARYSEARCHTREE_H
//#define BST_BINARYSEARCHTREE_H

template <typename K, typename V>
class BinarySearchTree {
public:
    class TreeNode{
    public:
        K key;
        V value;
        int N;
        unsigned char height;
        TreeNode* leftChild;
        TreeNode* rightChild;
        TreeNode* parent;
        TreeNode(K key, V value, int N)  : key(key), value(value), N(N){
            leftChild = nullptr;
            rightChild = nullptr;
            parent = nullptr;
            height = 1;
        }
    };

    virtual BinarySearchTree::TreeNode* put(K key, V value, TreeNode *node){
        if(node == nullptr) return new TreeNode(key, value, 1);
        if(key < node->key){
            node->leftChild = put(key, value, node->leftChild);
        } else if (key > node->key) {
            node->rightChild = put(key, value, node->rightChild);
        } else {
            node->value = value;
        }
        node->N = size(node->leftChild) + size(node->rightChild) + 1;
        return node;
    }

public:
    TreeNode* root;
private:
    const V* get(K key, TreeNode* node){
        if(node == nullptr) return nullptr;
        if (key < node->key) return get(key, node->leftChild);
        else if (key > node->key) return get(key, node->rightChild);
        else return &node->value;
    }

    const V* max(TreeNode* node){
        if(node == nullptr) return nullptr;
        if(node->rightChild == nullptr) return &node->value;
        else return max(node->rightChild);
    }
    const V* min(TreeNode* node){
        if(node == nullptr) return nullptr;
        if(node->leftChild == nullptr) return &node->value;
        else return min(node->leftChild);
    }

protected:
    int size(TreeNode* node){
        if(node == nullptr) return 0;
        else return node->N;
    }

public:
    const V* get(K key) {
        return get(key, root);
    }
    void put(K key, V value){
        root = put(key, value, root);
    }
    V remove(K key);
    const V* max(){
        return max(root);
    }
    const V* min(){
        return min(root);
    }
    K keys();
    int size(){
        return size(root);
    }
};











template <typename K, typename V>
class AvlTree : public BinarySearchTree<K, V>  {
//private:
//    unsigned char height(BinarySearchTree::TreeNode* node){
//        return (node ? node->height : 0);
//    }
//
//    int balanceFactor(BinarySearchTree::TreeNode* node){
//        return height(node->rightChild) - height(node->leftChild);
//    }
//
//    void fixHeight(BinarySearchTree::TreeNode* node){
//        unsigned char hl = height(node->leftChild);
//        unsigned char hr = height(node->rightChild);
//        node->height = (hl > hr ? hl : hr) + 1;
//    }
//
//    BinarySearchTree::TreeNode* rotateLeft(BinarySearchTree::TreeNode* node){
//        BinarySearchTree::TreeNode* right = node->rightChild;
//        node->rightChild = right->leftChild;
//        right->leftChild = node;
//        fixHeight(node);
//        fixHeight(right);
//        return right;
//    }
//
//    BinarySearchTree::TreeNode* rotateRight(BinarySearchTree::TreeNode* node) {
//        BinarySearchTree::TreeNode* left = node->leftChild;
//        node->leftChild = left->rightChild;
//        left->rightChild = node;
//        fixHeight(node);
//        fixHeight(left);
//        return left;
//    }
//
//    BinarySearchTree::TreeNode* balance(BinarySearchTree::TreeNode* node){
//        fixHeight(node);
//        if(balanceFactor(node) == 2){
//            if(balanceFactor(node->rightChild) < 0){
//                node->rightChild = rotateRight(node->rightChild);
//            }
//            return rotateLeft(node);
//        }
//        if(balanceFactor(node) == -2){
//            if(balanceFactor(node->leftChild) > 0){
//                node->leftChild = rotateLeft(node->leftChild);
//            }
//            return rotateRight(node);
//        }
//        return node;
//    }
//    BinarySearchTree::TreeNode* put(K key, V value, BinarySearchTree::TreeNode* node){
//        return balance(BinarySearchTree::put(key, value, node));
//    }

public:
    void put(K key, V value){
//        root = put(key, value, root);
        root;
    }

};

//#endif //BST_BINARYSEARCHTREE_H
