#include "ffc/types.h"

typedef struct Ctx {
    uint32_t pad0;
    void (*cb)(uint32_t, uint32_t, uint32_t);
    uint32_t pad8[2];
    uint16_t a10;
    uint16_t a12;
    void *arr;
    uint16_t a18;
    uint8_t pad1a[0x1e];
    uint16_t a38;
    uint16_t a3a;
} Ctx;

extern Ctx data_021434e4;
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern int32_t func_02089218(uint32_t, uint32_t, uint32_t);

static inline uint8_t chk(uint32_t p, uint32_t x, uint32_t z, uint32_t y)
{
    if (func_02089218(p, x, z) < 0) return 0;
    if (func_02089218(p, y, z) < 0) return 0;
    return 1;
}

void func_0208aa48(uint32_t r7v, uint32_t r4v, void *arr, uint32_t count)
{
    uint32_t r5;
    uint32_t i;
    uint32_t ok;

    data_021434e4.arr = arr;
    data_021434e4.a10 = 0;
    data_021434e4.a12 = (uint16_t)r4v;
    data_021434e4.a18 = (uint16_t)count;
    if (count != 0) {
        i = 0;
        do {
            *(uint16_t *)((uint8_t *)data_021434e4.arr + i * 8 + 4) = 0;
            i++;
        } while (i < count);
    }
    r5 = func_02088978();
    ok = chk(6, 0x2000100 | (uint8_t)r4v, 0, 0x1010000 | r7v);
    if (!(uint8_t)ok) {
        func_0208898c(r5);
        data_021434e4.a38 |= 2;
        if (data_021434e4.cb) {
            data_021434e4.cb(1, 4, 0);
        }
        return;
    }
    data_021434e4.a3a |= 2;
    data_021434e4.a38 &= 0xfffd;
    func_0208898c(r5);
}
