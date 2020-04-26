#include <stddef.h>

#include "MDLParser.h"

void *mdl_yyalloc(size_t size, void *pUserData);
void *mdl_yyrealloc(void *ptr, size_t size, void *pUserData);
void mdl_yyfree(void *ptr, void *pUserData);

#define YYMALLOC(size) (mdl_yyalloc((size), pUserData))
#define YYREALLOC(ptr, size) (mdl_yyrealloc((ptr), (size), pUserData))
#define YYFREE(ptr) (mdl_yyfree((ptr), pUserData))

//https://www.gnu.org/software/bison/manual/html_node/Table-of-Symbols.html
//#define YYSTACK_USE_ALLOCA 1
#include "MDLParser.inl"

//https://www.gnu.org/software/bison/manual/html_node/Union-Decl.html#Union-Decl
//https://www.gnu.org/software/bison/manual/html_node/Location-Type.html

int YYTOKEN_STRING_LITERAL = STRING_LITERAL;
int YYTOKEN_SEMICOLON = SEMICOLON;
int YYTOKEN_COMMA = COMMA;
int YYTOKEN_MDL = MDL;
int YYTOKEN_IMPORT = IMPORT;
int YYTOKEN_USING = USING;
int YYTOKEN_MODULE = MODULE;
int YYTOKEN_EXPORT = EXPORT;
int YYTOKEN_UNIFORM = UNIFORM;
int YYTOKEN_VARYING = VARYING;
int YYTOKEN_BOOL = BOOL;
int YYTOKEN_BOOL2 = BOOL2;
int YYTOKEN_BOOL3 = BOOL3;
int YYTOKEN_BOOL4 = BOOL4;
int YYTOKEN_INT = INT;
int YYTOKEN_INT2 = INT2;
int YYTOKEN_INT3 = INT3;
int YYTOKEN_INT4 = INT4;
int YYTOKEN_FLOAT = FLOAT;
int YYTOKEN_FLOAT2 = FLOAT2;
int YYTOKEN_FLOAT3 = FLOAT3;
int YYTOKEN_FLOAT4 = FLOAT4;
int YYTOKEN_FLOAT2X2 = FLOAT2X2;
int YYTOKEN_FLOAT2X3 = FLOAT2X3;
int YYTOKEN_FLOAT2X4 = FLOAT2X4;
int YYTOKEN_FLOAT3X2 = FLOAT3X2;
int YYTOKEN_FLOAT3X3 = FLOAT3X3;
int YYTOKEN_FLOAT3X4 = FLOAT3X4;
int YYTOKEN_FLOAT4X2 = FLOAT4X2;
int YYTOKEN_FLOAT4X3 = FLOAT4X3;
int YYTOKEN_FLOAT4X4 = FLOAT4X4;
int YYTOKEN_DOUBLE = DOUBLE;
int YYTOKEN_DOUBLE2 = DOUBLE2;
int YYTOKEN_DOUBLE3 = DOUBLE3;
int YYTOKEN_DOUBLE4 = DOUBLE4;
int YYTOKEN_DOUBLE2X2 = DOUBLE2X2;
int YYTOKEN_DOUBLE2X3 = DOUBLE2X3;
int YYTOKEN_DOUBLE2X4 = DOUBLE2X4;
int YYTOKEN_DOUBLE3X2 = DOUBLE3X2;
int YYTOKEN_DOUBLE3X3 = DOUBLE3X3;
int YYTOKEN_DOUBLE3X4 = DOUBLE3X4;
int YYTOKEN_DOUBLE4X2 = DOUBLE4X2;
int YYTOKEN_DOUBLE4X3 = DOUBLE4X3;
int YYTOKEN_DOUBLE4X4 = DOUBLE4X4;
int YYTOKEN_COLOR = COLOR;
int YYTOKEN_STRING = STRING;
int YYTOKEN_SDF = SDF;
int YYTOKEN_EDF = EDF;
int YYTOKEN_VDF = VDF;
int YYTOKEN_LIGHT_PROFILE = LIGHT_PROFILE;
int YYTOKEN_MATERIAL = MATERIAL;
int YYTOKEN_MATERIAL_EMISSION = MATERIAL_EMISSION;
int YYTOKEN_MATERIAL_GEOMETRY = MATERIAL_GEOMETRY;
int YYTOKEN_MATERIAL_SURFACE = MATERIAL_SURFACE;
int YYTOKEN_MATERIAL_VOLUME = MATERIAL_VOLUME;
int YYTOKEN_TEXTURE_2D = TEXTURE_2D;
int YYTOKEN_TEXTURE_3D = TEXTURE_3D;
int YYTOKEN_TEXTURE_CUBE = TEXTURE_CUBE;
int YYTOKEN_TEXTURE_PTEX = TEXTURE_PTEX;
int YYTOKEN_BSDF_MEASUREMENT = BSDF_MEASUREMENT;
int YYTOKEN_INTENSITY_MODE = INTENSITY_MODE;
int YYTOKEN_INTENSITY_RADIANT_EXITANCE = INTENSITY_RADIANT_EXITANCE;
int YYTOKEN_INTENSITY_POWER = INTENSITY_POWER;
int YYTOKEN_HAIR_BSDF = HAIR_BSDF;
int YYTOKEN_TRUE = TRUE;
int YYTOKEN_FALSE = FALSE;
int YYTOKEN_LET = LET;
int YYTOKEN_IN = IN;
int YYTOKEN_ANNOTATION = ANNOTATION;
int YYTOKEN_CONST = CONST;
int YYTOKEN_TYPEDEF = TYPEDEF;
int YYTOKEN_STRUCT = STRUCT;
int YYTOKEN_ENUM = ENUM;
int YYTOKEN_IF = IF;
int YYTOKEN_ELSE = ELSE;
int YYTOKEN_SWITCH = SWITCH;
int YYTOKEN_CASE = CASE;
int YYTOKEN_DEFAULT = DEFAULT;
int YYTOKEN_WHILE = WHILE;
int YYTOKEN_DO = DO;
int YYTOKEN_FOR = FOR;
int YYTOKEN_BREAK = BREAK;
int YYTOKEN_CONTINUE = CONTINUE;
int YYTOKEN_RETURN = RETURN;
int YYTOKEN_CAST = CAST;
int YYTOKEN_ASSIGN_OP = ASSIGN_OP;
int YYTOKEN_BITWISE_OR_ASSIGN_OP = BITWISE_OR_ASSIGN_OP;
int YYTOKEN_BITWISE_AND_ASSIGN_OP = BITWISE_AND_ASSIGN_OP;
int YYTOKEN_BITWISE_XOR_ASSIGN_OP = BITWISE_XOR_ASSIGN_OP;
int YYTOKEN_SHIFT_LEFT_ASSIGN_OP = SHIFT_LEFT_ASSIGN_OP;
int YYTOKEN_SHIFT_RIGHT_ASSIGN_OP = SHIFT_RIGHT_ASSIGN_OP;
int YYTOKEN_UNSIGNED_SHIFT_RIGHT_ASSIGN_OP = UNSIGNED_SHIFT_RIGHT_ASSIGN_OP;
int YYTOKEN_MULTIPLY_ASSIGN_OP = MULTIPLY_ASSIGN_OP;
int YYTOKEN_DIVIDE_ASSIGN_OP = DIVIDE_ASSIGN_OP;
int YYTOKEN_MODULO_ASSIGN_OP = MODULO_ASSIGN_OP;
int YYTOKEN_PLUS_ASSIGN_OP = PLUS_ASSIGN_OP;
int YYTOKEN_MINUS_ASSIGN_OP = MINUS_ASSIGN_OP;
int YYTOKEN_CONDITIONAL_OP = CONDITIONAL_OP;
int YYTOKEN_LOGICAL_OR_OP = LOGICAL_OR_OP;
int YYTOKEN_LOGICAL_AND_OP = LOGICAL_AND_OP;
int YYTOKEN_BITWISE_OR_OP = BITWISE_OR_OP;
int YYTOKEN_BITWISE_XOR_OP = BITWISE_XOR_OP;
int YYTOKEN_BITWISE_AND_OP = BITWISE_AND_OP;
int YYTOKEN_EQUAL_OP = EQUAL_OP;
int YYTOKEN_NOT_EQUAL_OP = NOT_EQUAL_OP;
int YYTOKEN_LESS_OR_EQUAL_OP = LESS_OR_EQUAL_OP;
int YYTOKEN_GREATER_OR_EQUAL_OP = GREATER_OR_EQUAL_OP;
int YYTOKEN_SHIFT_LEFT_OP = SHIFT_LEFT_OP;
int YYTOKEN_SHIFT_RIGHT_OP = SHIFT_RIGHT_OP;
int YYTOKEN_UNSIGNED_SHIFT_RIGHT_OP = UNSIGNED_SHIFT_RIGHT_OP;
int YYTOKEN_DIVIDE_OP = DIVIDE_OP;
int YYTOKEN_MODULO_OP = MODULO_OP;
int YYTOKEN_BITWISE_COMPLEMENT_OP = BITWISE_COMPLEMENT_OP;
int YYTOKEN_LOGICAL_NOT_OP = LOGICAL_NOT_OP;
int YYTOKEN_POSITIVE_OP = POSITIVE_OP;
int YYTOKEN_NEGATIVE_OP = NEGATIVE_OP;
int YYTOKEN_INCREMENT_OP = INCREMENT_OP;
int YYTOKEN_DECREMENT_OP = DECREMENT_OP;
int YYTOKEN_DOT = DOT;
int YYTOKEN_DOTDOT = DOTDOT;
int YYTOKEN_SCOPE = SCOPE;
int YYTOKEN_STAR = STAR;
int YYTOKEN_COLON = COLON;
int YYTOKEN_ANNOTATION_BLOCK_BEGIN = ANNOTATION_BLOCK_BEGIN;
int YYTOKEN_ANNOTATION_BLOCK_END = ANNOTATION_BLOCK_END;
int YYTOKEN_LEFT_PARENTHESIS = LEFT_PARENTHESIS;
int YYTOKEN_RIGHT_PARENTHESIS = RIGHT_PARENTHESIS;
int YYTOKEN_LEFT_SQUARE_BRACKET = LEFT_SQUARE_BRACKET;
int YYTOKEN_RIGHT_SQUARE_BRACKET = RIGHT_SQUARE_BRACKET;
int YYTOKEN_LEFT_ANGLE_BRACKET = LEFT_ANGLE_BRACKET;
int YYTOKEN_RIGHT_ANGLE_BRACKET = RIGHT_ANGLE_BRACKET;
int YYTOKEN_LEFT_CURLY_BRACE = LEFT_CURLY_BRACE;
int YYTOKEN_RIGHT_CURLY_BRACE = RIGHT_CURLY_BRACE;
int YYTOKEN_IDENT = IDENT;
int YYTOKEN_INTEGER_LITERAL = INTEGER_LITERAL;
int YYTOKEN_FRACT_LITERAL = FRACT_LITERAL;
int YYTOKEN_FLOATING_LITERAL = FLOATING_LITERAL;
int YYTOKEN_DOUBLE_LITERAL = DOUBLE_LITERAL;

static void _static_assert_mdl_yy_parser_(void)
{
    char _static_assert_yyeof_[((YYEOF == 0) ? 1 : -1)];
}