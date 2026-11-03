#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

treeNode* LL_rotate(treeNode* parent) {
  treeNode* child = parent->left;
  parent->left = child->right;
  child->right = parent;
  return child;
}

treeNode* RR_rotate(treeNode* parent) {
  treeNode* child = parent->right;
  parent->right = child->left;
  child->left = parent;
  return child;
}

treeNode* LR_rotate(treeNode* parent) {
  treeNode* child = parent->left;
  parent->left = RR_rotate(child);
  return LL_rotate(parent);

treeNode* RL_rotate(treeNode* parent) {
  treeNode* child = parent->right;
  parent->right = LL_rotate(child);
  return RR_rotate(parent);
}
