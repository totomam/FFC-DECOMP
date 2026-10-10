/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02084a58(void *dst, void *src, uint32_t n);
extern uint8_t data_ov014_02155b00[];
extern uint8_t data_ov014_0214ad0c[];

typedef struct {
    uint32_t w0;
    uint32_t a;
    uint32_t w8;
    uint32_t c;
    uint32_t e;
} S;

void *func_ov014_02146a24(void)
{
    S *p = (S *)data_ov014_02155b00;
    if (p->a != 0) {
        goto tail;
    }
    if (p->c < 0x2100) {
        goto ret_ad;
    }
    p->a = p->e;
    func_02084a58(data_ov014_0214ad0c, (void *)p->e, 0x2100);
    p->e += 0x2100;
    p->c -= 0x2100;
    goto tail;
ret_ad:
    return data_ov014_0214ad0c;
tail:
    return (void *)((S *)data_ov014_02155b00)->a;
}
