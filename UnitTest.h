//UnitTest.h
#pragma once

/*使用宏的CPPUNIT*/
#include "cppunit/extensions/HelperMacros.h"
class CellTest:public CppUnit::TestFixture
{
//声明一个TestSuite
CPPUNIT_TEST_SUITE(MathTest);
//添加测试用例到TestSuite,定义新的测试用例需要在这里声明一下
CPPUNIT_TEST(testgotoxy);
//TestSuite声明完成
CPPUNIT_TEST_SUITE_END();
public:
//初始化函数
void startUp();
//清理函数
void tearDown();
//测试生命游戏的测试函数
void testRelive();
protected:
intm_value1,m_value2;
};