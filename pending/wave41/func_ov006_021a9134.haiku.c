#include "ffc/types.h"

typedef struct Ctx {
    uint8_t a;
    uint8_t pad;
    uint16_t b;
    uint8_t *obj;
} Ctx;

extern Ctx data_ov006_021bc778;

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_ov006_021a6508(uint32_t *out, uint32_t v);
extern uint8_t func_ov006_021afb3c(void *obj);
extern void func_ov006_021a91c0(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3aa0(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021a3bb0(uint32_t a);
extern void func_ov006_021a9280(void);
extern void func_ov006_021a92f0(void);
extern uint32_t func_ov006_021b42f8(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b570c(uint32_t a, void *fn, uint32_t b, uint32_t c);
extern void func_ov006_021a99cc(void);
extern void func_ov006_021a9d04(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a9cc8(void);
extern void func_ov006_021a93c8(void);

void func_ov006_021a9134(void)
{
    uint32_t local;
    uint8_t r;

    data_ov006_021bc778.obj = func_ov006_021b49e4(0x5c, 4);
    func_ov006_021a6508(&local, 0);
    if (local == 0) {
        data_ov006_021bc778.a = 0;
        data_ov006_021bc778.b = 0;
    }
    r = func_ov006_021afb3c(data_ov006_021bc778.obj);
    data_ov006_021bc778.obj[0x51] = r;
    func_ov006_021a91c0();
    func_ov006_021a3eb8();
    func_ov006_021a3aa0(0x34, (uint32_t)-1, 0);
    func_ov006_021a3bb0(2);
    func_ov006_021a9280();
    func_ov006_021a92f0();
    *(uint32_t *)(data_ov006_021bc778.obj + 0xc) = func_ov006_021b42f8(0, 0);
    *(uint32_t *)(data_ov006_021bc778.obj + 0x3c) = func_ov006_021b570c(1, (void *)func_ov006_021a9cc8, 0, 0x6e);
    func_ov006_021a99cc();
    func_ov006_021a9d04();
    func_ov006_021a64c8((void *)func_ov006_021a93c8);
}
