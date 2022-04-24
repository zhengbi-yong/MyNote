创建一个一维的矩阵
```python
import numpy as np
my_ndarray = np.array([1,2,3])
```

创建一个多维的矩阵

```python
import numpy as np 
my_ndarray = np.array([[1,  2],  [3,  4]])  
```

给矩阵限定一个最小的维度

```python
import numpy as np 
# 虽然初始化的时候用的是一维的列表，但是限定了最小维数之后他仍然是一个二维的矩阵
my_ndarray = np.array([1, 2, 3, 4, 5], ndmin =  2)  
```

设置矩阵的元素数据类型

```python
import numpy as np 
# 将元素的数据类型设置为复数
my_ndarray = np.array([1,  2,  3], dtype = complex)  
```

