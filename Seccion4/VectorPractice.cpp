#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> pets(5);

    pets[0] = "Luna";
    pets[1] = "Blank";
    pets[2] = "Mahsih";
    pets[3] = "Lobito";
    pets[4] = "Felix";


    pets.insert(pets.begin() + 2, "John Baugh");

    pets.pop_back();

    for(const string& hey : pets)
    {
        cout << hey << endl;
    }



    
    return 0;
    
}

/*VECTOR CLASS
front() returns first element
back()  returns last element
pop_back()  removes last element
insert() inserts element to a specific position requieres int 
begin() returns int to first element
push back() add element to the end
*/