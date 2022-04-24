# 列表

## 基本操作

声明

```python
mylist = []
```

访问列表元素

```Python
mylistelement = mylist[index]
mylistelementlast = mylist[-1] #访问最后一个元素
mylistelementlastbutone = mylist[-2] #访问倒数第二个元素,以此类推
```

修改列表元素

```python
mylist[index] = replaceelement #直接赋值进行修改
```

在列表末尾添加元素

```python
mylist.append(element)
```

在列表中插入元素

```python
mylist.insert(index, element) #第一个参数为插入的位置，第二个参数为插入的元素
```

从列表中删除元素

```python
# 1.知道index的时候用del语句
del mylist[index]
# 2.用pop()方法删除最后一个元素
mylist.pop() #像栈一样弹出栈顶元素
# 3.用pop(index)方法删除任意元素
mylist.pop(index)
# 4.已知内容用remove()方法删除
mylist.remove(element)
```

永久排序列表(直接改变列表的排列顺序)

```python
# 1.正向排序
mylist.sort()
# 2.逆向排序
mylist.sort(reverse=True)
```

临时排序列表(不改变列表储存的排列顺序)

```python
sortedmylist = sorted(mylist)
```

将列表翻转

```python
mylist.reverse()
mylist = list(reversed(mylist))
```

## 高级操作

遍历整个列表

```python
for element in mylist:
    print(element)
# element就是列表中的每一个元素
```

创建数值列表

```python
for value in range(1,5):
    print(value)
# range(1,5)是一个数值列表[1,2,3,4]
valuelist = range(start,end,step)
# start:起始数值(包括) end:终止数值(不包括) step:步长
```

对列表进行统计

```python
# 最小值
min(mylist)
# 最大值
max(mylist)
# 总合
sum(mylist)
```

列表解析

```python
# 创建一个平方数列表
squares = [value**2 for value in range(1,11)]
```

切片

```python
partmylist = mylist[start:end]
# start:起始数值(包括) end:终止数值(不包括)
# 其他特殊情况
mylist[:end] #从列表头开始直到end结束
mylist[start:] #从start开始直到列表末结束
mylist[-num:] #列表的倒数num个元素组成一个新列表
# 完整版
mylist[start:end:step]
```

复制列表

```python
# 不能直接用等号幅值来复制列表，那样只是复制了指针
newlist = mylist #(这样只能通过newlist来访问mylist而不是创建了一个新的一样的列表)
# 用切片方式创建
newlist = mylist[:]
```

