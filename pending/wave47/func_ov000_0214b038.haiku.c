#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov000_0214b0e0(void *p, uint32_t n);
extern void func_ov000_0214c434(void *p);
extern uint32_t func_02088978(void);
extern void func_ov000_0214c46c(void *dst, void *src, uint32_t n);
extern void func_ov000_0214c534(void *a, void *b);
extern void func_0208898c(uint32_t h);

typedef struct {
    uint64_t a;
    uint64_t b;
    uint64_t c;
} S_bcd8;

extern S_bcd8 data_ov000_0216bcd8;
extern uint8_t data_ov000_0216de80;
extern uint8_t data_ov000_0216de88[20];

void func_ov000_0214b038(uint8_t *out, int32_t n)
{
    uint8_t tmp[20];
    uint8_t ctx[0x58];
    uint32_t t8;
    int32_t r6 = 0;

    if (data_ov000_0216de80 == 0) {
        data_ov000_0216bcd8.a = data_ov000_0216bcd8.c + func_0209a71c(data_ov000_0216bcd8.b, data_ov000_0216bcd8.a);
        t8 = (uint32_t)(data_ov000_0216bcd8.a >> 32);
        func_ov000_0214b0e0(&t8, 4);
    }

    if (n > 0) {
        uint32_t idx = 20;
        do {
            if (idx == 20) {
                uint32_t h;
                uint32_t carry = 1;
                int32_t j;
                uint32_t s = 0;
                func_ov000_0214c434(ctx);
                h = func_02088978();
                func_ov000_0214c46c(ctx, data_ov000_0216de88, 20);
                func_ov000_0214c534(ctx, tmp);
                for (j = 19; j >= 0; j--) {
                    s = data_ov000_0216de88[j] + tmp[j] + carry;
                    data_ov000_0216de88[j] = (uint8_t)s;
                    carry = s >> 8;
                }
                t8 = s;
                func_0208898c(h);
                idx = 0;
            }
            if (tmp[idx] != 0) {
                out[r6] = tmp[idx];
                r6++;
            }
            idx++;
        } while (r6 < n);
    }
}
