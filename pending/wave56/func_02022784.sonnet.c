#include "ffc/types.h"

extern void func_02022645_unk(char **pp);
extern int32_t data_0209e0e0[];

int32_t func_02022784(char **pp) {
    char *s;
    int32_t val;
    int32_t have;
    int32_t neg;
    int32_t pos;

    func_02022645_unk(pp);
    s = *pp;
    val = 0;
    have = 0;
    neg = 0;
    pos = 0;
    if (*s == '-') {
        neg = 1;
        *pp = s + 1;
    }
    while (**pp >= '0' && **pp <= '9') {
        val = val * 10 + ((**pp - '0') << 12);
        (*pp)++;
        have = 1;
    }
    if (**pp == '.') {
        (*pp)++;
        while (**pp >= '0' && **pp <= '9') {
            val += data_0209e0e0[pos * 10 + (**pp - '0')];
            pos++;
            (*pp)++;
            have = 1;
        }
    }
    if (neg != 0) {
        val *= -1;
    }
    if (have == 0) {
        val = 0x7fffffff;
    }
    return val;
}
