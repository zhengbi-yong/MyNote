# 模块

## 函数模块

将函数存储在独立的模块中(.py文件)然后导入

```python
# 直接导入整个模块
import mymodule
mymodule.myfunction()

# 从模块中导入函数
from mymodule import myfunction
myfunction()

# 从模块中导入所有函数
from mymodule import *
myfunction()

# 重命名
import mymodule as mm
from mymodule import myfunction as mf
```

## 类模块

类模块与函数模块除了数据结构不同，其余完全一样。