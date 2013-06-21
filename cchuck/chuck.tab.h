/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     STRING_LIT = 259,
     NUM = 260,
     FLOAT = 261,
     POUND = 262,
     COMMA = 263,
     COLON = 264,
     SEMICOLON = 265,
     LPAREN = 266,
     RPAREN = 267,
     LBRACK = 268,
     RBRACK = 269,
     LBRACE = 270,
     RBRACE = 271,
     DOT = 272,
     PLUS = 273,
     MINUS = 274,
     TIMES = 275,
     DIVIDE = 276,
     PERCENT = 277,
     EQ = 278,
     NEQ = 279,
     LT = 280,
     LE = 281,
     GT = 282,
     GE = 283,
     AND = 284,
     OR = 285,
     ASSIGN = 286,
     IF = 287,
     THEN = 288,
     ELSE = 289,
     WHILE = 290,
     FOR = 291,
     DO = 292,
     LOOP = 293,
     BREAK = 294,
     CONTINUE = 295,
     NULL_TOK = 296,
     FUNCTION = 297,
     RETURN = 298,
     QUESTION = 299,
     EXCLAMATION = 300,
     S_OR = 301,
     S_AND = 302,
     S_XOR = 303,
     PLUSPLUS = 304,
     MINUSMINUS = 305,
     DOLLAR = 306,
     POUNDPAREN = 307,
     PERCENTPAREN = 308,
     SIMULT = 309,
     PATTERN = 310,
     CODE = 311,
     TRANSPORT = 312,
     HOST = 313,
     TIME = 314,
     WHENEVER = 315,
     NEXT = 316,
     UNTIL = 317,
     EVERY = 318,
     BEFORE = 319,
     AFTER = 320,
     AT = 321,
     AT_SYM = 322,
     ATAT_SYM = 323,
     NEW = 324,
     SIZEOF = 325,
     TYPEOF = 326,
     SAME = 327,
     PLUS_CHUCK = 328,
     MINUS_CHUCK = 329,
     TIMES_CHUCK = 330,
     DIVIDE_CHUCK = 331,
     S_AND_CHUCK = 332,
     S_OR_CHUCK = 333,
     S_XOR_CHUCK = 334,
     SHIFT_RIGHT_CHUCK = 335,
     SHIFT_LEFT_CHUCK = 336,
     PERCENT_CHUCK = 337,
     SHIFT_RIGHT = 338,
     SHIFT_LEFT = 339,
     TILDA = 340,
     CHUCK = 341,
     COLONCOLON = 342,
     S_CHUCK = 343,
     AT_CHUCK = 344,
     LEFT_S_CHUCK = 345,
     UNCHUCK = 346,
     UPCHUCK = 347,
     CLASS = 348,
     INTERFACE = 349,
     EXTENDS = 350,
     IMPLEMENTS = 351,
     PUBLIC = 352,
     PROTECTED = 353,
     PRIVATE = 354,
     STATIC = 355,
     ABSTRACT = 356,
     CONST = 357,
     SPORK = 358,
     ARROW_RIGHT = 359,
     ARROW_LEFT = 360,
     L_HACK = 361,
     R_HACK = 362
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 59 "chuck.y"

    int pos;
    int ival;
    double fval;
    c_str sval;
    
    a_Program program;
    a_Section program_section;
    a_Stmt_List stmt_list;
    a_Class_Def class_def;
    a_Class_Ext class_ext;
    a_Class_Body class_body;
    a_Stmt stmt;
    a_Exp exp;
    a_Func_Def func_def;
    a_Var_Decl_List var_decl_list;
    a_Var_Decl var_decl;
    a_Type_Decl type_decl;
    a_Arg_List arg_list;
    a_Id_List id_list;
    a_Array_Sub array_sub;
    a_Complex complex_exp;
    a_Polar polar_exp;



/* Line 2068 of yacc.c  */
#line 184 "chuck.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


