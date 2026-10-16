#include "ffc/types.h"
extern int func_ov008_021a4dbc(void *p, uint32_t i);
extern int func_ov008_021a4edc(void *p, uint32_t i);
extern void func_02021338(int n);
extern void func_ov008_021a4dc8(void *p, uint32_t i, int f);
extern void func_ov008_021a4e30(void *p);
typedef void (*Fn)(void*);
void func_ov008_021a44a8(uint8_t *p, uint32_t key) {
    uint8_t i;
    for (i = 0; i < 8; i++) {
        uint32_t *tab = *(uint32_t**)(p + 0xd8);
        if (tab[i] == key) {
            int f; uint8_t idx = *(uint32_t*)(p + 0x114) * 8 + i;
            
            if (idx >= *(uint32_t*)(p + 0x10c)) continue;
            f = func_ov008_021a4dbc(p, idx) == 0;
            if (f) {
                if (*(uint32_t*)(p + 0x120) + func_ov008_021a4edc(p, idx) > *(uint32_t*)(p + 0x11c)) {
                    func_02021338(0xc7);
                    return;
                }
            }
            func_ov008_021a4dc8(p, idx, f);
            {
                uint8_t *o = (uint8_t*)(*(uint32_t**)(p + 0xd8))[i];
                void *q;
                if (f) { q = *(void**)(o + 0xa4); (*(Fn**)q)[10](q); }
                else { q = *(void**)(o + 0xa4); (*(Fn**)q)[11](q); }
            }
            func_ov008_021a4e30(p);
            return;
        }
    }
}
