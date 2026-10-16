#include "ffc/types.h"
extern void func_02054910(void*, int, int);
extern void func_020694ac(void*, int, int);
extern void func_020695e4(void*);
extern void func_02054990(void*);
extern char data_ov007_021c36f8[];
extern char data_ov007_021c3718[];
void* func_ov007_0219f85c(uint8_t* p, uint32_t a) {
    uint8_t z = 0;
    func_02054910(p, 0, 0);
    func_020694ac(p + 0xc, 0, 0);
    *(void**)p = data_ov007_021c36f8;
    *(void**)(p + 0xc) = data_ov007_021c3718;
    p[0x168] = z;
    p[0x169] = z;
    p[0x16a] = z;
    p[0x16b] = z;
    p[0x174] = 1;
    *(uint32_t*)(p + 0x178) = a;
    p[0x17c] = z;
    func_020695e4(p + 0xc);
    *(uint32_t*)(p + 0x170) = 0xb4;
    func_02054990(p);
    return p;
}
