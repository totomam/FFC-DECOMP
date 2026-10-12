#include "ffc/types.h"

typedef struct {
    uint8_t mode;
    uint8_t flag;
    uint16_t pad;
    uint32_t f4;
    uint32_t f8;
} DataStruct;

extern DataStruct data_ov006_021bc748;
extern void func_ov006_021a6c54(void);
extern void func_ov006_021a7440(void);
extern void func_ov006_021a7008(void);
extern void func_ov006_021a80b0(void);

extern int func_ov006_021b3fb8(uint32_t x);
extern int func_ov006_021a3778(void);
extern void func_ov006_021b51a8(uint32_t x);
extern void func_ov006_021a3df0(void);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b392c(uint32_t x);
extern void func_ov006_021b4734(uint32_t a, uint32_t b);
extern void func_ov006_021a64d4(uint32_t a, uint32_t b);
extern void func_ov006_021a64c8(void *fn);

void func_ov006_021a7afc(void)
{
    DataStruct *p;

    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    p = &data_ov006_021bc748;
    func_ov006_021b51a8(p->f8);
    func_ov006_021a3df0();
    func_ov006_021a3b28();
    func_ov006_021b392c(p->f4);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x14);

    if (p->flag == 0) {
        func_ov006_021a64d4(0, 0);
        func_ov006_021a64c8((void *)func_ov006_021a6c54);
        return;
    }
    switch (p->mode) {
    case 0:
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8((void *)func_ov006_021a7440);
        break;
    case 1:
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8((void *)func_ov006_021a7008);
        break;
    case 2:
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8((void *)func_ov006_021a80b0);
        break;
    default:
        break;
    }
}
