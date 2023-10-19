#include <stdio.h>
#include "bst.h"

int main()
{
  Tree t = createTree();
  // link x;
  // insert(t, 99);
  // imprime(t, "arvore");
  // insert(t, 88);
  // imprime(t, "arvore");
  // insert(t, 77);
  // imprime(t, "arvore");

  AVLinsert(t, 18);
  AVLinsert(t, 2);
  AVLinsert(t, 13);
  AVLinsert(t, 37);
  AVLinsert(t, 39);

  imprime(t,"ARVORE");

  return 0;
}
