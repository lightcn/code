# -*- codeing: utf-8 -*-


i = 0
filepath = '/Users/light.zhang/Downloads/dangdangwang.txt'
with open(filepath, 'rb') as f:
    for line in f:
        # line.decode('gbk').encode('utf-8')
        s = str(line.decode('gb2312').encode('utf-8').decode('utf-8'))
        print(type(line))
        print(line)
        i = i + 1
        if i > 10:
            break
