/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOL = 258,
     TOKEN_CONST = 259,
     TOKEN_OFFSET = 260,
     TOKEN_STRING = 261,
     TOKEN_FUNCTION = 262,
     TOKEN_IF = 263,
     TOKEN_ELSE = 264,
     TOKEN_OP_AND = 265,
     TOKEN_OP_OR = 266,
     TOKEN_OP_ASSIGN = 267,
     TOKEN_OP_CMP_NEQ = 268,
     TOKEN_OP_CMP_EQ = 269,
     TOKEN_OP_CMP_LT = 270,
     TOKEN_OP_CMP_GT = 271,
     TOKEN_OP_CMP_LEQ = 272,
     TOKEN_OP_CMP_GEQ = 273,
     TOKEN_OP_END = 274,
     TOKEN_PAR_OPEN = 275,
     TOKEN_PAR_CLOSE = 276,
     TOKEN_BLK_BEGIN = 277,
     TOKEN_BLK_END = 278,
     TOKEN_UNKNOWN = 279,
     TOKEN_OP_ADD = 280,
     TOKEN_OP_SUB = 281,
     TOKEN_OP_DIV = 282,
     TOKEN_OP_MUL = 283,
     TOKEN_UMINUS = 284,
     TOKET_OP_AND = 285,
     TOKET_OP_OR = 286,
     TOKET_OP_NOT = 287
   };
#endif
#define TOKEN_EOL 258
#define TOKEN_CONST 259
#define TOKEN_OFFSET 260
#define TOKEN_STRING 261
#define TOKEN_FUNCTION 262
#define TOKEN_IF 263
#define TOKEN_ELSE 264
#define TOKEN_OP_AND 265
#define TOKEN_OP_OR 266
#define TOKEN_OP_ASSIGN 267
#define TOKEN_OP_CMP_NEQ 268
#define TOKEN_OP_CMP_EQ 269
#define TOKEN_OP_CMP_LT 270
#define TOKEN_OP_CMP_GT 271
#define TOKEN_OP_CMP_LEQ 272
#define TOKEN_OP_CMP_GEQ 273
#define TOKEN_OP_END 274
#define TOKEN_PAR_OPEN 275
#define TOKEN_PAR_CLOSE 276
#define TOKEN_BLK_BEGIN 277
#define TOKEN_BLK_END 278
#define TOKEN_UNKNOWN 279
#define TOKEN_OP_ADD 280
#define TOKEN_OP_SUB 281
#define TOKEN_OP_DIV 282
#define TOKEN_OP_MUL 283
#define TOKEN_UMINUS 284
#define TOKET_OP_AND 285
#define TOKET_OP_OR 286
#define TOKET_OP_NOT 287




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 40 "ef_grammar.y"
typedef union YYSTYPE {
   char *string;     
   struct filter_op fop;
   /* used to create the compiler tree */
   struct block *blk;
   struct instruction *ins;
   struct ifblock *ifb;
   struct condition *cnd;
} YYSTYPE;
/* Line 1240 of yacc.c.  */
#line 110 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



