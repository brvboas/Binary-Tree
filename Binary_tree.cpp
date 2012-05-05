/* 
 * File:   Binary_tree.cpp
 * Author: Takeshi
 * 
 * Created on 14 de Novembro de 2009, 10:41
 */

#include "Binary_tree.h"

Binary_node::Binary_node() {
    left = NULL;
    right = NULL;
}

Binary_node::Binary_node(Node_entry item, Binary_node *add_on) {
    key = item;
    left = add_on;
    right = add_on;
}

Binary_tree::Binary_tree() {
    root = NULL;
}

bool Binary_tree::empty() const {
    return root == NULL;
}

bool Binary_tree::insert(const Node_entry el) {
    Binary_node *newNode = new Binary_node(el);

    if (newNode == NULL)
        return false;

    if (root == NULL)
        root = newNode;
    else {

        Binary_node *currentNode = root;
        Binary_node *prevNode = NULL;

        while (currentNode != NULL) {
            if (el < currentNode->key) {//vai pra esquerda
                prevNode = currentNode;
                currentNode = currentNode->left;
            } else {//direita
                prevNode = currentNode;
                currentNode = currentNode->right;
            }
        }

        if (el < prevNode->key) {
            prevNode->left = newNode;
        } else {
            prevNode->right = newNode;
        }

    }
    return true;

}

void Binary_tree::inorder(Binary_node *visit) {
    if (visit != NULL) {
        inorder(visit->left);
        cout << visit->key << " ";
        inorder(visit->right);
    }
}

void Binary_tree::preorder(Binary_node* visit) {
    if (visit != NULL) {
        cout << visit->key << " ";
        preorder(visit->left);
        preorder(visit->right);
    }
}

void Binary_tree::postorder(Binary_node* visit) {
    if (visit != NULL) {
        postorder(visit->left);
        postorder(visit->right);
        cout << visit->key << " ";
    }
}

Binary_node* Binary_tree::getRoot() {
    return root;
}

int Binary_tree::size(Binary_node *visit) const {
    static int cont = 0;
    if (visit != NULL) {
        cont++;
        size(visit->left);
        size(visit->right);
    }
    return cont;
}

void Binary_tree::balancear(Binary_node *visit) {
    static int i = 0;
    static vector<int> v[50];
    if (v->back()!= NULL){
        if (visit != NULL) {
            balancear(visit->left);
            v[i]->insert(i,visit->key);
            i++;
            balancear(visit->right);
        }
    }

}
