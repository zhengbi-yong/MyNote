# 存储数据

用JSON格式文件存储数据

```python
# 用json.dump()来存储数据
import json
somedata
with open(filename, 'w') as f:
    json.dump(somedata, f)
```

读取数据

```python
# 用json.read()来读取数据
import json
with open(filename) as f:
    somedata = json.load(f)
```

