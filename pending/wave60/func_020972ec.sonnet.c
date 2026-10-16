#include "ffc/types.h"
typedef struct { uint32_t a; uint8_t b; uint8_t pad[0x1b]; uint32_t e1c; uint32_t e20[3]; uint32_t e2c; } X;
extern uint32_t func_020972cc(void);
extern void func_02097804(void*, void*);
extern void func_02097748(void*, void*);
extern void func_0209cd04(void*, void*, void*);
extern void func_02098024(void*, void*);
extern void func_02097ef4(void*, void*);
extern uint32_t func_0209745c;
extern uint32_t data_02144c24[];
extern uint8_t data_02144ca0[], data_020b2bb0[], data_02144edc[], data_020b2bfc[], data_02144c88[], data_02144f1c[], data_020b2c48[], data_02144c70[], data_02144e5c[], data_02144cf4[], data_02144d30[], data_02144e20[], data_02144d24[];

typedef void (*Fn)(void*,int,int);
uint32_t func_020972ec(uint32_t p)
{
    struct { uint32_t a; uint8_t b; uint8_t pad[0x5f]; } fr;
    fr.a = func_020972cc();
    fr.b = 1;
    { uint32_t *g = data_02144c24; if (!(g[7] & 1)) { func_02097804(data_02144ca0, data_020b2bb0); g[7] |= 1; } }
    { uint32_t *g = data_02144c24; if (!(g[5] & 1)) { func_02097748(data_02144edc, data_020b2bfc); func_0209cd04(data_02144edc, &func_0209745c, data_02144c88); g[5] |= 1; } }
    { uint32_t *g = data_02144c24; if (!(g[11] & 1)) { func_02097748(data_02144f1c, data_020b2c48); func_0209cd04(data_02144f1c, &func_0209745c, data_02144c70); g[11] |= 1; } }
    {
    uint32_t *g = data_02144c24;
    if (g[6]++ == 0) {
        if (data_02144e5c) { *(void**)(fr.pad + 0x5b) = &fr; func_02098024(data_02144e5c, data_02144ca0); }
        if (data_02144cf4) { *(void**)(fr.pad + 0x43) = &fr; func_02097ef4(data_02144cf4, data_02144edc); }
        if (data_02144d30) { *(void**)(fr.pad + 0x2b) = &fr; func_02097ef4(data_02144d30, data_02144f1c); }
        if (data_02144e20) { *(void**)(fr.pad + 0x13) = &fr; func_02097ef4(data_02144e20, data_02144f1c); }
        *(void**)(data_02144e5c + *(int*)(*(int*)data_02144e5c - 0xc) + 0x30) = data_02144cf4;
        { uint8_t *o = data_02144d30 + *(int*)(*(int*)(data_02144d24+0xc) - 0xc); *(uint16_t*)(o+0x2c) |= 0x2000; }
        *(void**)(data_02144d30 + *(int*)(*(int*)(data_02144d24+0xc) - 0xc) + 0x30) = data_02144cf4;
        (*(Fn**)data_02144ca0)[2](data_02144ca0,0,0);
        (*(Fn**)data_02144edc)[2](data_02144edc,0,0);
        (*(Fn**)data_02144f1c)[2](data_02144f1c,0,0);
    }
    }
    return p;
}
