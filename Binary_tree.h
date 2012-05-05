/* 
 * File:   Binary_tree.h
 * Author: Takeshi
 *
 * Created on 14 de Novembro de 2009, 10:41
 */

#ifndef _BINARY_TREE_H
#define	_BINARY_TREE_H

using namespace std;
#include <iostream>
#include <vector>
typedef int Node_entry;

struct Binary_node {
    // data members
    Node_entry key;
    Binary_node *left, *right;
    // constructors
    Binary_node();
    Binary_node(Node_entry item, Binary_node *add_on = NULL);
};

typedef Binary_node Binary_entry;

class Binary_tree {
private:
// Add auxiliary function prototypes here.
Binary_node *root;

public:
	Binary_tree( );
	bool empty( ) const;
	void preorder(Binary_node *visit);
	void inorder(Binary_node *visit);
	void postorder(Binary_node *visit);
	int size(Binary_node *visit ) const;
	void clear( );
	int height( ) const;
	bool insert(const Node_entry );
        Binary_node* getRoot();
	Binary_tree (const Binary_tree &original);
        void balancear(Binary_node *visit);
	//Binary_tree & operator = (const Binary_tree<Entry> &original);
};



#endif	/* _BINARY_TREE_H */

