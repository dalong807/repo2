#include "manager.h"
Manager::Manager(int id,string name,int dId){
    this->m_Id=id;
    this->m_Name=name;
    this->m_DeptId=dId;
}
void Manager::showInfo()
{
    cout<<"ְ�����"<<this->m_Id<<"\tְ������:"<<this->m_Name<<"\t��λ"<<this->getDeptName()<<"\t��λְ������ϰ彻�����������·������Ա��"<<endl;
}
string Manager::getDeptName()
{
    return string("����");
}//
// Created by 1 on 2020/9/7.
//
