#define _CRT_SECURE_NO_WARNINGS 1

//这里的名字可以随便取，但一般的话是根据头文件的名字来取的
#ifndef __ADD__H__//如果没有定义的话，就为真，后面的就会执行
#define __ADD__H__//这边就定义一下

int Add(int, int);//就包含过去

#endif // 这段包含就结束了。
//每一次#include <***>都会吧这里边的全部代码都会复制一遍，#ifndef-->如果(定义过得话)前面代码使用过的话，就为假，就不会再复制一次了。