#include "ffc/types.h"
typedef void (*Fn)(void*, int, int);
extern void func_02021338(int);
extern void func_ov007_021a17d0(void*, int);
void func_ov007_021a2128(uint8_t *self) {
    void *o;
    func_02021338(0xb3);
    o = *(void**)(self + 0x98);
    (*(Fn**)o)[14](o, 4, 1);
    func_ov007_021a17d0(*(void**)(self + 0x94), 0);
}
