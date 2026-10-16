#include "ffc/types.h"
extern void func_02056bf4();
extern void func_02054218(void);
extern void func_02054380(void);
typedef void (*Fn)(void*);
typedef struct { uint8_t pad[0x48]; uint8_t l[0xac]; void *a; void *b; } S;
void func_ov013_021bd420(S *p) {
    void *a = p->a;
    if (a != 0) {
        void *b = p->b;
        uint8_t *l = p->l;
        func_02056bf4(l);
        func_02056bf4(l, b);
        if (p->b != 0) { void *o = p->b; (*(Fn**)o)[1](o); }
        if (p->a != 0) { void *o = p->a; (*(Fn**)o)[1](o); }
        p->b = 0;
        p->a = 0;
        func_02054218();
        func_02054380();
    }
}
