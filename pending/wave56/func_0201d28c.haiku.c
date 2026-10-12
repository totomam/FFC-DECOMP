#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Elem;

extern uint32_t func_02036cd8(const void *object);
extern void func_0201d344(void *base, void *end, uint8_t flag);

void func_0201d28c(void *unused, Elem *arr, uint32_t n) {
    int32_t sent[2];
    int32_t hole;
    uint32_t i;
    uint32_t cnt;
    uint8_t flag;
    Elem cur;

    flag = 0;
    cnt = n;
    for (;;) {
        sent[0] = -1;
        sent[1] = -1;
        hole = -1;
        if (cnt == 0) {
            break;
        }
        for (i = 0; i < cnt; i++) {
            if (func_02036cd8(&arr[i])) {
                if (hole != sent[0]) {
                    cur = arr[i];
                    arr[i] = arr[hole];
                    arr[hole] = cur;
                    goto restart;
                }
            } else if (hole == sent[1]) {
                hole = i;
            }
        }
        break;
restart:
        ;
    }

    func_0201d344(arr, arr + n, flag);
}
