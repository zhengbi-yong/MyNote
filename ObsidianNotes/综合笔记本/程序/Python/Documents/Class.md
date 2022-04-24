# 类

创建类

```python
class myclass:
	"""
	discriptions of this class
	"""
    def __init__(self, argument1, argument2, xxxxxx):
        self.value = argument1
        function_content
    
    def mymethod(self, argumentsxxxxxx):
        function_content
    
    def update_value(self, newvalue):
        self.value = newvalue
```

根据类创建实例

```python
# 创建实例
myexample = myclass()
# 调用方法
myexample.mymethod()
# 调用属性
myexample.value
```

修改属性的值

```python
# 直接修改属性
myexample.value = newvalue
# 通过方法修改
myexample.update_value(newvalue)
```

类的继承

```python
class mysonclass(myclass):
	def __init__(self, argument1, argument2, xxxxxx):
        super().__init__(argument1, argument2, xxxxxx)
```

重写父类的方法

```python
# 在子类定义代码中用相同的命名定义子类方法并且重写即可
```

