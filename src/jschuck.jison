
/* description: Parses end executes mathematical expressions. */

/* lexical grammar */
%lex
%%

\s+                   /* skip whitespace */
[A-Za-z_][A-Za-z0-9_]*  return 'ID'
[0-9]+                return 'NUM'
"=>"                  return 'CHUCK'
"->"                  return 'ARROW_RIGHT'
"<-"                  return 'ARROW_LEFT'
","                   return 'COMMA'
<<EOF>>               return 'EOF'
.                     return 'INVALID'

/lex

/* operator associations and precedence */

%left '+' '-'
%left '*' '/'
%left '^'
%right '!'
%right '%'
%left UMINUS
%right COMMA
%start program_section

%% /* language grammar */

program_section
    : statement_list
        { console.log($1); }
    ;
statement_list
    : expression_statement
      {$$=$1;}
    | expression_statement statement_list
      {$$=$2; $$.push($1);}
    ;
expression_statement
    : SEMICOLON
      {$$="";}
    | chuck_expression SEMICOLON
      { $$=$1;}
    ;
chuck_expression
     : arrow_expression
      { $$=[$1]; }
     | chuck_expression CHUCK arrow_expression
       {$$=[$1,$3];}
     ;
arrow_expression
    : var_decl_list
       {$$=$1; }
    | ID var_decl_list
      {$$=[$1,$2];}
    ;

var_decl_list
    : ID
       { $$ = $1; }
    ;

