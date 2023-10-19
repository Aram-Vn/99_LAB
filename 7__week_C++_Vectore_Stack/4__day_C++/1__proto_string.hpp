struct String{
private:
	int m_size;
	int m_cap;
	char* m_ptr;
public:
	void constructor();
	void destructor();
	int get_size();
	int get_cap();
private:
	char* get_ptr();

	void allocator();
	void reallocator();
public:
	char& at(int);
	char& front();
	char& back();
	const char* C_ctr();
	bool is_empty();
};
