#include "ffc/types.h"
extern uint8_t data_021394c4[], data_02139494[], data_02139498[], data_02139450[];
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_0202795c(void *, void *, void *);
extern uint32_t func_0205816c(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_02052d98(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint8_t *func_02027a28(void *, void *);
typedef struct { uint8_t *node; void *lock; uint8_t locked; } G;
typedef struct { uint32_t a, b; } Ent;
typedef struct { uint8_t pad[0x14]; Ent *tbl; } O;
typedef struct { O *obj; uint32_t idx; } P;
uint32_t func_02027bdc(P *p) {
    G g; uint32_t r, h;
    g.lock = data_021394c4;
    g.locked = 1;
    if (g.locked) func_0208763c(data_021394c4);
    func_0202795c(&g, data_02139494, p);
    if (g.node != data_02139498) {
        *(uint32_t*)(g.node + 0x18) += 1;
        r = *(uint32_t*)(g.node + 0x1c);
        if (g.locked) func_02087678(g.lock);
        return r;
    }
    r = func_0205816c(*(void**)data_02139450, p->obj->tbl[p->idx].b, 0, 4, 0, 0, 0);
    func_02052d98(p->obj, p->idx, 0, r, ((Ent*)((O*)p->obj)->tbl + *(volatile uint32_t*)&p->idx)->b, 0);
    {
        uint8_t *n = func_02027a28(data_02139494, p);
        *(uint32_t*)(n + 0xc) = 1;
        *(uint32_t*)(n + 0x10) = r;
    }
    if (g.locked) func_02087678(g.lock);
    return r;
}
