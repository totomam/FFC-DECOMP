#include "ffc/types.h"

struct Obj {
    uint8_t pad[0x18];
    void *f18;
    void *f1c;
};

struct Loc {
    uint8_t pad[0x48];
    uint32_t a48;
    uint32_t a4c;
    uint32_t a50;
    uint32_t a54;
    uint32_t a58;
    uint8_t rest[0xa0 - 0x5c];
};

extern void func_02084b2c(void *dst, int val, uint32_t size);
extern void func_ov000_02147794(struct Loc *loc);
extern uint32_t func_ov000_02148b24(uint32_t x);
extern void func_ov000_021477a4(void);
extern struct Obj *data_ov000_02169a34;

uint32_t func_ov000_0214e898(uint32_t p)
{
    struct Loc loc;
    uint32_t r4 = p;
    uint32_t r5;
    struct Obj *obj = data_ov000_02169a34;

    if (obj == 0) {
        return 0;
    }
    if (r4 == 0) {
        return 0;
    }
    r5 = ((uint32_t (*)(uint32_t))obj->f18)(0x1708);
    if (r5 == 0) {
        return 0;
    }
    func_02084b2c(&loc, 0, 0xa0);
    loc.a4c = r5;
    loc.a48 = 0xb68;
    loc.a58 = r5 + 0xb68;
    loc.a54 = 0xb68 + 0x36;
    func_ov000_02147794(&loc);
    r4 = func_ov000_02148b24(r4);
    func_ov000_021477a4();
    obj = data_ov000_02169a34;
    ((void (*)(uint32_t))obj->f1c)(r5);
    return r4;
}
