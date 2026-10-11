#include "ffc/types.h"

extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_0200d5ec(void *a);
extern void func_ov010_021bd4e0(void *a);
extern void func_02056844(void *a);

void *func_ov010_021bfedc(void *param_0)
{
    uint8_t *p = (uint8_t *)param_0;
    uint8_t *r4 = p + 0x144;

    if (*(void **)(r4 + 4) != 0) {
        if (r4[0xc] != 0) {
            func_02052d3c(*(void **)(r4 + 4), *(void **)(r4 + 8));
        }
        func_02052c04(*(void **)(r4 + 4));
    }
    func_02053290(r4);
    func_0200d5ec(p + 0x138);
    func_ov010_021bd4e0(p);
    func_02056844(p);
    return p;
}
