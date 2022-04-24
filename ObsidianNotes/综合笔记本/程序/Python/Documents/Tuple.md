# 元组

## 基本操作

声明

```python
mytuple = ()
```

访问元组元素

```python
element = mytuple[index]
```

直接通过幅值修改元组的元素是不允许的

```python
# 这样做是错误的
mytuple[index] = newvalue
```

合并(连接)元组

```python
mytuple1 = (1,2)
mytuple2 = ('a','b')
mytuple3 = mytuple1 + mytuple2
# mytuple3 = (1,2,'a','b')
```

虽然不能修改元组，但是可以重新定义整个元组

```python
mytuple = (1,2)
mytuple = (3,4)
# mytuple = (3,4)
```

## 元组的运算

计算元组元素个数

```python
tuplelength = len(mytuple)
```

连接

```python
mytuple3 = mytuple1 + mytuple2
```

复制元素

```python
mytuple = ('a',) * 4
# mytuple = ('a','a','a','a')
```

元素是否存在

```python
mybool = 3 in (1,2,3)
# mybool = True
```

迭代

```python
for element in mytuple:
	print(element)
```

