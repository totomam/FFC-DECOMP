#include "ffc/types.h"

extern void *func_ov002_021a16e4(void *obj);
extern void func_ov002_021a1788(void *obj, uint16_t val);
extern void *func_0203bd04(uint32_t id, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);
extern void func_ov002_021a1350(void *obj, void *node);

void func_ov002_021a4194(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint8_t *r;
    uint8_t *r5;
    uint8_t *n;

    r = (uint8_t *)func_ov002_021a16e4(*(void **)(p + 0x80));
    func_ov002_021a1788(*(void **)(p + 0x80), *(uint16_t *)(r + 8));
    r5 = (uint8_t *)func_0203bd04(0x100eb, 0, 0, 1);
    func_02056bc0(p + 0x14, r5);
    n = (uint8_t *)func_02056aec(p);
    func_02056bc0(p + 0x14, n);
    if (r5 != 0) {
        r5 += 0x14;
    }
    func_ov002_021a1350(*(void **)(p + 0x80), r5);
}
