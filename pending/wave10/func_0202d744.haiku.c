#include "ffc/types.h"

typedef struct Obj {
    uint32_t pad;
    struct Obj *next;
} Obj;

void func_0202d744(uint8_t *p) {
    Obj *o = *(Obj **)(p + 0x5c);
    while (o != 0) {
        *((uint8_t *)o + 0x43) = 0;
        o = o->next;
    }
}
