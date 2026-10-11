#include "ffc/types.h"
typedef struct { uint8_t pad[0x51c]; void (*fn)(int); } Obj;
typedef struct { uint8_t pad[0xc]; Obj *obj; } Bss;
extern Bss data_ov006_021ba150;
typedef struct { uint16_t a; uint16_t b; uint16_t c; } Msg;

static inline void handle(Msg *m)
{
    if (m->b != 0) return;
    switch (m->c) {
    case 7: case 9: case 0x19: case 0x1a: return;
    case 0x15: data_ov006_021ba150.obj->fn(9); return;
    }
}
void func_ov006_0219ba9c(Msg *m)
{
    handle(m);
}
