#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);

typedef struct {
    uint32_t pad0;
    uint32_t type;
    void *ptr;
    uint32_t pad3;
} Elem;

void func_ov007_021c1134(int count, int n, void **arr)
{
    int i, j;

    if (arr == 0) {
        return;
    }
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            for (j = 0; j < count; j++) {
                if (((Elem *)arr[i])[j].type == 8 && ((Elem *)arr[i])[j].ptr != 0) {
                    func_ov000_021653f4(((Elem *)arr[i])[j].ptr);
                }
                if (((Elem *)arr[i])[j].type == 5) {
                    func_ov000_021653f4(((Elem *)arr[i])[j].ptr);
                }
            }
            func_ov000_021653f4(arr[i]);
            arr[i] = 0;
        }
    }
    func_ov000_021653f4(arr);
}
