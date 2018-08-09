#pragma once

#include "Interface.hpp"

namespace My
{
    Interface IRuntimeModule
    {
    public:
        virtual ~IRuntimeModule(){};
        virtual int Initialize()=0; //初始化模块
        virtual void Finalize()=0;  //在模块结束的时候打扫战场
        virtual void Tick()=0;      //让驱动模块驱动该模块执行 每调用一次，模块进行一个单位的处理
    };
}