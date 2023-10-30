#include <iostream>
#include "1__implim_string.cpp"

int main(){
 String str;
 str.constructor();
 String str1;
 str1.constructor();

 str.push("0123456789");

 /* str1.swap */
 /* str1.push(str.substr(5)); */
 
 /* str1.print(); */

 /* str.resize(15); */
 /* str.print(); */
 /* str.insert(0, 'a'); */
 /* std::cout << str.at(1) << std::endl; */

 /* str.erase(3, 15); */
 /* str.push_back('m'); */	
 /* str.pop_back(); */

 /* char ch[5]; */
 /* str.copy(ch, 5); */
 /* std::cout << "CH " << ch << std::endl; */

 /* char ch2[3]; */
 /* str.copy(ch2, 3, 3); */
 /* std::cout << "CH2 " << ch2 << std::endl; */

 /* str.append(" some fu gyug gyug"); */
 /* str.print(); */


 char* ch = str.substr(5); 
 std::cout << "ch" << ch << std::endl;
 

 str.destructor();
 str1.destructor();
}
