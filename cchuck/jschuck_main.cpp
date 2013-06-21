#include<stdio.h>
#include "chuck_compile.h"
#include<string>
#include<list>
int main(){
   Chuck_Compiler* cmp = new Chuck_Compiler;
   std::list<std::string> tmp;
    cmp->initialize(NULL,tmp,tmp);
    cmp->go("adsr.ck",NULL,NULL,"adsr.ck");
   delete cmp;
}
