#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201cf34(void *, void *);
extern uint8_t data_ov010_021d1680[];
extern uint8_t data_ov010_021d1694[];
extern uint8_t data_ov010_021d1614[];
extern void func_ov010_021bd4f0(void *, void *, uint32_t, uint32_t, void *, uint32_t);
extern void func_02069700(void *, uint32_t, uint32_t);
extern void func_ov010_021be91c(void *);

typedef struct {
    uint8_t tmp[0x28];
    uint8_t gap[0x18];
    uint32_t buf[0x26];
} Locals;

static inline void cp(uint8_t *d, const uint8_t *s, uint32_t n) {
    do { *d++ = *s++; } while (--n != 0);
}
void func_ov010_021be000(void *a) {
    Locals L;
    func_0201cf34(data_020b93b8, L.buf);
    if (((L.buf[5] << 13) >> 27) < 0x14) {
        cp(L.tmp, data_ov010_021d1680, 0x13);
    } else {
        cp(L.tmp, data_ov010_021d1694, 0x17);
    }
    func_ov010_021bd4f0(a, L.tmp, 0x28, 0x201, data_ov010_021d1614, 0);
    func_02069700(a, 1, 0);
    func_ov010_021be91c(a);
}
