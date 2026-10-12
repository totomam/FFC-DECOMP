#include "ffc/types.h"

extern uint8_t *data_ov006_021bc80c;
extern uint8_t data_ov006_021ba04c[];
extern int func_ov006_021b3f44(uint32_t x);
extern void func_0207e890(void *object);
extern int func_0207eb28(void *object, uint32_t x);
extern void func_02088f30(void);
extern uint32_t func_0207eb34(void *object);
extern int func_ov006_021b3950(uint32_t a, void *b, uint32_t c);
extern uint32_t func_ov006_021b49e4(uint32_t a, uint32_t b);
extern void func_0207eab0(void *object, uint32_t a, uint32_t b);
extern void func_0207ea0c(void *object);
extern void func_02085410(uint32_t a, uint32_t b);
extern void func_ov006_021b49fc(uint32_t *p);

uint32_t func_ov006_021b3888(uint32_t p0, uint32_t *p1, uint32_t p2)
{
    uint32_t buf[18];
    uint32_t ptr;
    uint32_t v;
    uint32_t n;
    uint32_t res;

    func_ov006_021b3f44(*(uint32_t *)(data_ov006_021bc80c + 0x84));
    func_0207e890(buf);
    if (func_0207eb28(buf, p0) == 0) {
        func_02088f30();
    }
    v = func_0207eb34(buf);
    if (p1 != 0) {
        *p1 = v;
    }
    if (func_ov006_021b3950(p0, data_ov006_021ba04c, 2) != 0) {
        n = (uint32_t)-4;
    } else {
        n = p2;
    }
    ptr = func_ov006_021b49e4(v, n);
    func_0207eab0(buf, ptr, v);
    func_0207ea0c(buf);
    if ((int)n > 0) {
        return ptr;
    }
    res = *(uint32_t *)ptr >> 8;
    if (p1 != 0) {
        *p1 = res;
    }
    n = func_ov006_021b49e4(res, p2);
    func_02085410(ptr, n);
    func_ov006_021b49fc(&ptr);
    return n;
}
