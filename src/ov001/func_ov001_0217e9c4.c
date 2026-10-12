#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov000_021653f4(void *p);
extern int32_t func_ov001_0217ef6c(void *p, void *data);
extern int32_t func_ov001_0217d040(void *p, void *item);
extern void func_ov001_0217b7f4(void *p, void *item);
extern uint8_t data_ov001_0219135c[];

int32_t func_ov001_0217e9c4(int32_t *p)
{
    int32_t *obj = *(int32_t **)p;
    int32_t count = obj[0x8e];
    int32_t **arr;
    int32_t *node;
    int32_t n = 0;
    int32_t i;

    if (count > 0) {
        arr = (int32_t **)func_ov000_021653d4(count * 4);
        if (arr == 0) {
            func_ov001_0217ef6c(p, data_ov001_0219135c);
            return 1;
        }
        node = (int32_t *)obj[0x171];
        while (node != 0) {
            if (node[0] == 3 && node[5] != 5 && ((int32_t *)node[1])[0x61] == 0) {
                arr[n] = node;
                n++;
                ((int32_t *)node[1])[0x61] = 1;
            }
            node = (int32_t *)node[8];
        }
        for (i = 0; i < n; i++) {
            int32_t r = func_ov001_0217d040(p, arr[i]);
            if (r != 0) {
                arr[i][7] = r;
            }
        }
        for (i = 0; i < n; i++) {
            int32_t *sub = (int32_t *)arr[i][1];
            sub[0x61] = 0;
            if (sub[0x62] != 0) {
                func_ov001_0217b7f4(p, arr[i]);
            }
        }
        func_ov000_021653f4(arr);
    }
    return 0;
}
