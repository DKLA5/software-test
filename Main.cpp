// Main.cpp
#include "stdafx.h"
#include<iostream>
using namespace std;
#include "cppunit/extensions/TestFactoryRegistry.h"
#include "cppunit/ui/text/TestRunner.h"
#pragma comment (lib, "cppunitd_dll.lib")
//如果不更改TestSuite,则本文件后期不需要更改
int main()
{
CppUnit::TextUi::TestRunnerrunner;
//从注册的TestSuite中获取待定的TestSuite,没有参数获取未命名的TestSuite
CppUnit::TestFactoryRegistry&registry = CppUnit::TestFactoryRegistry::getRegistry("alltest");
//添加这个TestSuite到TestRunner
runner.gotoxyTest(registry.makeTest());
//允许测试
runner.run();
return 0;
}