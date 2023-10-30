struct String{
private:
	int m_size;
	int m_cap;
	char* m_ptr;
public:
	void constructor();   // 1
	void destructor();    // 2
	int get_size();		  // 8 ,10
	int get_cap();		  // 9
private:
	char* get_ptr();	  

	void allocator();
	void reallocator(int);
	void Error();
	int Size(const char*);
public:
	void push(const char*);
	void print();
	char& at(int);        // 3
	char& front();		  // 4
	char& back();		  // 5
	const char* C_ctr();  // 6
	bool is_empty();	  // 7
	void reserve(int);    // 11
	void shrink_to_fit(); // 12
	void insert(int, char); // 14
	void erase(int, int); // 15
	void push_back(char); // 16
	void pop_back(); 	  // 17
	void append(const char*); //18
	char* substr(int);   // 19	
	void copy(char*, int, int); // 20	
	void resize(int, char);     // 21
	char* set_get_123456789(char*, int ,int); 	
	void swap(String&);                    // 22
};
