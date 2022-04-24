## C风格字符串读取
### cin
```c++
cin>>sample_string;//读取一个单词
```
遇到空格等空白字符的时候就会停止读取。
### getline
```c++
cin.getline(sample_string,length);
```
### get
```c++
cin.get(sample_string,length);
```
## string对象读取
### cin
### getline
string版本的getline()会自动调整目标string对象的大小，使之能够刚好存储输入的字符。
## 使用字符串
### 创建string对象
### 显示string对象的内容
### 将数据读取和附加到string对象中
### 给string对象赋值
### 将两个string对象连接起来
### 比较字符串
<符号按照ASCII码对字符串进行比较
### 获取字符串长度
string_sample.length()和string_sample.size()都可以获得字符串的长度。