//UnitTest.h
#pragma once

/*ʹ�ú��CPPUNIT*/
#include "cppunit/extensions/HelperMacros.h"
class CellTest:public CppUnit::TestFixture
{
//����һ��TestSuite
CPPUNIT_TEST_SUITE(MathTest);
//��Ӳ���������TestSuite,�����µĲ���������Ҫ����������һ��
CPPUNIT_TEST(testgotoxy);
//TestSuite�������
CPPUNIT_TEST_SUITE_END();
public:
//��ʼ������
void startUp();
//������
void tearDown();
//����������Ϸ�Ĳ��Ժ���
void testRelive();
protected:
intm_value1,m_value2;
};