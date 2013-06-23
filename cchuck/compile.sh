
#FILE_LIST="chuck.yy.c chuck.tab.c chuck_parse.cpp chuck_errmsg.cpp  chuck_absyn.cpp  chuck_utils.cpp chuck_symbol.cpp chuck_table.cpp chuck_compile.cpp  chuck_type.cpp chuck_vm.cpp chuck_emit.cpp chuck_oo.cpp chuck_scan.cpp chuck_lang.cpp util_string.cpp chuck_ugen.cpp ulib_std.cpp  jschuck_main.cpp"
FILE_LIST="chuck.yy.c chuck.tab.c chuck_parse.cpp chuck_errmsg.cpp  chuck_absyn.cpp  chuck_utils.cpp chuck_symbol.cpp chuck_table.cpp jschuck_main.cpp"



#gcc  $FILE_LIST -lstdc++  -o test.o
../../emscripten/emcc  $FILE_LIST  -o chuck_main.js  
