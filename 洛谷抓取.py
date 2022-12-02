import urllib.request
from lxml import etree

url = 'https://www.luogu.com.cn/problem/list?page='
headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/104.0.5112.81 Safari/537.36 Edg/104.0.1293.54'
}


def GetList(url):
    request = urllib.request.Request(url=url, headers=headers)
    response = urllib.request.urlopen(request)
    content = response.read().decode('utf-8')
    tree = etree.HTML(content)
    index = tree.xpath('//li/text()')
    title = tree.xpath('//li/a/text()')
    return index, title


def Create(name):
    dir_path = './Save/'
    with open(dir_path + name + '.cpp', 'w', encoding='utf-8') as fp:
        fp.write('#include<iostream>\n'
                 'using namespace std;\n'
                 'int main(){\n'
                 '    return 0;\n'
                 '}')
    return
def deleteError(s):
    return s.replace(" ", "").replace("\40","").replace("/","_").replace("\\","_").replace(":","_").replace("*","_").replace("\"","_").replace("<","_").replace(">","_").replace("|","_").replace("?","_")
# 循环获取数据
for idx in range(1, 150):
    # 获取数据
    index, title = GetList(url + str(idx))
    print("处理到", idx)
    for i in range(len(title)):
        s = index[i] + title[i]
        Create(deleteError(s))
