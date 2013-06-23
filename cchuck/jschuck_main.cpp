#include<stdio.h>
//#include "chuck_compile.h"
#include "chuck_parse.h"
#include<string>
#include<list>
void dump_astStmtList(a_Stmt_List stmt_list){
}
void dump_astClassDef(a_Class_Def class_def){
}
void dump_astFuncDef(a_Func_Def func_def){

}
void dump_astSection(a_Section section){
    switch(section->s_type){
       case ae_section_stmt:
         printf("Statement Section \n"); 
         dump_astStmtList(section->stmt_list);
         break;
       case ae_section_func:
         printf("Function section \n");
         dump_astFuncDef(section->func_def);
         break;
       case ae_section_class:
         printf("Class section \n");
         dump_astClassDef(section->class_def);
         break;
       default:
         printf("Error Invalid Section\n");
         break;
    }    
}
void dump_astProgram(a_Program prog){
    while(prog){
      dump_astSection(prog->section);
      prog=prog->next;
    }
}
int main(int argc,char* argv[]){
 /*  Chuck_Compiler* cmp = new Chuck_Compiler;
   std::list<std::string> tmp;
    cmp->initialize(NULL,tmp,tmp);
    cmp->go("adsr.ck",NULL,NULL,"adsr.ck");
   delete cmp;*/
  if(argc>1){
    fprintf(stderr,"processing file %s\n",argv[1]);
   chuck_parse(argv[1],NULL,0);
   dump_astProgram(g_program);
  }
   return 0;
}
