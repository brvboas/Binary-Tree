/* 
 * File:   main.cpp
 * Author: Takeshi
 *
 * Created on 14 de Novembro de 2009, 10:41
 */

#include "Binary_tree.h"
/*
 * 
 */
int main() {
    Binary_tree ab;
    ab.insert(10);
    ab.insert(1);
    ab.insert(6);
    ab.insert(20);

    ab.inorder(ab.getRoot());
    cout<< endl;
    ab.postorder(ab.getRoot());
    cout<< endl;
    ab.preorder(ab.getRoot());
    int a=ab.size(ab.getRoot());
    ab.balancear(ab.getRoot());
    cout << a;
    return 0;
}

