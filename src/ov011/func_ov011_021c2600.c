#include "ffc/types.h"

extern void func_ov011_021bd290(void *p, uint32_t v);
extern uint32_t func_02036388(uint32_t x);
extern void func_ov011_021bd294(void *p, uint32_t v);
extern uint32_t func_0203639c(uint32_t x);
extern void func_ov011_021bd298(void *p, uint32_t v);
extern void func_ov011_021bd2c4(void *p, uint32_t v);
extern void func_ov011_021bd29c(void *p, uint32_t v);
extern void func_ov011_021bd2c8(void *p, void *v);
extern void func_ov011_021bd2a4(void *p, uint32_t v);
extern void func_ov011_021bd2ac(void *p, uint32_t v);
extern void func_ov011_021bd2b4(void *p, uint32_t v);
extern void func_ov011_021bd2bc(void *p, uint32_t v);
extern void func_02056bf4(void *dst, uint32_t v);
extern void func_ov011_021bd30c(void *p, uint32_t v);
extern void func_ov011_021c07dc(void *s);

void func_ov011_021c2600(uint8_t *s, uint32_t a, uint32_t b)
{
    func_ov011_021bd290(*(void **)(s + 0x32c), 1);
    func_ov011_021bd294(*(void **)(s + 0x32c), func_02036388(b));
    func_ov011_021bd298(*(void **)(s + 0x32c), func_0203639c(b));
    func_ov011_021bd2c4(*(void **)(s + 0x32c), a);
    func_ov011_021bd29c(*(void **)(s + 0x32c), s[0x27b]);
    func_ov011_021bd2c8(*(void **)(s + 0x32c), s + 0x220);
    func_ov011_021bd2a4(*(void **)(s + 0x32c), s[0x220 + 0x6c]);
    func_ov011_021bd2ac(*(void **)(s + 0x32c), s[0x220 + 0x6d]);
    func_ov011_021bd2b4(*(void **)(s + 0x32c), s[0x220 + 0x68]);
    func_ov011_021bd2bc(*(void **)(s + 0x32c), s[0x220 + 0x69]);
    func_02056bf4(s + 0x48, *(uint32_t *)(s + 0x220 + 0x98));
    func_ov011_021bd30c(*(void **)(s + 0x32c), *(uint32_t *)(s + 0x220 + 0x98));
    func_ov011_021c07dc(s);
}
