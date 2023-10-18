#include "Vector.hpp"

struct Stack
{
private:
	Vector m_obj;
public:
	void constructor(){
		m_obj.constructor();
	//	m_obj.allocator()
	}
	
	void destructor(){
		m_obj.destructor();
	}

	void Pop(){
		m_obj.Pop_back();
	}

	void Push(int tmp){
		m_obj.Push_back(tmp);
	}

	int Top(){
		return m_obj.at(m_obj.get_size() - 1);		
	}

	int Size(){
		return m_obj.get_size();
	}

	bool Empty(){
		return m_obj.empty();
	}
};
