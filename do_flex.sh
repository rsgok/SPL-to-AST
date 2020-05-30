if [ ! -d "dist" ]; then
  mkdir dist
fi

flex --outfile=dist/scanner.lex.yy.cpp scanner.l

cp tree.cpp dist/tree.cpp
cp tree.h dist/tree.h
cp token.h dist/token.h