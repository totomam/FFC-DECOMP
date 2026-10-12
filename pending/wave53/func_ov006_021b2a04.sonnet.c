#include "ffc/types.h"

typedef void (*CbFn)(uint32_t, uint32_t, uint32_t);

typedef struct Obj {
    uint8_t p0[0x0c];
    uint16_t f0c;
    uint16_t f0e;
    uint16_t f10;
    uint16_t f12;
    uint16_t f14;
    uint16_t f16;
    uint16_t f18;
    uint8_t p1[0x32 - 0x1a];
    uint16_t f32;
    uint16_t f34;
    uint16_t f36;
    uint8_t p2[0x40 - 0x38];
    uint32_t f40;
    uint32_t f44;
    uint8_t p3[0x12a0 - 0x48];
    uint32_t f12a0;
    uint32_t f12a4;
} Obj;

typedef struct Glob {
    CbFn fn;
    Obj *obj;
} Glob;

extern void func_02088f30(void);
extern void func_ov006_021b20f0(int);
extern uint16_t func_0208d614(void);
extern int func_ov006_021b2154(void);
extern Glob data_ov006_021bc800;
extern uint32_t data_ov006_021b9efc;
extern uint32_t data_ov006_021b9f14;
extern uint32_t data_ov006_021b9f5c;

int func_ov006_021b2a04(int a, int b, int c)
{
    int ret;
    if (data_ov006_021bc800.obj->f40 != 1) {
        func_02088f30();
        ret = 0;
    }
    data_ov006_021bc800.obj->f12a4 = 0x180;
    data_ov006_021bc800.obj->f12a0 = 0xe0;
    if (data_ov006_021bc800.fn) {
        data_ov006_021bc800.fn(0x8000000, (uint32_t)&data_ov006_021b9efc, data_ov006_021bc800.obj->f12a4);
    }
    if (data_ov006_021bc800.fn) {
        data_ov006_021bc800.fn(0x8000000, (uint32_t)&data_ov006_021b9f14, data_ov006_021bc800.obj->f12a0);
    }
    data_ov006_021bc800.obj->f44 = a;
    func_ov006_021b20f0(3);
    data_ov006_021bc800.obj->f0c = b;
    data_ov006_021bc800.obj->f32 = c;
    data_ov006_021bc800.obj->f18 = func_0208d614();
    data_ov006_021bc800.obj->f34 = 0xd0;
    data_ov006_021bc800.obj->f36 = 0x44;
    data_ov006_021bc800.obj->f10 = 2;
    data_ov006_021bc800.obj->f16 = 0;
    data_ov006_021bc800.obj->f12 = 0;
    data_ov006_021bc800.obj->f0e = 1;
    {
        uint16_t v = 1;
        if (a != 2) {
            v = 0;
        }
        data_ov006_021bc800.obj->f14 = v;
    }
    if (a == 0 || a == 2 || a == 4) {
        return func_ov006_021b2154();
    }
    if (data_ov006_021bc800.fn) {
        data_ov006_021bc800.fn(0x8000000, (uint32_t)&data_ov006_021b9f5c, a);
    }
    return 0;
}
