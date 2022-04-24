# 字典

## 基本操作

声明

```python
mydic = {}
```

访问字典中的值

```python
mydic = {key1 : value1}
mydic[key1] = value1
```

添加键值对

```python
mydic[newkey] = newvalue
```

修改键值对

```python
mydic[oldkey] = newvalue
```

删除键值对

```python
del mydic[key]
```

get()方法

```python
mydic.get(key, "No value assigned.")
# 第一个参数是想要获得的键对应的值，第二个参数是假如这个键不存在时返回的信息
```

## 高级操作

遍历字典

```python
for key,value in mydic.items():
    print(key)
    print(value)
```

遍历字典中的所有键

```python
for key in mydic.keys():
	print(key)
# keys()方法返回的是一个列表
mylist = mydic.keys()
```

遍历字典中的所有值

```python
for value in mydic.values():
	print(value)
# values()方法返回的是一个列表
mylist = mydic.values()
# 可以通过set()方法将列表转换为集合
myset = set(mylist)
```

