#ifndef BST_H
#define BST_H

typedef struct node *link;
struct node
{
  link l;
  link r;
  int item;
  int N;  // nos na subarvore
  int id; // id da nó
};

typedef struct tree
{
  link head; // raiz
  link z;    // no externo
} *Tree;

Tree createTree();

link rotR(Tree t, link h);

link rotL(Tree t, link h);

link search(Tree h, int query);

link insert(Tree h, int item);

void imprimeEmOrdem(Tree t, link h);
void imprimePosOrdem(Tree t, link h);
void imprimePreOrdem(Tree t, link h, int k);

int max(int a, int b);

int altura(link h);

int fatorEquilibrio(link h);

link AVLinsertR(Tree t, link h, int item);

link AVLinsert(Tree t, int item);

void imprime(Tree a, char *s);

#endif
