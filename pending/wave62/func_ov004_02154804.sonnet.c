#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void func_020696f0(uint32_t x);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t x);
extern Pair data_ov004_02159cb0;
extern struct { uint8_t pad[0x3c]; uint32_t v; } data_ov004_021596c4;
extern Pair data_ov004_02159cb8;
void func_ov004_02154804(uint8_t *p) {
    uint8_t buf[0x44];
    func_020696f0(*(uint32_t *)(p + 0xfc));
    if (*(int32_t *)(p + 0x204) == 0) {
        *(Pair *)(p + 0x94) = data_ov004_02159cb0;
        return;
    }
    func_02091b10(buf, data_ov004_021596c4.v);
    uint32_t r = func_0203bb94(buf, 0, 1, 0);
    *(uint32_t *)(p + 0x20c) = r;
    func_02056bc0(p + 0x48, (void *)r);
    *(uint32_t *)(p + 0x208) = 0x3c;
    *(int32_t *)(p + 0x204) -= 1;
    func_02021338(0x91);
    *(Pair *)(p + 0x94) = data_ov004_02159cb8;
}
