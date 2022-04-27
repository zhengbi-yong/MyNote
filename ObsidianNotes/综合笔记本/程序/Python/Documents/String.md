# 字符串

## 声明字符串

```python
mystring = 'content'
mystring = "content"
```

> 上述两种声明方式在python中都是str类型的数据。

## 修改大小写

```python
# 首字母大写
mystring.title()
# 全部大写
mystring.upper()
# 全部小写
mystring.lower()
```

> 上述的三种方法都是有返回值的，不会改变原来字符串的值。

## f字符串

(在字符串中使用变量)(python3.6之后)

```python
mystring1 = 'hello'
mystring2 = 'world'
mystring3 = f"{mystring1} {mystring2}"
# mystring3 = "hello world"
```

## 删除空白

```python
# 删除末尾的空白
mystring.rstrip()
# 删除开头的空白
mystring.lstrip()
# 删除两头的空白
mystring.strip()
```

> 上述方法也是有返回值的方法，不会改变原字符串的值。

## split()方法

```python
mylist = mystring.split() # 以空格为分隔符
```

使用内置的split()方法只能使用一种分隔符。

## re.split()方法

```python
re.split('-| ',mystring)
```

使用re.split()方法可以使用多种分隔符，其中不同的分隔符应该以“|”符号隔开。但字符串开头和结尾的只有一边有非分隔符字符串的分隔符在分割之后会变成一个空字符（长度为0）。
