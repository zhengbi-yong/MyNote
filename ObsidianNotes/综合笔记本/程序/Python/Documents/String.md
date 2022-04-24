# 字符串

声明字符串

```python
mystring = 'content'
mystring = "content"
```

修改大小写

```python
# 首字母大写
mystring.title()
# 全部大写
mystring.upper()
# 全部小写
mystring.lower()
```

f字符串(在字符串中使用变量)(python3.6之后)

```python
mystring1 = 'hello'
mystring2 = 'world'
mystring3 = f"{mystring1} {mystring2}"
# mystring3 = "hello world"
```

删除空白

```python
# 删除末尾的空白
mystring.rstrip()
# 删除开头的空白
mystring.lstrip()
# 删除两头的空白
mystring.strip()
```

split()方法

```python
mylist = mystring.split() # 以空格为分隔符
```

