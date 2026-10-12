#include "ffc/types.h"

extern char data_ov007_021c4fd0[];
extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_02056db0(void *p);

void *func_ov007_021abc1c(void *p)
{
    int i;
    *(char **)p = data_ov007_021c4fd0;
    for (i = 0; i < 3; i++) {
        void *v = *(void **)((uint8_t *)p + i * 4 + 0xd8);
        if (v != 0) {
            if (v != 0) {
                func_0205d620(v);
                func_02056844(v);
            }
            *(void **)((uint8_t *)p + i * 4 + 0xd8) = 0;
        }
    }
    func_02056db0(p);
    func_02056844(p);
    return p;
}
