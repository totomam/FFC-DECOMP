#include "ffc/types.h"

typedef struct Obj {
    void *f0;
    struct Obj *next;
    uint32_t pad[3];
    uint32_t flags;
} Obj;

typedef struct Ent {
    int8_t flag;
    uint8_t rest[15];
} Ent;

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern int func_0207e1cc(void *a, uint32_t b);
extern void func_0208bcc8(void *a, void *b, uint32_t c);
extern void func_02088f30(void);
extern Obj *data_021410cc;
extern Ent data_021410dc[];

static inline void append(Obj **head, Obj *o)
{
    Obj **link = head;
    Obj *n = *head;
    while (n != 0) {
        link = &n->next;
        n = n->next;
    }
    *link = o;
}

int func_0207e4c0(Obj *obj, void *a1, uint32_t sz)
{
    int ret = 0;
    uint32_t irq = func_02088978();
    if (func_0207e1cc(a1, sz) == 0) {
        append(&data_021410cc, obj);
        if (sz <= 3) {
            obj->f0 = 0;
            func_0208bcc8(obj, a1, sz + 1);
        } else if (sz <= 0xf) {
            int i;
            for (i = 0; ; i++) {
                Ent *e;
                if (i >= 16) {
                    func_02088f30();
                    continue;
                }
                e = &data_021410dc[i];
                if (e->flag == 0) {
                    func_0208bcc8(e, a1, sz + 1);
                    obj->f0 = e;
                    break;
                }
            }
        } else {
            func_02088f30();
        }
        obj->flags |= 1;
        ret = 1;
    }
    func_0208898c(irq);
    return ret;
}
