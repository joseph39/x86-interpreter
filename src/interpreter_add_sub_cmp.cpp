#ifdef _WIN32
#include "interpreter.h"
#endif

HANDLER_DEF_AR1632_IMM1632( add );
HANDLER_DEF_AR1632_IMM1632( sub );
HANDLER_DEF_AR1632_IMM1632( cmp );
HANDLER_DEF_AR1632_IMM1632( and );
HANDLER_DEF_AR1632_IMM1632( xor );
HANDLER_DEF_AR1632_IMM1632( test );

HANDLER_DEF_AL_IMM8( add );
HANDLER_DEF_AL_IMM8( sub );
HANDLER_DEF_AL_IMM8( cmp );
HANDLER_DEF_AL_IMM8( and );
HANDLER_DEF_AL_IMM8( xor );
HANDLER_DEF_AL_IMM8( test );

HANDLER_DEF_EAX_IMM32( add );
HANDLER_DEF_EAX_IMM32( sub );
HANDLER_DEF_EAX_IMM32( cmp );
HANDLER_DEF_EAX_IMM32( and );
HANDLER_DEF_EAX_IMM32( xor );
HANDLER_DEF_EAX_IMM32( test );

HANDLER_DEF_RM8_IMM8( add );
HANDLER_DEF_RM8_IMM8( sub );
HANDLER_DEF_RM8_IMM8( cmp );
HANDLER_DEF_RM8_IMM8( and );
HANDLER_DEF_RM8_IMM8( xor );
HANDLER_DEF_RM8_IMM8( test );

HANDLER_EXTOPCODE_DISPATCH( addsubcmpandxor, rm8, imm8 );
HANDLER_EXTOPCODE_DISPATCH( testnotneg, rm8, optimm8 );

HANDLER_DEF_RM1632_IMM1632( add );
HANDLER_DEF_RM1632_IMM1632( sub );
HANDLER_DEF_RM1632_IMM1632( cmp );
HANDLER_DEF_RM1632_IMM1632( and );
HANDLER_DEF_RM1632_IMM1632( xor );
HANDLER_DEF_RM1632_IMM1632( test );

HANDLER_EXTOPCODE_WITH_PREFIX_DISPATCH( addsubcmpandxor, rm1632, imm1632, 0x81 );
HANDLER_EXTOPCODE_WITH_PREFIX_DISPATCH( testnotneg, rm1632, optimm1632, 0xF7 );

HANDLER_DEF_RM32_IMM32( add );
HANDLER_DEF_RM32_IMM32( sub );
HANDLER_DEF_RM32_IMM32( cmp );
HANDLER_DEF_RM32_IMM32( and );
HANDLER_DEF_RM32_IMM32( xor );
HANDLER_DEF_RM32_IMM32( test );

HANDLER_EXTOPCODE_DISPATCH( addsubcmpandxor, rm32, imm32 );
HANDLER_EXTOPCODE_DISPATCH( testnotneg, rm32, optimm32 );

HANDLER_DEF_RM1632_IMM8( add );
HANDLER_DEF_RM1632_IMM8( sub );
HANDLER_DEF_RM1632_IMM8( cmp );
HANDLER_DEF_RM1632_IMM8( and );
HANDLER_DEF_RM1632_IMM8( xor );

HANDLER_EXTOPCODE_WITH_PREFIX_DISPATCH( addsubcmpandxor, rm1632, imm8, 0x83 );

HANDLER_DEF_RM32_IMM8( add );
HANDLER_DEF_RM32_IMM8( sub );
HANDLER_DEF_RM32_IMM8( cmp );
HANDLER_DEF_RM32_IMM8( and );
HANDLER_DEF_RM32_IMM8( xor );

HANDLER_EXTOPCODE_DISPATCH( addsubcmpandxor, rm32, imm8 );

HANDLER_DEF_RM8_R8( add );
HANDLER_DEF_RM8_R8( sub );
HANDLER_DEF_RM8_R8( cmp );
HANDLER_DEF_RM8_R8( and );
HANDLER_DEF_RM8_R8( xor );
HANDLER_DEF_RM8_R8( test );

HANDLER_DEF_RM1632_R1632( add );
HANDLER_DEF_RM1632_R1632( sub );
HANDLER_DEF_RM1632_R1632( cmp );
HANDLER_DEF_RM1632_R1632( and );
HANDLER_DEF_RM1632_R1632( xor );
HANDLER_DEF_RM1632_R1632( test );

HANDLER_DEF_RM32_R32( add );
HANDLER_DEF_RM32_R32( sub );
HANDLER_DEF_RM32_R32( cmp );
HANDLER_DEF_RM32_R32( and );
HANDLER_DEF_RM32_R32( xor );
HANDLER_DEF_RM32_R32( test );

