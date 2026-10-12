#include "ffc/types.h"

extern uint8_t data_020b0e8c[];
extern uint8_t data_020b0ea0[];
extern uint8_t data_0213e118[];

extern void func_0208763c(void *);
extern void func_02054738(void *);
extern void func_02087678(void *);
extern void func_02054844(void *);
extern void func_02056844(void *);

typedef struct {
    void *vt0;
    uint32_t f1[4];
    void *vt14;
} Obj;

typedef struct {
    void *p;
    volatile uint8_t b;
} Loc;

Obj *func_0205b784(Obj *p)
{
    Loc l;

    p->vt0 = data_020b0e8c;
    p->vt14 = data_020b0ea0;
    l.p = data_0213e118;
    l.b = 1;
    if (l.b != 0) {
        func_0208763c(data_0213e118);
    }
    func_02054738(&p->vt14);
    if (l.b != 0) {
        func_02087678(l.p);
    }
    func_02054844(&p->vt14);
    func_02056844(p);
    return p;
}
