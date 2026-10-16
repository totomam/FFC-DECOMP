/* cflags:  */
/* From arcnid/ffc-decomp src/battle/collect_items_two_units_021A0058.c, externs renamed. */
/* Matched 021A0058 (104 bytes, -O4,p).
 * Zero-fills a 6-word array, then over two objects (s = func_ov002_021a1ac4(s)) collects
 * func_ov002_021aa778(func_ov002_021a18c4(s, i)) for i in [0, func_ov002_021a18bc(s)) into the array, then
 * calls the function immediately before it (0219FFF8) with (a0, arr, a1).
 * Callees: func_ov002_021a18bc=021A18BC func_ov002_021a18c4=021A18C4 func_ov002_021aa778=021AA778
 *          func_ov002_021a1ac4=021A1AC4 func_ov002_0219fff8=0219FFF8
 * Keys: for-loop fill with literal 0 + `k = 0; j = k;` AFTER the fill
 * (zero CSE gives the adds-copy init, blocks the j-store hoist);
 * arr[k++] fold puts k in r6; decl order (k, s, i) fixes the r4/r5 swap.
 */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

extern u32 func_ov002_021a18bc(void*);
extern u32 func_ov002_021a18c4(void*, u32);
extern u32 func_ov002_021aa778(u32);
extern void* func_ov002_021a1ac4(void*);
extern void func_ov002_0219fff8(void*, u32*, u32);
void func_ov002_021a0058(void* a0, u32 a1) {
    u32 j;
    u32 arr[6];
    s32 t;
    u32 k;
    void* s;
    u32 i;
    s = a0;
    for (t = 0; t < 6; t++) {
        arr[t] = 0;
    }
    k = 0;
    j = k;
    do {
        i = 0;
        while (i < func_ov002_021a18bc(s)) {
            arr[k++] = func_ov002_021aa778(func_ov002_021a18c4(s, i));
            i++;
        }
        s = func_ov002_021a1ac4(s);
        j++;
    } while (j < 2);
    func_ov002_0219fff8(a0, arr, a1);
}
