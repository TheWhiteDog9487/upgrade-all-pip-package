# 本项目已经失去意义，使用[uv](https://docs.astral.sh/uv/)可以更好地管理依赖包，当然也包括一次性升级所有的依赖

# 介绍
pip升级软件包的体验，简直了。  
装了几十个包怎么可能挨个用--upgrade去弄。  
所以有了这个东西。  

# 使用
从[Release页面](https://github.com/TheWhiteDog9487/upgrade-all-pip-packagee/releases)下载Release.zip，解压所有文件并运行“升级Python包.exe”。  
出现"完成，按回车退出。"后，升级完成。

# 构造
哎呀，单文件都不会吗？  
（下面的内容假设你已经安装好了编译环境，没安装的先去安装一个C++编译环境）  
复制[源代码](https://github.com/TheWhiteDog9487/upgrade-all-pip-packagee/blob/main/main.cpp)中的所有内容，另存为一个.cpp文件（假设为a.cpp）。  
然后打开你的终端。
```shell
# MSVC用户看这边~
cl ./a.cpp /std:c++latest /EHsc
# gcc用户看这边~
g++ ./a.cpp -std=c++20
# clang用户看这边~
clang++ ./a.cpp -std=c++20
```

# 测试环境
程序运行效果：Windows 11 专业教育版 22H2  
编译：  
1. MSVC：VisualStudio2022  
1. gcc/clang：Debian(WSL)  
