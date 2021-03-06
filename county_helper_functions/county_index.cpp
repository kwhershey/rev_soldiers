#include <iostream>
#include <fstream>
#include <string>
#include <string.h>



using namespace std;

  //persons info
  struct info
  {
    string name;
    string county;
  };

#include "county_list.h"


int main()
{

  ifstream data ("book.tex");

  
  string temp, line, lead;
  info newperson;
  bool dead=false;
  bool buried=false;


  while(data)
    {
      data >> temp;

      //handles blank lines
      while(temp == "\n")
	data >> temp;

      //in the book data, if the first word ends in a comma, it is a name.  
      //if not, it ends in a ":" and is a persons data.
      if(temp[temp.length()-1]==',')
	{
	  //if no burial info, but death info, load death info of previous
	  if(dead && !buried)
	    {
	      //put in county vector
	      push_to_county(newperson);
	    }
	  //reset for new person
	  dead=false;
	  buried=false;
	  //load new name
	  getline(data,line);
	  temp += line;
	  newperson.name=temp;
	}

      //lets grab the Buried info
      else if(temp == "Buried:" || temp == "Buried")
	{
	  
	  //this grabs the county info.  Assuming it is THE COUNTY formatted.
	  //if it is county: THE, does not work currently.
	  data >> lead;
	  while(lead!="County" && lead!="County," && lead!="\n")
	    {
	      temp=lead;
	      data >> lead;
	    }
	  if(lead!="\n")
	    {
	      newperson.county=temp;
	    }
	  //put in county vector
	  push_to_county(newperson);

	  buried=true;

	  getline(data,line);
	}
      //only loads the death county if there isn't a buried county as of yet.
      else if((temp == "Died:" || temp == "Died") && !buried)
	{
	  
	  //this grabs the county info.  Assuming it is THE COUNTY formatted.
	  //if it is county: THE, does not work currently.
	  data >> lead;
	  while(lead!="County" && lead!="County," && lead!="\n")
	    {
	      temp=lead;
	      data >> lead;
	    }
	  if(lead!="\n")
	    {
	      newperson.county=temp;
	    }

	  dead=true;

	  getline(data,line);
	}

      //otherwise, test if its a name1 (name2), case
      else if(temp[temp.length()-1]==':')
	{
	  getline(data,line);
	}
      else
	{
	  data >> lead;
	  if(lead[0]=='(' && lead[lead.length()-1]==',')
	    {
	      if(dead && !buried)
		{
		  //put in county vector
		  push_to_county(newperson);
		}
	      //reset for new person
	      dead=false;
	      buried=false;
	      //load new name
	      temp += lead;
	      getline(data,line);
	      temp += line;
	      newperson.name=temp;
	    }
	  else  getline(data,line);
	}
    }

  print_index();

  return 0;

}
