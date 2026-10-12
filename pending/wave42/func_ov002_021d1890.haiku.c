#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);

typedef struct {
    uint8_t pad[0x14];
    int32_t v[6];
    uint8_t pad2[4];
} Elem;

void func_ov002_021d1890(Elem **out, Elem * volatile begin, Elem *end, Elem *key, ...)
{
    Elem ***po = &out;
    int32_t n = func_0209a76c((int32_t)((uint8_t *)end - (uint8_t *)begin), 0x30);
    while (n > 0) {
        Elem *mid = begin + n / 2;
        int32_t sk = 0;
        int32_t sm = 0;
        int32_t i;
        int32_t j;
        for (i = 0; i < 6; i++) {
            sk += key->v[i];
        }
        for (j = 0; j < 6; j++) {
            sm += mid->v[j];
        }
        if (sk > sm) {
            n = n / 2;
        } else {
            begin = mid + 1;
            n = n - (n / 2 + 1);
        }
    }
    **po = begin;
}
