#include "ffc/types.h"

typedef struct Ent {
    struct Ent *prev;
    struct Ent *next;
    uint16_t a8;
    uint16_t a10;
} Ent;

typedef struct Slot {
    uint8_t pad0[384];
    Ent head;
    Ent tail;
    uint32_t pad1;
    void *ptr;
} Slot;

extern Slot *data_ov006_021bc84c;
extern Ent *func_ov006_021b3f44(void *p);
extern uint32_t func_02086700(int x);
extern void func_ov006_021b509c(Ent *n, Ent *obj);
extern void func_02088f30(void);
extern void func_020866dc(uint32_t h);

Ent *func_ov006_021b52c8(int a, int len, int flag, uint32_t *out)
{
    Slot *s;
    Ent *obj;
    Ent *n;
    int size;
    uint32_t h;

    s = data_ov006_021bc84c + a;
    obj = func_ov006_021b3f44(s->ptr);
    size = ((len + 3) & ~3) >> 2;
    obj->a10 = size;
    h = func_02086700(1);
    if (flag) {
        n = &(data_ov006_021bc84c + a)->head;
        while (n != &(data_ov006_021bc84c + a)->tail) {
            Ent *next = n->next;
            int pos = n->a8 + n->a10;
            if (pos + size <= next->a8) {
                obj->a8 = pos;
                func_ov006_021b509c(next, obj);
                break;
            }
            n = next;
        }
        if (n == &(data_ov006_021bc84c + a)->tail) {
            func_02088f30();
        }
    } else {
        n = &(data_ov006_021bc84c + a)->tail;
        while (n != &(data_ov006_021bc84c + a)->head) {
            Ent *prev = n->prev;
            int pos = n->a8 - size;
            if (pos >= prev->a8 + prev->a10) {
                obj->a8 = pos;
                func_ov006_021b509c(n, obj);
                break;
            }
            n = prev;
        }
        if (n == &(data_ov006_021bc84c + a)->head) {
            func_02088f30();
        }
    }
    *out = obj->a8;
    func_020866dc(h);
    return obj;
}
