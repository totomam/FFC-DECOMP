#include "ffc/types.h"

typedef struct {
    int32_t w0;
    uint8_t pad1[0x8];
    uint8_t b0c;
    uint8_t pad2[0x3f];
    int32_t w4c;
    uint8_t pad3[0x4];
    int32_t w54;
} S10;

extern void func_ov000_021663e8(void *dst, const void *src, uint32_t len);
extern void func_ov000_02165914(void);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_ov000_02164c8c(void *p, uint32_t n, void *q);
extern int32_t func_ov000_02165418(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void func_ov000_02164cd4(void);

extern uint8_t data_ov000_02170990[];
extern S10 data_ov000_02170a10;
extern int8_t data_ov000_021709d0;
extern uint8_t data_ov000_0216b358[];
extern uint8_t data_ov000_02170a14[];
extern uint8_t data_ov000_02170a21[];

void func_ov000_02164d04(void *a) {
    uint8_t buf[0x40];
    int8_t r4;
    int32_t r0;
    uint32_t n;

    func_ov000_021663e8(data_ov000_02170990, a, 0x40);
    data_ov000_02170a10.w0 = -1;
    func_ov000_02165914();
    r4 = data_ov000_021709d0;
    if (r4 == 0) {
        func_02086ad4(buf, (uint32_t)data_ov000_0216b358, a);
    }
    if (func_ov000_02164c8c(r4 != 0 ? (void *)&data_ov000_021709d0 : (void *)buf, 0x6cfc, data_ov000_02170a14) == 0) {
        return;
    }
    r0 = func_ov000_02165418(2, 2, 0);
    data_ov000_02170a10.w0 = r0;
    if (r0 == -1) {
        return;
    }
    data_ov000_02170a10.b0c = 9;
    n = func_02092864(a);
    func_02090380(data_ov000_02170a21, a, n + 1);
    data_ov000_02170a10.w4c = n + 6;
    func_ov000_02164cd4();
    data_ov000_02170a10.w54 = 0;
}
