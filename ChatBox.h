#pragma once
#include <iostream>
#include <vector>
#include <string>

class ChatBox
{
public:
    ChatBox();
    ~ChatBox();
    void sendMsg(std::string msg);  //����� ������ msg � ������ ����� m_messages
    void showChatAll() const;             //�������� � ������� ���� ������ m_messages
    void showChatLast() const;            //�������� � ������� ������ ��������� ��������� (����� �� ������������...)
private:
    std::vector<std::string> m_messages;    //������ ���������
};

