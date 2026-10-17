/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/check_type_signature_4a90.c, externs renamed. */
/* 021B4A90 size 0x36  flags: -O4 (matches -O4 and -O4,p) */
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

extern void* func_ov002_021b45f8(void* a, void* b);
extern void func_ov002_021b101c(void* r, s32 flag);
void func_ov002_021b4a90(void* a, void* b) {
    if (b != 0
        && *(u32*)((u8*)b + 0x94) == 0xA21B58B6U
        && *(u32*)((u8*)b + 0x98) == 0x4D555642U
        && *(u32*)((u8*)b + 0x9c) == 0x5A1BB469U) {
        void* r;
        r = func_ov002_021b45f8(a, b);
        func_ov002_021b101c(r, 1);
    }
}
