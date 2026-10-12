#include "ffc/types.h"

typedef struct G { uint32_t pad; uint8_t *sub; } G;
extern G data_ov000_02170064;

extern int func_ov000_02159000(void);
extern void func_020849ac(uint32_t v, void *dst, uint32_t n);
extern uint32_t func_ov000_02159428(void *p);
extern void func_020849c4(void *p, void *dst, uint32_t n);
extern int func_ov000_02153050(void);
extern void func_ov000_0215a64c(int a, uint32_t b);
extern void func_ov000_0215b7a4(int a);
extern void func_ov000_02164d04(uint32_t a);

int func_ov000_0215aee0(void *p, int unused, uint32_t a2, uint32_t a3) {
    uint32_t n;

    if (p == 0) {
        return 0;
    }
    if (func_ov000_02159000() != 0 || *(uint32_t *)(data_ov000_02170064.sub + 0x24) != 0) {
        return 0;
    }
    *(uint32_t *)(data_ov000_02170064.sub + 0x70) = a2;
    *(uint32_t *)(data_ov000_02170064.sub + 0x74) = a3;

    if (p == 0 || *(uint16_t *)p == 0) {
        n = 0;
    } else {
        func_020849ac(0, data_ov000_02170064.sub + 0x30, 0x34);
        if (func_ov000_02159428(p) <= 0x19) {
            n = func_ov000_02159428(p);
        } else {
            n = 0x19;
        }
        func_020849c4(p, data_ov000_02170064.sub + 0x30, n * 2);
    }

    *(uint16_t *)(data_ov000_02170064.sub + 0x30 + n * 2) = 0;

    if (func_ov000_02153050() != 4) {
        func_ov000_0215a64c(2, 0xffff1596);
        return 0;
    }
    func_ov000_0215b7a4(1);
    func_ov000_02164d04(*(uint32_t *)(data_ov000_02170064.sub + 0x68));
    return 1;
}
