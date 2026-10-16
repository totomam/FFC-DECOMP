#include "ffc/types.h"
extern void func_ov008_02199dd8(void *a);
extern void func_ov008_0219a130(void);
typedef void (*Fn)(void*, int, int);
void func_ov008_0219a6d8(uint8_t *self, int flag) {
    void *v;
    func_ov008_02199dd8(*(void**)(self + 0x94));
    if ((*(uint8_t**)(self + 0x94))[0x142] == 0) {
        v = *(void**)(self + 0x98);
        (*(Fn**)v)[14](v, 1, 0);
        return;
    }
    if (flag != 0) {
        v = *(void**)(self + 0x98);
        (*(Fn**)v)[14](v, 2, 0);
        return;
    }
    func_ov008_0219a130();
}
