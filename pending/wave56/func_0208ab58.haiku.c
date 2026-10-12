#include "ffc/types.h"

typedef struct { uint16_t a, b, c, d; } Ent;
typedef struct { uint8_t pad0[0x10]; uint16_t h10; uint16_t h12; Ent *p14; uint16_t h18; } G;

extern G data_021434e4;

void func_0208ab58(Ent *o) {
    int i;
    int idx;
    Ent *e;
    uint16_t h10;
    uint16_t h12;

    o->d = 3;
    h12 = data_021434e4.h12;
    h10 = data_021434e4.h10;
    if (h12 == 1) {
        goto fast;
    }
    if (data_021434e4.h18 != 1) {
        goto slow;
    }
fast:
    e = data_021434e4.p14 + h10;
    o->a = e->a;
    o->b = e->b;
    o->c = e->c;
    o->d = e->d;
    return;
slow:
    i = 0;
    while (i < data_021434e4.h12 && i < (int)data_021434e4.h18 - 1) {
        idx = (int)h10 - i;
        if (idx < 0) {
            idx += data_021434e4.h18;
        }
        e = data_021434e4.p14 + idx;
        if (e->c == 0) {
            o->a = e->a;
            o->b = e->b;
            o->c = e->c;
            o->d = e->d;
            return;
        }
        if ((o->d & 1) && !(e->d & 1)) {
            o->a = e->a;
            if (i != 0) {
                o->d &= 0xfffe;
            }
        }
        if ((o->d & 2) && !(e->d & 2)) {
            o->b = e->b;
            if (i != 0) {
                o->d &= 0xfffd;
            }
        }
        if (o->d == 0) {
            o->c = 1;
            return;
        }
        i++;
    }
    o->c = 1;
}
