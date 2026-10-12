/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {

extern void func_02039244(void *a, void *b, uint32_t c);
extern void func_020095b8(void *a, void *b);
extern void func_020393a8(void *a, void *b, uint32_t c);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_02005988(void *a, uint32_t b);
extern void func_020511e8(void *a, void *b);
extern void func_0200a7b0(void *a, void *b);
extern void *func_0200a678(void *object);
extern void func_ov014_02147e20(void *a);
extern uint8_t func_ov014_021482c8(void *a, uint32_t b);
extern void func_ov014_0214802c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_ov014_02147e98(void *a);
extern void func_ov014_02147fcc(void *a, uint32_t b);
extern void func_ov014_02147c10(void *a);


}
typedef struct { uint32_t f0 : 1; uint32_t rest : 31; uint32_t x; uint32_t ptr; } T;
static inline int isL(T *t) { return t->f0 ? 1 : 0; }
static inline uint16_t *dat(T *t) { return isL(t) ? (uint16_t *)t->ptr : (uint16_t *)((uint8_t *)t + 2); }
static inline int more(T *t, uint32_t i) { return ((int)i < (int)dat(t)[i]) ? 1 : 0; }
extern "C" void func_ov014_02148624(uint8_t *p, uint32_t param1, uint32_t param2)
{
    uint32_t tab[3];
    uint32_t o44[3], o38[3], o2c[3], o20[3], o14[3];
    int i, sum, off;
    for (i = 0; i < 3; i++) tab[i] = i;
    func_02039244(o44, *(void **)(p + 8), param1);
    func_020095b8(o38, o44);
    func_020393a8(o2c, o38, 3);
    func_0200b65c(o44, o2c);
    func_020059cc(o2c);
    func_020059cc(o38);
    func_02005988(o20, ((T*)o44)->f0 ? (uint32_t)((T*)o44)->ptr : (uint32_t)((uint8_t *)o44 + 1));
    func_020511e8(o14, o20);
    func_0200a7b0(tab, o14);
    func_0200a678(o14);
    func_020059cc(o20);
    func_020059cc(o44);
    func_ov014_02147e20(*(void **)(p + 0x18));
    sum = 0;
    for (i = 0; more((T*)tab, i); ) {
        uint8_t b = func_ov014_021482c8(*(void **)(p + 0x18), dat((T*)tab)[i]);
        (p + 0x1c)[i] = b;
        i++;
        sum += p[0x1b + i];
    }
    off = 0x80 - (sum >> 1);
    for (i = 0; more((T*)tab, i); ) {
        func_ov014_0214802c(*(void **)(p + 0x18), dat((T*)tab)[i], off, 0xac, 0, 10, 1, 0);
        off += p[0x1c + i];
        i++;
    }
    func_ov014_02147e98(*(void **)(p + 0x18));
    func_ov014_02147fcc(*(void **)(p + 0x18), param2);
    func_ov014_02147c10(*(void **)(p + 0x11c));
    p[0x14] = 1;
    func_0200a678(tab);
}
