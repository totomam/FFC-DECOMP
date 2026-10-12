#include "ffc/types.h"

extern uint32_t func_ov008_021a3c78(void);
extern void func_02021338(uint32_t);
extern void func_ov008_021a3a84(void *);

typedef struct {
    uint8_t head[0x100];
    uint8_t arr[0x20];
    uint32_t sum;
    uint8_t cnt;
} FFCState;

void func_ov008_021a3284(void *p, uint32_t idx, uint32_t val)
{
    FFCState *s = (FFCState *)p;
    uint32_t r;
    uint32_t code;

    if (val == s->arr[idx]) {
        return;
    }
    s->arr[idx] = (uint8_t)val;
    if (val != 0) {
        r = func_ov008_021a3c78();
        s->sum += r;
        s->cnt += 1;
        code = 0xbf;
    } else {
        r = func_ov008_021a3c78();
        s->sum -= r;
        s->cnt -= 1;
        code = 0xc0;
    }
    func_02021338(code);
    func_ov008_021a3a84(s);
}
