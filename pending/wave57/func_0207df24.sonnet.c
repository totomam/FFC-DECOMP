#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_0207dc60(void *node, int arg);
extern void func_0207dd08(void *obj, int arg);
extern void func_02087058(void *object);
extern void func_0207e890(void *object);

typedef struct Node {
    struct Node *next;
    uint32_t w1;
    uint32_t w2;
    volatile uint32_t flags;
} Node;

typedef struct Obj {
    uint32_t w0;
    uint32_t w1;
    Node *list;
    uint32_t w3;
    uint32_t w4;
    uint32_t flags;
} Obj;

typedef struct Loc {
    uint32_t a;
    uint32_t b;
    Obj *obj;
    uint32_t pad[15];
} Loc;

uint32_t func_0207df24(Obj *obj, int flag)
{
    uint32_t saved1;
    uint32_t saved2;
    uint32_t saved3;
    uint32_t r6 = 0;
    uint32_t f;
    int r4;
    Node *node;
    Node *next;
    Loc loc;

    saved1 = func_02088978();
    if (obj->flags & 0x20) {
        obj->flags &= ~0x20;
        node = obj->list;
        if (node != 0) {
            do {
                next = node->next;
                int c;
                if (node->flags & 2) c = 1; else c = 0;
                if (c != 0) {
                    if (!(node->flags & 0x40)) {
                        func_0207dc60(node, 3);
                        if (next == 0) {
                            next = obj->list;
                        }
                    }
                }
                node = next;
            } while (node != 0);
        }
    }
    func_0208898c(saved1);

    saved2 = func_02088978();
    f = obj->flags;
    if (!(f & 0x40) && !(f & 8) && obj->list != 0) {
        r4 = (flag && !(f & 0x10)) ? 1 : 0;
        if (r4) {
            obj->flags = obj->flags | 0x10;
        }
        func_0208898c(saved2);
        if (r4) {
            func_0207dd08(obj->list, 9);
        }
        saved3 = func_02088978();
        if (flag || r4) {
            r6 = (uint32_t)obj->list;
            ((Node *)r6)->flags = ((Node *)r6)->flags | 0x40;
        }
        if (flag) {
            if (((Node *)r6)->flags & 4) {
                func_02087058((uint8_t *)r6 + 0x18);
                r6 = 0;
            }
        }
        func_0208898c(saved3);
    } else {
        if (flag) {
            if (f & 0x10) {
                func_0207e890(&loc);
                loc.obj = obj;
                obj->flags = obj->flags & ~0x10;
                func_0207dd08(&loc, 10);
            }
            f = obj->flags;
            if (f & 0x40) {
                f = (f & ~0x40) | 8;
                obj->flags = f;
                func_02087058((uint8_t *)obj + 0xc);
            }
        }
        func_0208898c(saved2);
    }
    return r6;
}
