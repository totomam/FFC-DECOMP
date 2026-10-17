/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_call7_incdec_6190.c, externs renamed. */
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

/* Matched: 021B6190 (32B) — vtable slot 7 on *(b+0x80), then counters on a */
typedef void (*Fn2)(void*, void*);
void func_ov002_021b6190(void* a, void* b) {
    void* m;
    b = (u8*)b + 0x80;
    m = *(void**)b;
    (*(Fn2**)m)[7](a, m);
    *(u32*)((u8*)a + 0xC) += 1;
    *(u32*)((u8*)a + 0x8) = 0xDC;
    *(u32*)((u8*)a + 0x4) -= 1;
}
