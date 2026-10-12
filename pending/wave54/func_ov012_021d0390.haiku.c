#include "ffc/types.h"

extern void func_02021338(int code);
extern void func_ov012_021d0d0c(uint8_t *a, int flag);
extern int func_ov012_021d0ef4(uint8_t *a);
extern uint8_t func_ov012_021d008c(uint8_t *a);
extern void func_020692f0(void *p);
extern void func_ov012_021ce750(uint8_t *a);

typedef struct {
    uint32_t sel : 1;
} Flags;

void func_ov012_021d0390(uint8_t *a, int c)
{
    int8_t idx = *(int8_t *)(a + 0x338);
    uint8_t lim = a[0x339];
    uint16_t *t;
    int inl;

    if (idx >= lim) {
        func_02021338(0xc7);
        return;
    }

    inl = !((Flags *)(a + 0x2ec))->sel;
    t = inl ? (uint16_t *)((uint8_t *)(a + 0x2ec) + 2) : *(uint16_t **)(a + 0x2f4);
    if ((int)t[idx] >= 0x30) {
        inl = !((Flags *)(a + 0x2ec))->sel;
        t = inl ? (uint16_t *)((uint8_t *)(a + 0x2ec) + 2) : *(uint16_t **)(a + 0x2f4);
        if ((int)t[idx] <= 0x39) {
            func_ov012_021d0d0c(a, 1);
        }
    }

    if (c >= 0x30 && c <= 0x39 && func_ov012_021d0ef4(a)) {
        func_02021338(0xc7);
        return;
    }

    func_02021338(0xbb);

    inl = !((Flags *)(a + 0x2ec))->sel;
    idx = *(int8_t *)(a + 0x338);
    t = inl ? (uint16_t *)((uint8_t *)(a + 0x2ec) + 2) : *(uint16_t **)(a + 0x2f4);
    t[idx] = (uint16_t)c;

    idx = *(int8_t *)(a + 0x338);
    inl = !((Flags *)(a + 0x2ec))->sel;
    t = inl ? (uint16_t *)((uint8_t *)(a + 0x2ec) + 2) : *(uint16_t **)(a + 0x2f4);
    if ((int)t[idx] >= 0x30) {
        inl = !((Flags *)(a + 0x2ec))->sel;
        t = inl ? (uint16_t *)((uint8_t *)(a + 0x2ec) + 2) : *(uint16_t **)(a + 0x2f4);
        if ((int)t[idx] <= 0x39) {
            func_ov012_021d0d0c(a, 0);
        }
    }

    idx = (int8_t)(idx + 1);
    *(int8_t *)(a + 0x338) = idx;
    a[0x33c] = func_ov012_021d008c(a);
    if (a[0x33c] != 0 && a[0x339] == *(int8_t *)(a + 0x338)) {
        func_020692f0(*(void **)(a + 0x258));
    }
    func_ov012_021ce750(a);
}
