//indexes the spouses from the book

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <string.h>
#include "mergesort.h"

using namespace std;

int main()
{
  ifstream data ("bookv3.txt");
  ofstream index ("index.txt");
  string temp;
  string line;
  //  info newperson;
  string husband;
  string newline;
  vector<string> spouseline;
  vector<string> namecomp;
  vector<string> indlist;
  string wifereader;
  string lastname;
  
  while(data)
    {
      data >> temp;
      //takes care of blank lines
      while(temp=="\n")
	data >> temp;
      
      //format for soldier names
      if(temp[temp.length()-1]==',')
	{
	  //reset for new person
	  namecomp.clear();
	  lastname=temp;
	  newline.clear();
	  //load new name
	  getline(data,line);
	  temp += line;
	  husband = temp;
	}

      //lets grab the spouse info
      else if(temp == "Spouse:" || temp == "Spouse" || temp =="Spouses:" || temp == "Spouses:(1)")
	{
	  data >> wifereader;
	  while(wifereader[wifereader.length()-1]!=':')
	    {
	      
	      spouseline.push_back(wifereader);
	      data >> wifereader;
	    }
	  
	  while(!spouseline.empty())
	    {
	      newline.clear();
	      namecomp.clear();
	      //remove multiple spouse tags. next while loops grabs the info for only one wife without changing husband
	      if(spouseline[0]=="(1)" || spouseline[0]=="(2)" || spouseline[0]=="(3)" || spouseline[0]=="(4)")
		spouseline.erase(spouseline.begin());
	      //grab one wife of data
	      while(!spouseline.empty() && spouseline[0]!="(1)" && spouseline[0]!="(2)" && spouseline[0]!="(3)" && spouseline[0]!="(4)")
		{
		  namecomp.push_back(spouseline[0]);
		  spouseline.erase(spouseline.begin());
		}
	      //process the name
	      //only one name, must be first.
	      if(namecomp.size()==1)
		{
		  for(int i=1;i<lastname.length();i++)
		    {
		      lastname[i]=tolower(lastname[i]);
		    }
		  newline=lastname + " " + namecomp[0] + " (" + husband + " )";
		  indlist.push_back(newline);
		}
	      //name was blank, discard
	      else if(namecomp.size()==0)
		continue;
	      else if(namecomp.size()==2)
		{
		  if(namecomp[0][namecomp[0].length()-1]==',')
		    newline=namecomp[0] + " " + namecomp[1] + " (" + husband + " )";
		  else newline=namecomp[1] + ", " + namecomp[0] + " (" + husband + " )";
		}
	      else
		{
		  namecomp.push_back(",");
		  cout << "Husband: " << husband << endl;
		  int select;
		  for(int i =0;i<namecomp.size();i++)
		    {
		      cout << "[" << i+1 << "]" << namecomp[i] << " ";
		      //chops off commas at the end.  Comma must be inserted manually.
		      if(wifereader[wifereader.length()-1]==',')
			wifereader.erase(wifereader.length()-1,1);
		    }
		  cout << endl;
		  cin >> select;
		  while( select >0)
		    {
		      if(select>namecomp.size())
			cout << "invalid selection" << endl;
		      else
			newline+=namecomp[select-1] + " ";
		      cin >> select;
		    }
		  newline+=" (" + husband + " )";
		  indlist.push_back(newline);
		}
	    }
	}
      //ignore other data field lines
      else if(temp[temp.length()-1]=':')
	getline(data,line);
    }
  SortMerge(indlist);
  for(int i=0;i<indlist.size();i++)
    {
      index << indlist[i] << endl;
    }




  return 0;
}
