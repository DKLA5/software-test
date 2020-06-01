//UnitTest.cpp
#define CELLTEST_H
#ifdef CELLTEST_H
#include "cellTest.h"
#include "cppunit/TestAssert.h"
#endif
//把这个TestSuite注册到名为"alltest"的TestSuite中，如果未定义，则会自动定义
//也可以CPPUNIT_TEST_SUITE_REGISTRATION(CellTest)；注册到全局的一个未命名的TestSuite中
CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(CellTest,"alltest");
void CellTest::startUp()
{
  init(int[][] shape) ;      // 初始化游戏 board 
　　    void tick();                    // 行进到在一个回合
　　    int[][] get();    
}
void CellTest::tearDown()
{
}
void CellTest::testRelive()
{
　　  int[][] shape = {{0, 0, 1}, {0, 0, 0}, {1, 0, 1}};
　　    Game g = new GameImplSample(shape);
　　    g.tick();
　　    // 自己死亡，周围3个存活状态，复活
　　    assertEquals(1, g.get()[1][1]);

}