#include "ffc/types.h"

typedef struct Node {
    uint8_t pad[0x1c];
    int32_t flag;
    struct Node *next;
} Node;

extern int func_ov001_021799f0(void *ctx);
extern void func_ov000_02165938(int v);
extern int func_ov001_0217b82c(void *ctx, Node **out, int n);
extern int func_ov001_021764f4(void *ctx);
extern int func_ov001_0217c0c0(void *ctx);
extern int func_ov001_0217e9c4(void *ctx);
extern void func_ov001_0217b51c(void *ctx);
extern void func_ov001_0217b7f4(void *ctx);
extern int func_ov001_02178b2c(void *ctx, int flag);
extern void func_ov001_02179b10(void *ctx, int v);
extern void func_ov001_02176320(void *ctx);

int func_ov001_021768a0(void *ctx, int flag) {
    uint8_t *base = *(uint8_t **)ctx;
    int r7 = 0;
    int r4;
    Node *obj;
    int st;

    if (*(int *)(base + 0x1f4) == 1) {
        do {
            r7 = func_ov001_021799f0(ctx);
            if (r7 == 0 && flag != 0 && *(int *)(base + 0x1f4) == 1) {
                r4 = 1;
            } else {
                r4 = 0;
            }
            if (r4 != 0) {
                func_ov000_02165938(10);
            }
        } while (r4 != 0);
        if (r7 != 0) {
            if (func_ov001_0217b82c(ctx, &obj, 1) != 0) {
                obj->flag = 4;
            }
        }
    }

    st = *(int *)(base + 0x1f4);
    if (st == 3 || st == 2 || st == 5) {
        if (r7 == 0) {
            r7 = func_ov001_021764f4(ctx);
        }
        if (r7 == 0) {
            r7 = func_ov001_0217c0c0(ctx);
        }
    }
    if (r7 == 0) {
        r7 = func_ov001_0217e9c4(ctx);
    }

    obj = *(Node **)(base + 0x5c4);
    while (obj != 0) {
        if (obj->flag != 0) {
            func_ov001_0217b51c(ctx);
            obj = obj->next;
            func_ov001_0217b7f4(ctx);
        } else {
            obj = obj->next;
        }
    }

    {
        int r0 = func_ov001_02178b2c(ctx, flag);
        if (r0 != 0) {
            return r0;
        }
    }
    if (*(int *)(base + 0x5bc) != 0) {
        func_ov001_02179b10(ctx, 0);
        func_ov001_02176320(ctx);
    }
    return r7;
}
