// Main.cpp
#include "stdafx.h"
#include<iostream>
using namespace std;
#include "cppunit/extensions/TestFactoryRegistry.h"
#include "cppunit/ui/text/TestRunner.h"
#pragma comment (lib, "cppunitd_dll.lib")
//���������TestSuite,���ļ����ڲ���Ҫ����
int main()
{
CppUnit::TextUi::TestRunnerrunner;
//��ע���TestSuite�л�ȡ������TestSuite,û�в�����ȡδ������TestSuite
CppUnit::TestFactoryRegistry&registry = CppUnit::TestFactoryRegistry::getRegistry("alltest");
//������TestSuite��TestRunner
runner.gotoxyTest(registry.makeTest());
//�������
runner.run();
return 0;
}