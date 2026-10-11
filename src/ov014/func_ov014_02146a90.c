/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t n;
    uint32_t x10;
} S_ov014;

extern S_ov014 data_ov014_02155b00;
extern uint8_t data_ov014_02155628[];
extern void *func_02084a58(void *dst, const void *src, uint32_t n);

void *func_ov014_02146a90(void)
{
    if (data_ov014_02155b00.a != 0) {
        goto tail;
    }
    if (data_ov014_02155b00.n < 0x300) {
        goto retx;
    }
    data_ov014_02155b00.a = data_ov014_02155b00.x10;
    func_02084a58(data_ov014_02155628, (void *)data_ov014_02155b00.x10, 0x300);
    data_ov014_02155b00.x10 += 0x300;
    data_ov014_02155b00.n -= 0x300;
    goto tail;
retx:
    return data_ov014_02155628;
tail:
    return (void *)data_ov014_02155b00.a;
}
