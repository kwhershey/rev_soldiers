#include <fstream>
#include <string>
#include <iostream>


using namespace std;

int main()
{
  
  ifstream data ("counties.txt");
  ofstream write ("print.txt");

  string newcounty;

  while (data)
    {

      data >> newcounty;

      
      write << "if(!" << newcounty << ".empty())" << endl << "{" << endl;
      write << "index << \"" << newcounty << ":\" << endl;" << endl;
      write << "for(int i=0;i<" << newcounty << ".size(); i++)" << endl << "{" << endl;
      write << "index << " << newcounty << "[i] << endl;" << endl << "}" << endl << "}" << endl;
	
    }




  return 0;
}
