/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vector_push_setslot_0e10.c, externs renamed. */
/* Matched: 021C0E10 size 0x46 (70) -- -O4 or -O4,p */
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


typedef struct { u32 a[4]; u32* slot; } Local;

extern void func_ov002_021c0e58(void*, int);
extern void func_ov002_021c1900(Local*, void*, u32);

void func_ov002_021c0e10(void* self, u32* p1) {
    u32 cap;
    int cmpval;
    Local local;
    cap = *(u32*)((u8*)self + 0x10);
    if (cap == 0) {
        cmpval = 0;
    } else {
        cmpval = (int)((cap - 1) << 8);
    }
    if ((cmpval - (int)(*(u32*)self + *(u32*)((u8*)self + 4))) == 0) {
        func_ov002_021c0e58(self, 1);
    }
    func_ov002_021c1900(&local, self, *(u32*)((u8*)self + 4));
    if (local.slot != 0) {
        *local.slot = *p1;
    }
    *(u32*)((u8*)self + 4) = *(u32*)((u8*)self + 4) + 1;
}
