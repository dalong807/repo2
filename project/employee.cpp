#include "employee.h"
Emplyee::Emplyee(int id,string name,int dId) {
    this->m_Id=id;
    this->m_Name=name;
    this->m_DeptId=dId;
}
void Emplyee::showInfo() {
    cout<<"ְ�����"<<this->m_Id<<"\tְ������:"<<this->m_Name<<"\t��λ"<<this->getDeptName()<<"\t��λְ����ɾ�������������"<<endl;
}
string Emplyee::getDeptName() {
    return string("Ա��");
}
//
// Created by 1 on 2020/9/7.
//
