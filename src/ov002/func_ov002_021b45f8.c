/* cflags:  */
/* From arcnid/ffc-decomp src/battle/find_listed_by_pair_021B45F8.c, externs renamed. */
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

/* Matched: 021B45F8, size 0x8A (incl. pool+pad), -O4,p.
   Find/lookup used by Init_021B4680 (Reg_021B45F8) and reward_flow_021B524C:
   a = data_ov002_021d4048[Idx(q)] (stride 8, pool 0x021D4048), b = data_ov002_021d404c[...] (0x021D404C);
   scans both lists GetList(*(s+0xE0), i) for i=0..1, returns first element
   whose GetA/GetB pair equals (a,b), else 0. Outer counter + s + a spill to
   the 0xC frame; b holds r7 across the loops. */
extern s32 func_ov002_021b4808(void* q);
extern void* func_ov002_02198d08(u32 owner, s32 i);
extern s32 func_ov002_0219c5a8(void* list);
extern void* func_ov002_0219c5b8(void* list, s32 j);
extern u32 func_ov002_021ae5f4(void* e);
extern u32 func_ov002_021ae5fc(void* e);
extern u32 data_ov002_021d4048[];
extern u32 data_ov002_021d404c[];

void* func_ov002_021b45f8(void* s, void* q) {
    u32 a;
    u32 b;
    s32 i;
    void* list;
    s32 j;
    void* e;
    a = data_ov002_021d4048[func_ov002_021b4808(q) * 2];
    b = data_ov002_021d404c[func_ov002_021b4808(q) * 2];
    for (i = 0; i < 2; i++) {
        list = func_ov002_02198d08(*(u32*)((u8*)s + 0xE0), i);
        j = 0;
        if (func_ov002_0219c5a8(list) > 0) {
            do {
                e = func_ov002_0219c5b8(list, j);
                if (a == func_ov002_021ae5f4(e)) {
                    if (b == func_ov002_021ae5fc(e)) {
                        return e;
                    }
                }
                j++;
            } while (j < func_ov002_0219c5a8(list));
        }
    }
    return 0;
}
