#include "ffc/types.h"

extern void func_02043f78(void *p);
extern void *func_02056aec(void *p);
extern void *func_ov003_02174588(void *p, int a, int b);
extern void *func_0205681c(uint32_t size);
extern void *func_02047298(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov003_0217451c(uint8_t *p)
{
    uint8_t *q;
    void *r7;
    void *r6;
    void *r4;
    void *r1;

    func_02043f78(*(void **)(p + 0x80));
    r6 = func_02056aec(p);
    r7 = func_ov003_02174588(*(void **)(p + 0x80), 1, 0);
    r4 = func_0205681c(0x94);
    if (r4 != 0) {
        r4 = func_02047298(r4, *(void **)(p + 0x80));
    }
    r1 = func_ov003_02174588(*(void **)(p + 0x80), 0, 0x19);
    q = p + 0x14;
    func_02056bc0(q, r1);
    func_02056bc0(q, r4);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
}
