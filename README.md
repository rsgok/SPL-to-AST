## SPL code to syntax tree



### quick start

```bash
# run gen_compliler.sh to build the compiler
sh ./gen_compiler.sh

# then run compiler to parse code file
./dist/compiler testcode/easy.p
# it will build syntax-tree.json in root directory

# then run cpp program to view syntax tree (bash view)
./token_tree

# and there is a better web view
# remember to install jinjia2 firstly
# python3 env (recommend the conda env)
pip install jinjia2
python generate_treemap.py

# then open webTreeMap.html in browser
```


### documentaion

repo文件目录解释

- `dist`： 存放lex和yacc程序编译结果以及compiler程序
- `json`：jsoncpp库，用于cpp中解析json文件
- `textcode`：存放示例的spl代码
- `textprocess`：快速处理token文本数据映射的util
- do_flex.sh：单独运行lex
- do_yacc.sh：单独运行yacc
- gen_compiler.sh：生成compiler
- gen_token_tree.sh：生成token_tree view
- jsoncpp.cpp：jsoncpp库cpp文件
- parse.y：**核心文件** yacc程序
- scanner.l：**核心文件** lex程序
- syntax-tree.json：生成的syntax-tree的json数据文件
- test_easy_code.sh：生成easycode.p的ast json
- token_tree.cpp：下一阶段程序编译时需要联合编译的cpp文件
- token_tree.h：下一阶段程序需要引用的头文件，用于从json数据文件中读取ast树结构，注意节点名数据类型已经转换为Token
- token.cpp：下一阶段程序编译时需要联合编译的cpp文件
- token.h：下一阶段程序需要引用的头文件，定义了token数据类型，以及关于token的转换函数
- tree.cpp：本阶段使用的cpp文件
- tree.h：本阶段使用的头文件，定义树结构，其中节点名数据类型为string


### result

web view token tree

 (太长，未完全截图)

![](http://qiniustorage.joyinn.top/20200601025210.png)

