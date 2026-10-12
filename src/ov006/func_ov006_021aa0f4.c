#include "ffc/types.h"

extern uint8_t *data_ov006_021bc780;
extern int func_ov006_021a42a0(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a42b0(int);
extern void func_ov006_021a64c8(void *);
extern int func_ov006_021aa504(void);
extern void func_ov006_021a42c4(int);
extern void func_ov006_021aa380(void);
extern void func_ov006_021aa410(void);
extern void func_ov006_021aa210(void);

void func_ov006_021aa0f4(void)
{
    uint8_t **pp = &data_ov006_021bc780;
    uint8_t *e;
    int r5;

    r5 = func_ov006_021a42a0();
    switch (r5) {
    case 0:
        goto end;
    case 0x80:
        if ((*pp)[0x29] != 0) {
            func_ov006_021b0600(3);
            (*pp)[0x29]--;
            e = (*pp) + (*pp)[0x29];
            e[8] = 0;
            if ((*pp)[0x29] == 0) {
                func_ov006_021a42b0(0);
            }
            func_ov006_021a42c4(1);
        }
        goto end;
    case 0x82:
        func_ov006_021b0600(7);
        (*pp)[0x2a] = 0;
        func_ov006_021a64c8(func_ov006_021aa210);
        return;
    case 0x83:
        if (func_ov006_021aa504() != 0) {
            func_ov006_021b0600(6);
            (*pp)[0x2a] = 1;
        } else {
            (*pp)[0x2a] = 2;
            func_ov006_021b0600(9);
        }
        {
            uint32_t *q = *(uint32_t **)((*pp) + 4);
            *q = (*q & 0xc1fffcffu) | 0x200u;
        }
        func_ov006_021a64c8(func_ov006_021aa210);
        return;
    case 0xe01d:
        break;
    default:
        break;
    }
    if ((*pp)[0x29] != 0x20) {
        func_ov006_021b0600(1);
        e = (*pp) + (*pp)[0x29];
        e[8] = (uint8_t)r5;
        (*pp)[0x29]++;
        func_ov006_021a42b0(1);
        if ((*pp)[0x29] == 0x20) {
            func_ov006_021a42c4(0);
        }
    }
end:
    func_ov006_021aa380();
    func_ov006_021aa410();
}
