from jinja2 import Environment
from template import TEMPLATE

TPL = Environment().from_string(TEMPLATE)
json_data = ""
try:
    with open("syntax-tree.json", "r", encoding="utf8") as fread:
        json_data = fread.read()
        
except FileNotFoundError:
    print("路径错误!")
try:
    with open("webTreeMap.html", "w+", encoding="utf-8") as fout:
        fout.write(
            TPL.render(
                json_data=json_data
            )
        )
except OSError:
    print("文件保存失败!")