echo "clear old version"
rm -rf dist
echo "done!"

echo "stage1: do flex"
sh ./do_flex.sh
echo "done!"

echo "stage2: do yacc"
sh ./do_yacc.sh
echo "done!"

echo "stage3: do compiler"
cd dist
echo '#include"tree.h"\n' | cat - y.tab.hpp > y.tab.hpp.temp && rm y.tab.hpp && mv y.tab.hpp.temp y.tab.hpp

alias g++='g++ -std=c++11'
g++ tree.cpp scanner.lex.yy.cpp y.tab.cpp -o compiler
echo "done!"