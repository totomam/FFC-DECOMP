/* cflags: -nothumb */
#include "ffc/types.h"

typedef void (*cb_t)(uint32_t, uint32_t);
typedef struct {
    volatile uint16_t a;
    volatile uint16_t b;
    uint32_t arg;
    cb_t fn;
} S;

extern S data_0213df00;
extern void func_02088cd8(uint16_t, uint16_t);
extern void func_020891a8(uint32_t, uint32_t);

void func_0204e4c0(uint32_t x, uint32_t ev)
{
    uint32_t hi = ev & 0xffff0000;
    cb_t fn = data_0213df00.fn;
    uint32_t arg = data_0213df00.arg;
    uint32_t lo = ev & 0xff;

    switch (hi) {
    case 0x10000:
        if (lo == 7) {
            if (data_0213df00.b != 0 && data_0213df00.a != 0) {
                func_02088cd8(data_0213df00.b, data_0213df00.a);
                data_0213df00.b = 0;
            }
        }
        break;
    case 0x20000:
        if (lo == 0) {
            if (data_0213df00.b != 0 && data_0213df00.a != 0) {
                func_02088cd8(data_0213df00.b, data_0213df00.a);
                data_0213df00.b = 0;
            }
        }
        func_020891a8(0xf, 0);
        break;
    }

    if (fn != 0) {
        data_0213df00.fn = 0;
        data_0213df00.arg = 0;
        fn(arg, lo);
    }
}
