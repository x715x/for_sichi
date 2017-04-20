#include "bstree.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct bstree *bstree_create(char *key, int value){
    struct bstree *node;
    node = malloc(sizeof(*node));
    if (node != NULL) {
        node->key = key;
        node->value = value;
        node->left = NULL;
        node->right = NULL;
    }
    return node;
}

void bstree_add(struct bstree *tree, int key, char *value){
    struct bstree *parent, *node;
    if (tree == NULL)
        return;
    for (parent = tree; tree != NULL; ) {
        parent = tree;
        if (key < tree->key)
            tree = tree->left;
        else if (key > tree->key)
            tree = tree->right;
            else
            return;
} 
