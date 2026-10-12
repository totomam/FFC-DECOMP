#include "ffc/types.h"

extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_02056db0(void *p);
extern int data_ov003_0217bcf8;

void *func_ov003_0217794c(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t i;
    void *r4;

    *(void **)p = (void *)&data_ov003_0217bcf8;

    r4 = *(void **)(p + 0x88);
    if (r4 != 0) {
        if (r4 != 0) {
            func_0205d620(r4);
            func_02056844(r4);
        }
        *(void **)(p + 0x88) = 0;
    }

    for (i = 0; i < 5; i++) {
        if (*(void **)(p + i * 8 + 0xf4) != 0) {
            r4 = *(void **)(p + i * 8 + 0xf8);
            if (r4 != 0) {
                if (r4 != 0) {
                    func_0205d620(r4);
                    func_02056844(r4);
                }
                *(void **)(p + i * 8 + 0xf8) = 0;
            }
        }
    }

    func_02056db0(p);
    return p;
}
