#include "ffc/types.h"

extern uint32_t *func_020704b4(uint32_t *a, uint32_t *b, uint32_t c, uint32_t *d);

void func_02070464(uint32_t **out, uint32_t *tree, uint32_t *key)
{
    uint32_t *node = func_020704b4(tree, key, tree[1], &tree[1]);
    int flag;

    if (node == &tree[1]) {
        flag = 1;
    } else {
        flag = 0;
    }

    if (flag == 0) {
        if (key[0] < node[3]) {
            flag = 1;
        } else if (key[0] > node[3]) {
            flag = 0;
        } else {
            if (key[1] < node[4]) {
                flag = 1;
            } else {
                flag = 0;
            }
        }
    }

    if (flag != 0) {
        *out = &tree[1];
    } else {
        *out = node;
    }
}
