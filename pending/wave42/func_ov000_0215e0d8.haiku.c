#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void *p);
extern void func_02086b04(void *dst, uint32_t n, const void *src, uint32_t v);
extern void func_ov000_0215925c(const void *a, void *b, void *c, uint32_t d);
extern uint32_t func_ov000_02163408(void);
extern void func_ov000_02159284(const void *a, void *b, void *c, uint32_t d);
extern uint32_t func_ov000_02163984(void);
extern void func_ov000_02159a30(void *a, void *b, uint32_t c);
extern uint8_t data_ov000_0216aff4[];
extern uint8_t data_ov000_0216aff8[];
extern uint8_t data_ov000_0216affc[];
extern uint8_t data_ov000_0216b000[];
extern uint8_t data_ov000_0216b004[];

void func_ov000_0215e0d8(void *a) {
    uint8_t buf[0x34];
    uint8_t *x;
    uint32_t r4;
    uint32_t r3;
    void *q;

    x = func_ov000_02163350(a);
    func_02086b04(buf + 0x27, 0xc, data_ov000_0216aff4, x[0x17] + 1);
    func_ov000_0215925c(data_ov000_0216aff8, buf + 0x27, buf, 0x2f);
    q = func_ov000_02163408();
    r4 = (uint32_t)(uintptr_t)q;
    x = func_ov000_02163350(q);
    if (x[0x15] == 2 && q == 0) {
        r4 = 1;
    }
    func_02086b04(buf + 0x27, 0xc, data_ov000_0216aff4, r4);
    func_ov000_02159284(data_ov000_0216affc, buf + 0x27, buf, 0x2f);
    func_02086b04(buf + 0x27, 0xc, data_ov000_0216aff4, 0x5a);
    func_ov000_02159284(data_ov000_0216b000, buf + 0x27, buf, 0x2f);
    r3 = func_ov000_02163984() != 0;
    func_02086b04(buf + 0x27, 0xc, data_ov000_0216aff4, r3);
    func_ov000_02159284(data_ov000_0216b004, buf + 0x27, buf, 0x2f);
    func_ov000_02159a30(a, buf, 0);
}
