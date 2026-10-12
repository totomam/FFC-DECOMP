#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, const void *d);
extern int func_ov000_02168768(void *p);
extern void *func_ov000_0216876c(void *p, int i);
extern void func_ov001_02177b9c(void *a, int x, int y);
extern void func_ov000_02168848(void *p, int i);
extern void func_ov001_0217c004(void *a, void *b);

extern const char data_ov001_02191028[];

void func_ov001_0217c030(void *a, void *b)
{
    uint8_t *obj;
    uint8_t *head;
    uint8_t *prev;
    uint8_t *cur;
    uint8_t *item;
    int i;
    int base;

    obj = *(uint8_t **)a;
    if (b != 0) {
        head = *(uint8_t **)(obj + 0x5d8);
        if (head != 0) {
            if (head == b) {
                *(uint8_t **)(obj + 0x5d8) = *(uint8_t **)((uint8_t *)b + 0x4c);
            } else {
                prev = head;
                cur = *(uint8_t **)(prev + 0x4c);
                while (cur != b) {
                    if (cur == 0) {
                        func_ov000_021652a8(1, 4, 1, data_ov001_02191028);
                        return;
                    }
                    prev = cur;
                    cur = *(uint8_t **)(prev + 0x4c);
                }
                *(uint8_t **)(prev + 0x4c) = *(uint8_t **)((uint8_t *)b + 0x4c);
            }

            if (func_ov000_02168768(*(void **)((uint8_t *)b + 0x3c)) != 0) {
                i = 0;
                do {
                    item = func_ov000_0216876c(*(void **)((uint8_t *)b + 0x3c), i);
                    if (*(int *)(item + 0x10) < 100) {
                        base = *(int *)item;
                        func_ov001_02177b9c(a, *(int *)((uint8_t *)b + 0x10),
                                            base + *(int *)(item + 0x14));
                    }
                    func_ov000_02168848(*(void **)((uint8_t *)b + 0x3c), 0);
                } while (func_ov000_02168768(*(void **)((uint8_t *)b + 0x3c)) != 0);
            }
            func_ov001_0217c004(a, b);
        }
    }
}
