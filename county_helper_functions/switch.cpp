#include <fstream>
#include <string>
#include <iostream>


using namespace std;

int main()
{
  
  ifstream data ("counties.txt");
  ofstream write ("statement.txt");

  while (data)
    {
      string newcounty;
      data >> newcounty;
      
      write << "else if(" <<  "newcounty==\"" << newcounty << "\")" << endl << "{" << endl;
      write << newcounty << ".push_back(newperson.name);" << endl;
      write << "}" << endl;
	

    }




  return 0;
}
