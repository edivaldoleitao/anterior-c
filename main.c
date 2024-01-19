noh *Anterior (noh *x) {
 if (x->esq != NULL) {
 noh *y = x->esq;
 while (y->dir != NULL) y = y->dir;
 return y;
 }
 while (x->pai != NULL && x->pai->esq == x)
 x = x->pai;
 return x->pai;
 } 
