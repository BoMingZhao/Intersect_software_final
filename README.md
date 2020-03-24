# 软件工程结对项目

此版本是最终版，目的在于让助教更好下载，从而忽略了以前的commit以及tag。

test为单元测试文件夹，其中IntersectTest1,2,3,4,5,6分别对应三个关键函数：求两条线(直线，线段，射线)间交点，求一条线(直线，射线，线段)和一个圆的交点，求两个圆的交点，

源代码在src文件夹下，bin文件夹下是core的可执行文件，可用命令行测试

debug下是封装好的动态库，使用时首先将所有头文件添加到您的项目中，然后将Intersect.dll和Intersect.lib文件拷贝到项目的debug文件夹下(这里可以随便放在哪)，在visual studio中右键项目的解决方案-->属性-->链接器-->常规-->附加库目录下点编辑，选择您刚才拷贝.dll文件和.lib文件的文件夹，确定即可，如下图：

![](https://github.com/BoMingZhao/Intersect_software/blob/master/picture/%E9%85%8D%E7%BD%AE.png)

以上就完成了配置任务，之后我们在写代码时，就可以正常引用封装好的Intersect类了，只不过需要注意的是，需要这样引用库
```
#include "Intersect.h"
#pragma comment(lib,"Intersect.lib")//这里告诉编译器我们的函数从动态库中调取
```

最后的UI界面在文件夹UI下。