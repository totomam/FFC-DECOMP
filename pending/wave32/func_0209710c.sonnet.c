#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02097054(void **out, void *buf, uint32_t v);
extern void func_02092878(void *obj, const uint8_t *text);
extern void func_0209d245_unk(void *a, void *b, void *c);
extern void func_02097174(void);
extern uint8_t data_020b3154[];
extern uint8_t data_020b3194[];

void func_0209710c(uint32_t unused, const uint8_t *text) {
    volatile uint8_t c;
    void *obj = data_020b3154;
    void *p;
    volatile uint32_t pad;
    uint32_t n;
    void *buf;
    c = 0;
    pad = 0;
    n = func_02092864(text) + 1;
    buf = func_02056830(n);
    func_02097054(&p, buf, c);
    func_02092878(p, text);
    func_0209d245_unk(data_020b3194, &obj, func_02097174);
}
