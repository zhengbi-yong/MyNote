# 函数

## 基本操作

定义函数

```python
def myfunction(argument1, argument2, xxxxxx):
    function_content
```

函数注释

```python
def myfunction:
	"""
	myexplain about this function
	"""
    function_content
```

传递参数

```python
# 位置实参
def myfunction(argument1, argument2, xxxxxx):
    function_content
myfunction(realargument1, realargument2, xxxxxx)

# 关键字实参
def myfunction(name1 = argument1, name2 = argument2, xxxxxx):
    function_content
myfunction(name2 = realargument2, name1 = realargument1, xxxxxx) # 指定名字之后传递参数的顺序可以任意

# 给参数设定默认值
def myfunction(argument1 = 0):
    function_content

# 设置可选的参数
def myfunction(argument1, argument2 = ''): # 将参数默认值设定为空并且放在最后，即变成了一个可选的参数
    function_content

# 传递列表
myfunction(mylist) # 传递列表本身，在函数中对列表的改变将会使列表真正改变
myfunction(mylist[:]) # 传递一个列表的副本，相当于复制了一个列表\

# 传递任意数量的实参
def myfunction(*arguments): # 创建了一个空元组，任意数量参数都会被放进这个元组中
    function_content

def myfunction(**argument): # 创建了一个空字典，用于存放任意数量的关键字参数 
    function_content
```

