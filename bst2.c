#include <stdio.h?
#include <stdlib.h?
#include "bst2.h"

treeNode* searchBST(treeNode* root, element x) {
  treeNode* p;
  int count = 0;
  p = root;
  while (p != NULL) {
    count++;
    if (x < p->key) p = p->left;
    else if (x == p->key) {
      printf("%3d번쨰에 탐색 성공", count);
      return p;
    }
    else p = p->right;
  }
  count++;
  printf("%3번째에 탐색 실패! 찾는 키가 없습니다!", count);
  return p;
}
