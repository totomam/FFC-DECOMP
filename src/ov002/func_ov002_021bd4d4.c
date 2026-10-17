/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vec_at_c_021A50A4.c, externs renamed. */
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

/* func_021A50A4 — size 0x24 (36B), -O4
   Bounds-checked vector at(), element size 0xC:
   if (i >= count) func_0208f42c(func_02091a24(data_ov002_021d6bbc)); return data + i*0xC. */
typedef struct { u8* data; u32 count; } Vec;
extern u32 func_02091a24(u32* obj);
extern void func_0208f42c(u32 h);
extern u32 data_ov002_021d6bbc[];

void* func_ov002_021bd4d4(Vec* v, u32 i) {
    if (i >= v->count) {
        func_0208f42c(func_02091a24(data_ov002_021d6bbc));
    }
    return v->data + i * 0xC;
}
