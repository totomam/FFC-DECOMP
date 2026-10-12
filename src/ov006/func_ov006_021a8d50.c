#include "ffc/types.h"

typedef struct {
    uint8_t flag;
    uint32_t val;
} S_ov006;

extern void func_ov006_021a8dd4(void);
extern void func_ov006_021a8df8(void);
extern void func_ov006_021a8dfc(void);
extern int32_t func_ov006_021a6080(void);
extern void func_ov006_021b578c(uint32_t a, uint32_t b);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021b0644(void);
extern void func_ov006_021b11fc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov006_021b0600(uint32_t a);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021a8f80(void);
extern void func_ov006_021a8f48(void);
extern S_ov006 data_ov006_021bc76c;

void func_ov006_021a8d50(void)
{
    func_ov006_021a8dd4();
    func_ov006_021a8df8();
    func_ov006_021a8dfc();
    switch (func_ov006_021a6080()) {
    case 0:
        return;
    case 1: {
        S_ov006 *p = &data_ov006_021bc76c;
        uint32_t v = p->val;
        if (v == 0) return;
        p->flag = 1;
        func_ov006_021b578c(1, v);
        p->val = 0;
        func_ov006_021a64c8(func_ov006_021a8f80);
        return;
    }
    case 2: {
        S_ov006 *p = &data_ov006_021bc76c;
        if (p->val == 0) return;
        func_ov006_021b0644();
        func_ov006_021b11fc(12, 1, 1, (uint32_t)-1, 0);
        func_ov006_021b0600(9);
        func_ov006_021a37a8();
        func_ov006_021b578c(1, p->val);
        p->val = 0;
        func_ov006_021a64c8(func_ov006_021a8f48);
        return;
    }
    default:
        return;
    }
}
