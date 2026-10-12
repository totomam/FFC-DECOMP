#include "ffc/types.h"

typedef struct {
    uint8_t pad0;
    uint8_t flag;
    uint8_t pad2[2];
    uint32_t field4;
    uint32_t pad8;
    void (*fn_c)(void);
} Ctx;

extern int func_02087460(void);
extern int func_ov006_021a6158(uint32_t a, uint32_t b);
extern uint32_t func_ov000_0215554c(void);
extern void func_ov000_02155540(void *p);
extern void func_ov006_021a61a8(void);
extern void func_ov006_021a624c(void);
extern void func_ov006_021b055c(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021b4ac8(void);
extern void func_ov006_021b56a8(uint32_t a);
extern void func_ov006_021b4f34(void);
extern void func_ov006_021b55b8(void);
extern void func_02088a18(void);
extern void func_ov006_021a6478(void);
extern void func_ov006_021a6a80(void);

extern Ctx data_ov006_021bc70c;
extern uint8_t data_ov006_021b90b8[];

int func_ov006_021a60cc(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t saved;
    uint32_t r5;

    if (func_02087460() != 0) {
        return -2;
    }
    data_ov006_021bc70c.field4 = a;
    if (func_ov006_021a6158(b, c) == 0) {
        return -1;
    }
    saved = func_ov000_0215554c();
    func_ov000_02155540(data_ov006_021b90b8);
    data_ov006_021bc70c.flag = 0;
    func_ov006_021a61a8();
    func_ov006_021a624c();
    func_ov006_021b055c();
    func_ov006_021a64c8((void *)func_ov006_021a6a80);
    r5 = 0;
    do {
        func_ov006_021b4ac8();
        data_ov006_021bc70c.fn_c();
        func_ov006_021b56a8(r5);
        func_ov006_021b4f34();
        func_ov006_021b55b8();
        func_02088a18();
    } while (data_ov006_021bc70c.flag == 0);
    func_ov006_021a6478();
    func_ov000_02155540((void *)saved);
    return r5;
}
