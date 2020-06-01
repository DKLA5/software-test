//UnitTest.cpp
#define CELLTEST_H
#ifdef CELLTEST_H
#include "cellTest.h"
#include "cppunit/TestAssert.h"
#endif
//�����TestSuiteע�ᵽ��Ϊ"alltest"��TestSuite�У����δ���壬����Զ�����
//Ҳ����CPPUNIT_TEST_SUITE_REGISTRATION(CellTest)��ע�ᵽȫ�ֵ�һ��δ������TestSuite��
CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(CellTest,"alltest");
void CellTest::startUp()
{
  init(int[][] shape) ;      // ��ʼ����Ϸ board 
����    void tick();                    // �н�����һ���غ�
����    int[][] get();    
}
void CellTest::tearDown()
{
}
void CellTest::testRelive()
{
����  int[][] shape = {{0, 0, 1}, {0, 0, 0}, {1, 0, 1}};
����    Game g = new GameImplSample(shape);
����    g.tick();
����    // �Լ���������Χ3�����״̬������
����    assertEquals(1, g.get()[1][1]);

}