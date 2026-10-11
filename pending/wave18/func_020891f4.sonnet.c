#include "ffc/types.h"

typedef struct { uint8_t pad[0x388]; uint32_t arr[8]; } S;

int func_020891f4(int a, int b) {
    S *s = (S *)0x02fffc00;
    uint32_t m = 1u << a;
    if (s->arr[b] & m) return 1;
    return 0;
}
