#include<iostream>
#include<string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;//纯虚函数，作为一个接口
};

class Entity : public Printable
{
public:
	 virtual std::string GetName() { return "GetName：Entity"; }//GetName是虚函数，类型可以改变
	 std::string GetClassName() override { return "Entity"; }//父类Printable写方法（没有实现），子类实现
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		:m_Name(name) {}

	std::string GetName() override { return m_Name; }//表明这是一个覆写函数
	std::string GetClassName() override { return "killer"; }
};

void Print_Name(Entity* entity)//参数的类型是Entity
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
	//参数类型是Entity，调用函数寻找当法时优先从Entity。
	Print_Name(p);//想打印出的应该是Player
	Print(e);
	Print(p);
	

	std::cin.get();
}