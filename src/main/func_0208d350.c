#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint16_t d;
    uint32_t e;
    uint32_t f;
    uint16_t g;
    uint16_t h;
    uint8_t sub[6];
    uint16_t i;
    uint32_t val;
    uint16_t j;
    uint16_t k;
    uint8_t tail[0x44 - 0x24];
} func_0208d350_buf;

extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_02088b3c(void *p);
extern uint32_t func_02088978(void);
extern uint32_t func_0208cef8(void);
extern void func_0208898c(uint32_t r);
extern uint8_t *func_0208ceec(void);
extern uint16_t func_0208d284(void);
extern uint16_t func_0208d260(void);

uint32_t func_0208d350(uint32_t idx, void (*cb)(void *), uint32_t val)
{
    func_0208d350_buf buf;
    uint32_t r7;
    uint32_t ret;
    uint8_t *p;

    if (cb != 0) {
        func_02084b2c(&buf, 0, 0x44);
        buf.a = 0x82;
        buf.b = 0;
        buf.c = 0x19;
        buf.d = idx;
        buf.e = 0;
        buf.f = 0;
        buf.g = 0;
        buf.i = 0xffff;
        buf.val = val;
        buf.h = 0;
        func_02088b3c(buf.sub);
    }
    r7 = func_02088978();
    ret = func_0208cef8();
    if (ret != 0) {
        func_0208898c(r7);
        return ret;
    }
    p = func_0208ceec() + idx * 4;
    *(void **)(p + 0xcc) = cb;
    *(uint32_t *)(p + 0x10c) = val;
    if (cb != 0) {
        buf.k = func_0208d284();
        buf.j = func_0208d260();
        cb(&buf);
    }
    func_0208898c(r7);
    return 0;
}
