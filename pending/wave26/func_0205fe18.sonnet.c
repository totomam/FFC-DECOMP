#include "ffc/types.h"
typedef struct {
    uint32_t a:8;
    uint32_t b:2;
    uint32_t c:22;
} F;
typedef struct {
    F f;
    uint16_t aux;
    uint16_t pad;
} Item;
typedef struct {
    uint32_t unk0;
    Item *items;
    uint32_t unk8;
    uint32_t unkC;
    uint32_t count;
} Obj;
void func_0205fe18(Obj *p) {
    uint32_t n = p->count;
    Item *it = p->items;
    while (n != 0) {
        F t = {0,0,0};
        it->aux = 0;
        t.b = 2;
        it->f = t;
        it++;
        n--;
    }
}
