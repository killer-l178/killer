#include<iostream>
#include<string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;//���麯������Ϊһ���ӿ�
};

class Entity : public Printable
{
public:
	 virtual std::string GetName() { return "GetName��Entity"; }//GetName���麯�������Ϳ��Ըı�
	 std::string GetClassName() override { return "Entity"; }//����Printableд������û��ʵ�֣�������ʵ��
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		:m_Name(name) {}

	std::string GetName() override { return m_Name; }//��������һ����д����
	std::string GetClassName() override { return "killer"; }
};

void Print_Name(Entity* entity)//������������Entity
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	Print_Name(e);

	Player* p = new Player("GetName:Killer");
	//����������Entity�����ú���Ѱ�ҵ���ʱ���ȴ�Entity��
	Print_Name(p);//���ӡ����Ӧ����Player
	Print(e);
	Print(p);
	

	std::cin.get();
}