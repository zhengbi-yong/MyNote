# 文件

## 读取文件

读取整个文件

```python
with open('file_name.xxx') as file_object:
    contents = file_object.read()
# 括号中的文件名也可以改成文件的相对路径和绝对路径
```

逐行读取文件

```python
with open(filename) as file_object:
    for line in file_object:
        print(line)
```

创建一个包含文件各行内容的列表

```python
with open(filename) as file_object:
    lines = file_object.readlines()
```

## 写入文件

写入文件

```python
# 写入模式'w'
with open(filename, 'w') as file_object:
    file_object.write("content")

# 附加模式'a'
# 读写模式'r+'
```