HANDLER_DEF_R8_RM8( add );
HANDLER_DEF_R8_RM8( sub );
HANDLER_DEF_R8_RM8( cmp );
HANDLER_DEF_R8_RM8( and );
HANDLER_DEF_R8_RM8( xor );

HANDLER_DEF_R1632_RM1632( add );
HANDLER_DEF_R1632_RM1632( sub );
HANDLER_DEF_R1632_RM1632( cmp );
HANDLER_DEF_R1632_RM1632( and );
HANDLER_DEF_R1632_RM1632( xor );

HANDLER_DEF_R32_RM32( add );
HANDLER_DEF_R32_RM32( sub );
HANDLER_DEF_R32_RM32( cmp );
HANDLER_DEF_R32_RM32( and );
HANDLER_DEF_R32_RM32( xor );

HANDLER_DEF_RM8( dec );
HANDLER_DEF_RM8( inc );
HANDLER_DEF_RM8( not );
HANDLER_DEF_RM8( neg );

HANDLER_EXTOPCODE_DISPATCH( decinc, rm8,  );

HANDLER_DEF_RM1632( dec );
HANDLER_DEF_RM1632( inc );
HANDLER_DEF_RM1632( not );
HANDLER_DEF_RM1632( neg );

HANDLER_EXTOPCODE_WITH_PREFIX_DISPATCH( callpushdecinc, rm1632, , 0xFF );

HANDLER_DEF_RM32( dec );
HANDLER_DEF_RM32( inc );
HANDLER_DEF_RM32( not );
HANDLER_DEF_RM32( neg );

HANDLER_EXTOPCODE_DISPATCH( callpushdecinc, rm32,  );

HANDLER_DEF_R1632( dec, 0x48 );
HANDLER_DEF_R1632( inc, 0x40 );

HANDLER_DEF_R32( dec, 0x48 );
HANDLER_DEF_R32( inc, 0x40 );

HANDLER_DEF_RM8_1( sal );
HANDLER_DEF_RM8_1( shl );
HANDLER_DEF_RM8_1( sar );
HANDLER_DEF_RM8_1( shr );

HANDLER_EXTOPCODE_DISPATCH( salshlsarshr, rm8, 1 );

HANDLER_DEF_RM8_CL( sal );
HANDLER_DEF_RM8_CL( shl );
HANDLER_DEF_RM8_CL( sar );
HANDLER_DEF_RM8_CL( shr );

HANDLER_EXTOPCODE_DISPATCH( salshlsarshr, rm8, cl );

HANDLER_DEF_RM8_IMM8( sal );
HANDLER_DEF_RM8_IMM8( shl );
HANDLER_DEF_RM8_IMM8( sar );
HANDLER_DEF_RM8_IMM8( shr );

HANDLER_EXTOPCODE_DISPATCH( salshlsarshr, rm8, imm8 );

HANDLER_DEF_RM1632_1( sal );
HANDLER_DEF_RM1632_1( shl );
HANDLER_DEF_RM1632_1( sar );
HANDLER_DEF_RM1632_1( shr );

HANDLER_EXTOPCODE_WITH_PREFIX_DISPATCH( salshlsarshr, rm1632, 1, 0xD1 );

HANDLER_DEF_RM1632_CL( sal );
HANDLER_DEF_RM1632_CL( shl );
HANDLER_DEF_RM1632_CL( sar );
HANDLER_DEF_RM1632_CL( shr );

HANDLER_EXTOPCODE_WITH_PREFIX_DISPATCH( salshlsarshr, rm1632, cl, 0xD3 );

HANDLER_DEF_RM1632_IMM8( sal );
HANDLER_DEF_RM1632_IMM8( shl );
HANDLER_DEF_RM1632_IMM8( sar );
HANDLER_DEF_RM1632_IMM8( shr );

HANDLER_EXTOPCODE_WITH_PREFIX_DISPATCH( salshlsarshr, rm1632, imm8, 0xC1 );

HANDLER_DEF_RM32_1( sal );
HANDLER_DEF_RM32_1( shl );
HANDLER_DEF_RM32_1( sar );
HANDLER_DEF_RM32_1( shr );

HANDLER_EXTOPCODE_DISPATCH( salshlsarshr, rm32, 1 );

HANDLER_DEF_RM32_CL( sal );
HANDLER_DEF_RM32_CL( shl );
HANDLER_DEF_RM32_CL( sar );
HANDLER_DEF_RM32_CL( shr );

HANDLER_EXTOPCODE_DISPATCH( salshlsarshr, rm32, cl );

HANDLER_DEF_RM32_IMM8( sal );
HANDLER_DEF_RM32_IMM8( shl );
HANDLER_DEF_RM32_IMM8( sar );
HANDLER_DEF_RM32_IMM8( shr );

HANDLER_EXTOPCODE_DISPATCH( salshlsarshr, rm32, imm8 );

